# tree-sitter-asm

Generic assembly grammar for
[tree-sitter](https://github.com/tree-sitter/tree-sitter)

Adapted to work better with ARM assembly, the changes may cause issues with other formats.

## Usage with Helix-Editor

### Configuration

Add the contents of helix_config/language.toml to your language.toml file, updating the "rev" field in the grammar source to the latest commit SHA.
Also add the contents of the queries/asm folder to .config/helix/runtime/queries/asm in order to get syntax highlighting.

NOTE: The .scm files have only been tested with Helix, and may not work as well, if at all, in other editors like Neovim.

### Setup

After the previous step, run:
```
  hx --grammar fetch
  hx --grammar build
```
