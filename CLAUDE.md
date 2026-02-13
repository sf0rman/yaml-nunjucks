# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

A Zed IDE extension providing syntax highlighting for `.njk` files containing YAML with embedded Nunjucks template syntax. The extension uses a custom tree-sitter grammar that parses both YAML and Nunjucks in a single pass.

## Development Setup

### Prerequisites
- Rust toolchain with `wasm32-wasip2` target: `rustup target add wasm32-wasip2`
- `cargo-component`: `cargo install cargo-component`
- Node.js and npm (for tree-sitter CLI)

### Build Commands

**Build Custom Grammar:**
```bash
cd grammars/yaml-nunjucks
npm install
npx tree-sitter generate
```

**Test Grammar:**
```bash
cd grammars/yaml-nunjucks
npx tree-sitter parse ../../example.njk
```

**Build Rust Extension (optional - Zed builds automatically):**
```bash
cargo component build --release --target wasm32-wasip2
cp target/wasm32-wasip2/release/yaml_nunjucks.wasm extension.wasm
```

### Local Development Workflow

Zed builds the extension automatically when opened as a dev extension:

1. **Open this directory in Zed**
2. **Run command**: "zed: install dev extension" (opens picker with this extension)
3. **Make changes** to `.scm` files, `grammar.js`, or Rust code
4. **Reload Zed** - changes take effect immediately

## Architecture

### Custom Combined Grammar

This extension uses a **custom tree-sitter grammar** that combines YAML and Nunjucks parsing in a single grammar file, rather than using injection.

**Key Design Decision**: Instead of trying to inject YAML into Jinja2 grammar (which uses hidden `_text` nodes) or vice versa, we created a line-oriented grammar that recognizes both syntaxes simultaneously.

**Grammar Structure** (`grammars/yaml-nunjucks/grammar.js`):
- **Line-based parsing**: Each line can contain:
  - Nunjucks statements: `{% if %}`, `{% for %}`, etc.
  - Nunjucks expressions: `{{ variable }}`
  - Nunjucks comments: `{# comment #}`
  - YAML mappings: `key: value`
  - YAML sequences: `- item`
  - YAML comments: `# comment`

- **Node types exposed** for highlighting:
  - `nunjucks_statement` - Template control structures
  - `nunjucks_expression` - Template variable expressions
  - `nunjucks_comment` - Template comments
  - `yaml_pair` - YAML key: value pairs
  - `yaml_key` - YAML keys (highlighted as properties)
  - `yaml_value` - YAML values
  - `yaml_string` - Quoted YAML strings
  - `yaml_mixed` - Values containing both text and templates
  - `yaml_list_item` - YAML list items (starts with `-`)
  - `comment` - YAML comments

**Why This Approach:**
- **Simpler than injection**: Avoids hidden node types and complex injection rules
- **Both grammars work together**: YAML structure and Nunjucks templates both get proper highlighting
- **Queryable nodes**: All nodes are named and can be queried in `.scm` files
- **No LSP needed**: Tree-sitter provides all the highlighting we need

## File Structure

```
.
├── src/lib.rs                          # Minimal Rust extension (no LSP)
├── grammars/yaml-nunjucks/
│   ├── grammar.js                      # Custom combined grammar
│   ├── package.json                    # Tree-sitter configuration
│   ├── queries/
│   │   └── highlights.scm              # Highlighting queries (copied to languages/)
│   └── src/                            # Generated parser (parser.c, etc.)
├── languages/yaml-nunjucks/
│   ├── config.toml                     # Language settings (.njk suffix)
│   ├── highlights.scm                  # Syntax highlighting rules
│   ├── injections.scm                  # Empty (not using injection)
│   ├── brackets.scm                    # Bracket matching
│   └── indents.scm                     # Indentation rules
├── extension.toml                      # Zed extension metadata
├── Cargo.toml                          # Rust dependencies (only zed_extension_api)
└── example.njk                         # Example file for testing
```

**No Longer Used** (removed in simplification):
- `lsp/` directory - LSP server removed
- `yaml-nunjucks-lsp` binary - No longer needed

