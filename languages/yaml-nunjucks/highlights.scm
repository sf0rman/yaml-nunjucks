; YAML + Nunjucks highlighting for custom grammar

; === Nunjucks ===
(nunjucks_expression) @embedded
(nunjucks_statement) @keyword
(nunjucks_comment) @comment

; === YAML ===
(yaml_pair (yaml_key) @property)
(yaml_string) @string
(yaml_value) @string.special
(yaml_mixed) @string.special
(comment) @comment
