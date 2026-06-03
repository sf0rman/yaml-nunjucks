# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

A Zed editor extension providing syntax highlighting and editor support for YAML files with embedded Nunjucks template syntax (`.njk` files). The extension also supports CloudFormation and OrgFormation intrinsic functions.

This is a **grammar-only extension** — no Rust or WASM build step is required. Zed fetches and compiles the tree-sitter grammar from the external grammar repository at install time.

## Architecture

### Extension Metadata
- `extension.toml`: Zed extension manifest
  - Points to the external grammar repository (`sf0rman/tree-sitter-yaml-nunjucks`) and a specific commit (`rev`)
  - **To update the grammar**: commit changes in the grammar repo, then update `rev` here to the new commit hash

### Language Configuration
- `languages/yaml-nunjucks/config.toml`: Editor behavior
  - File extension: `.njk`
  - Auto-closing brackets for `{{ }}`, `{% %}`, quotes, etc.
  - Tab settings (2 spaces, soft tabs)

- `languages/yaml-nunjucks/highlights.scm`: Syntax highlighting queries
  - Color scheme based on Go-lang and YAML conventions
  - Nunjucks keywords: blue (`@keyword.control`)
  - Variables/expressions: light (`@variable`)
  - CF intrinsic functions: green (`@type` for `!Ref`, `!Sub`, `!GetAtt`, etc.)
  - Strings: orange/brown (`@string`)
  - Booleans: true/false, yes/no, on/off (`@boolean`)
  - Numbers: integers and floats (`@number`)
  - Comments: gray (`@comment`)

### External Grammar Repository
- `https://github.com/sf0rman/tree-sitter-yaml-nunjucks`
  - Fork of `zed-industries/tree-sitter-yaml` with Nunjucks additions
  - Contains `grammar.js` and generated `src/` (parser.c, scanner.c, etc.)
  - Node types used by `highlights.scm`: `nunjucks_keyword`, `nunjucks_expression`, `nunjucks_comment`

## Development Workflow

### Modifying the Grammar

1. Clone `https://github.com/sf0rman/tree-sitter-yaml-nunjucks` separately
2. Edit `grammar.js`
3. Regenerate the parser: `npx tree-sitter generate`
4. Test: `npx tree-sitter parse <file.njk>`
5. Commit and push to the grammar repo
6. Copy the new commit hash into the `rev` field in `extension.toml` here
7. Commit the `extension.toml` change

### Modifying Syntax Highlighting

1. Edit `languages/yaml-nunjucks/highlights.scm`
2. Use tree-sitter node types from the grammar's `node-types.json`
3. Test in Zed by installing the extension locally — no rebuild required

### Testing Changes Locally

Install the extension in Zed as a dev extension:

```
Zed → Extensions → Install Dev Extension → select this directory
```

Or symlink to:
```
~/Library/Application Support/Zed/extensions/installed/yaml-nunjucks/
```

Zed will fetch the grammar from the external repo at the specified `rev`, compile it,
and apply `highlights.scm`. Open `example.njk` to verify highlighting.

### Prerequisites
- No local build tools needed for this repo
- The grammar repo requires Node.js and `tree-sitter-cli` for grammar development

## Repository Structure
- `extension.toml` — Zed extension manifest (grammar pointer lives here)
- `languages/yaml-nunjucks/` — Zed language configuration
  - `config.toml` — Editor settings
  - `highlights.scm` — Syntax highlighting queries
- `example.njk` — Sample file demonstrating supported syntax
