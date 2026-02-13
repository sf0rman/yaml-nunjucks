# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

A Zed editor extension providing syntax highlighting and editor support for YAML files with embedded Nunjucks template syntax (`.njk` files). The extension also supports CloudFormation and OrgFormation intrinsic functions.

## Build Commands

### Extension (Rust → WASM)
```bash
# Build the extension for Zed
cargo build --target wasm32-wasip1 --release

# The output WASM file is used by Zed
# Copy target/wasm32-wasip1/release/yaml_nunjucks.wasm to extension.wasm if needed
```

### Tree-sitter Grammar
```bash
# Navigate to grammar directory first
cd grammars/tree-sitter-yaml-nunjucks

# Generate parser from grammar.js
npx tree-sitter generate

# Test the grammar
npx tree-sitter test

# Parse a file to see the syntax tree
npx tree-sitter parse ../../example.njk
```

### Prerequisites
- Rust toolchain with WASM targets: `wasm32-wasip1` and `wasm32-wasip2`
- Node.js and npm for tree-sitter CLI
- Zed editor for testing the extension locally

## Architecture

### Extension Entry Point
- `src/lib.rs`: Minimal Zed extension implementation
  - No language server configured (tree-sitter only)
  - Implements `zed::Extension` trait
  - Registers the extension with `zed::register_extension!` macro

### Grammar Definition
- `grammars/tree-sitter-yaml-nunjucks/grammar.js`: Tree-sitter grammar specification
  - Combines YAML syntax with Nunjucks templating constructs
  - Supports CloudFormation intrinsic functions (`!Ref`, `!Sub`, `!GetAtt`, etc.)
  - Supports OrgFormation tags (`!GetOrganizationBinding`, `!Foreach`, etc.)
  - Uses precedence rules to ensure keywords are captured correctly

### Language Configuration
- `languages/yaml-nunjucks/config.toml`: Editor behavior
  - File extension: `.njk`
  - Auto-closing brackets for `{{ }}`, `{% %}`, quotes, etc.
  - Tab settings (2 spaces, soft tabs)

- `languages/yaml-nunjucks/highlights.scm`: Syntax highlighting queries
  - Color scheme based on Go-lang and YAML conventions
  - Nunjucks keywords: blue (@keyword)
  - Variables/expressions: light (@variable)
  - CF intrinsic functions: green (@type)
  - Strings: orange/brown (@string)
  - Comments: gray (@comment)

### Extension Metadata
- `extension.toml`: Zed extension manifest
  - Points to grammar repository and revision
  - Update the `rev` field when grammar changes are committed

## Development Workflow

### Modifying the Grammar

1. Edit `grammars/tree-sitter-yaml-nunjucks/grammar.js`
2. Generate the parser: `cd grammars/tree-sitter-yaml-nunjucks && npx tree-sitter generate`
3. Test the grammar: `npx tree-sitter test` (if tests exist)
4. Commit the grammar changes
5. Update `extension.toml` with the new commit hash in the `rev` field
6. Rebuild the extension if Rust code changed

### Modifying Syntax Highlighting

1. Edit `languages/yaml-nunjucks/highlights.scm`
2. Use tree-sitter node types from the generated grammar
3. Test in Zed by installing the extension locally
4. No rebuild required - Zed reloads highlighting rules automatically

### Testing Changes Locally

Install the extension in Zed by symlinking or copying to:
```
~/Library/Application Support/Zed/extensions/installed/yaml-nunjucks/
```

Or use Zed's extension development workflow as documented in Zed's extension guide.

## Key Grammar Patterns

The grammar handles several tricky parsing scenarios:

### Nunjucks Statement Keywords
Uses `field('keyword', $.nunjucks_keyword)` to explicitly capture control flow keywords (`if`, `for`, `set`, etc.) with higher precedence to ensure they're recognized as keywords, not plain content.

### Mixed Content
The `yaml_mixed` rule handles YAML values that contain both plain text and Nunjucks expressions, like: `value: prefix_{{ var }}_suffix`

### CloudFormation Intrinsics
Recognizes CF function tags (`!Ref`, `!Sub`, etc.) both as standalone keys and as part of `cf_intrinsic` expressions with values.

### String Interpolation
Quoted strings can contain embedded Nunjucks expressions: `"{{ db_host }}:{{ db_port }}"`

## Repository Structure
- `src/` - Rust extension code
- `grammars/tree-sitter-yaml-nunjucks/` - Tree-sitter grammar implementation
  - `grammar.js` - Grammar definition
  - `src/` - Generated C parser code
  - `bindings/` - Language bindings (Rust, Node)
- `languages/yaml-nunjucks/` - Zed language configuration
  - `config.toml` - Editor settings
  - `highlights.scm` - Syntax highlighting queries
- `example.njk` - Sample file demonstrating supported syntax