## Key Implementation Details

### Grammar Rules (grammars/yaml-nunjucks/grammar.js)

**Line Structure:**
```javascript
_line: $ => choice(
  seq(optional(/[ \t]+/), $.nunjucks_statement, /\r?\n/),
  seq(optional(/[ \t]+/), $.yaml_pair, /\r?\n/),
  // ... other line types
)
```

Each line starts with optional indentation, contains one of the recognized patterns, and ends with a newline.

**YAML Pair:**
```javascript
yaml_pair: $ => seq(
  $.yaml_key,
  ':',
  optional(seq(/[ \t]+/, $.yaml_value))
)
```

**Nunjucks Expression:**
```javascript
nunjucks_expression: $ => seq('{{', $._expr_content, '}}')
```

**Mixed Values** (text + templates):
```javascript
yaml_mixed: $ => choice(
  seq($.nunjucks_expression, repeat1(...)),
  seq(/text/, repeat1(...))
)
```

### Highlighting (languages/yaml-nunjucks/highlights.scm)

Highlights are applied to the custom grammar's node types:

```scheme
; YAML keys as properties
(yaml_pair key: (yaml_key) @property)

; Nunjucks expressions as embedded content
(nunjucks_expression) @embedded

; Nunjucks statements as keywords
(nunjucks_statement) @keyword

; Strings
(yaml_string) @string
```

### Language Configuration (languages/yaml-nunjucks/config.toml)

- File suffix: `.njk`
- Grammar: `yaml-nunjucks` (our custom grammar)
- Tab size: 2 spaces, soft tabs
- Auto-closes: `{{ }}`, `{% %}`, brackets, quotes
- Line comments: `#` (YAML style)

### Extension Entry Point (src/lib.rs)

Minimal implementation that doesn't provide an LSP:

```rust
impl zed::Extension for YamlNunjucksExtension {
    fn new() -> Self { Self }

    fn language_server_command(...) -> Result<Command> {
        Err("No language server configured".into())
    }
}
```

Zed will automatically:
1. Load `extension.wasm` (built from `src/lib.rs`)
2. Compile the `yaml-nunjucks` grammar from `grammars/yaml-nunjucks/grammar.js`
3. Apply highlights from `languages/yaml-nunjucks/highlights.scm`

## Development Workflow

### Modifying the Grammar

1. Edit `grammars/yaml-nunjucks/grammar.js`
2. Regenerate: `cd grammars/yaml-nunjucks && npx tree-sitter generate`
3. Test: `npx tree-sitter parse ../../example.njk`
4. Restart Zed - changes take effect

### Modifying Syntax Highlighting

1. Edit `languages/yaml-nunjucks/highlights.scm`
2. Restart Zed - changes take effect immediately

### Modifying the Rust Extension

1. Edit `src/lib.rs`
2. Restart Zed - Zed rebuilds WASM automatically
3. If manual build needed: `cargo component build --release --target wasm32-wasip2`

## Testing

### Grammar Testing

```bash
cd grammars/yaml-nunjucks
npx tree-sitter parse ../../example.njk
```

This shows the parse tree with all recognized nodes.

### Manual Testing in Zed

1. Build grammar (if modified): `cd grammars/yaml-nunjucks && npx tree-sitter generate`
2. In Zed, run command: "zed: install dev extension"
3. Open `example.njk` or create a `.njk` file
4. **Verify syntax highlighting:**
   - YAML keys highlighted as properties (different color)
   - YAML values highlighted as strings
   - Nunjucks delimiters (`{{`, `}}`, `{%`, `%}`) highlighted
   - Nunjucks expressions highlighted as embedded content
   - Comments highlighted consistently

## Distribution Package

For publishing to Zed extension registry:

**Required files:**
```
extension.wasm                          # Built from Rust
extension.toml                          # Extension metadata
languages/yaml-nunjucks/
  ├── config.toml                       # Language config
  ├── highlights.scm                    # Syntax highlighting
  ├── brackets.scm                      # Bracket matching
  └── indents.scm                       # Indentation
grammars/yaml-nunjucks/
  ├── grammar.js                        # Grammar source
  └── src/
      ├── parser.c                      # Generated parser
      ├── scanner.c                     # Scanner (if any)
      └── node-types.json               # Node type metadata
```

