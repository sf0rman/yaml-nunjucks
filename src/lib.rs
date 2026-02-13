use zed_extension_api as zed;

struct YamlNunjucksExtension;

impl zed::Extension for YamlNunjucksExtension {
    fn new() -> Self {
        Self
    }

    fn language_server_command(
        &mut self,
        _language_server_id: &zed::LanguageServerId,
        _worktree: &zed::Worktree,
    ) -> zed::Result<zed::Command> {
        // No language server - using tree-sitter only
        Err("No language server configured".into())
    }
}

zed::register_extension!(YamlNunjucksExtension);