**Not needed in package:**
- `lsp/` directory (removed)
- Development files (`Cargo.toml`, `package.json`)
- Build artifacts (`target/`)
- Documentation (hosted on GitHub)

Zed extension system handles:
- Compiling the tree-sitter grammar from source
- Loading the WASM extension
- Applying syntax highlighting

## Important Constraints

### Zed Extension Requirements

- WASM must be built as a WebAssembly **component** (use `cargo-component`)
- Use `cargo component build --target wasm32-wasip2`
- Grammar must be valid tree-sitter grammar (test with `tree-sitter generate`)

### Tree-sitter Grammar Requirements

- No regex anchors (`^`, `$`) - not supported
- Escape special chars in character classes: `[^\[\]]` not `[^[]]`
- Hidden nodes (prefix `_`) cannot be queried in `.scm` files
- Avoid conflicts - use precedence or explicit conflict declarations

### Grammar Limitations

**Current limitations:**
- Indentation is recognized but not structurally significant
- Multi-line Nunjucks blocks (`{% if %}...{% endif %}`) are treated as separate statements
- Complex YAML features (anchors, aliases, multi-line strings) not fully supported

**Why these trade-offs:**
- Prioritizes highlighting correctness over full YAML/Nunjucks spec compliance
- Avoids external C scanners (keeps grammar portable and maintainable)
- Handles 90% of real-world usage patterns

## Debugging

### Grammar Not Parsing Correctly

1. Test parse: `npx tree-sitter parse example.njk`
2. Look for ERROR nodes in output
3. Check regex patterns in `grammar.js`
4. Verify node types exist: check `src/node-types.json` after generation

### Syntax Highlighting Issues

1. Verify file has `.njk` extension
2. Check `.scm` file syntax - must use actual node types
3. Restart Zed after modifying `.scm` files
4. Check Zed logs:
   - macOS: `~/Library/Logs/Zed/Zed.log`
   - Linux: `~/.local/share/zed/logs/`

### Build Issues

- **Rust**: Ensure `wasm32-wasip2` target: `rustup target add wasm32-wasip2`
- **Rust**: Ensure `cargo-component`: `cargo install cargo-component`
- **Grammar**: Ensure tree-sitter-cli: `npm install tree-sitter-cli`
- **Grammar parse errors**: Check regex syntax, escape special chars

## Common Issues

### "Query error: Invalid node type"

**Cause**: `.scm` file references a node type that doesn't exist in the grammar.

**Solution**: Only use node types from `src/node-types.json`:
- Check grammar source: `grammars/yaml-nunjucks/grammar.js`
- Look for rules without `_` prefix (hidden rules can't be queried)
- Regenerate grammar: `npx tree-sitter generate`

### Extension Loads But No Highlighting

**Cause**: Grammar might not be building or queries not matching.

**Solution**:
1. Check grammar built successfully: `ls grammars/yaml-nunjucks/src/parser.c`
2. Test parse: `npx tree-sitter parse example.njk`
3. Verify node types in parse output match those in `highlights.scm`
4. Restart Zed

### YAML Structure Not Highlighted Differently

**Cause**: Keys and values might be using same highlight group.

**Solution**:
- Keys use `@property` - should be distinct color
- Values use `@string` or `@string.special`
- Check Zed theme supports these highlight groups
- Some themes may use similar colors - try a different theme to verify

## Future Enhancements

Potential improvements (not currently implemented):

1. **Better indentation handling**: Track indentation levels for better structure parsing
2. **Multi-line support**: Handle Nunjucks blocks that span multiple lines
3. **Full YAML spec**: Add support for anchors, aliases, block scalars
4. **Validation**: Optional LSP for YAML validation (currently removed for simplicity)
5. **Semantic tokens**: Rich semantic highlighting via LSP protocol
