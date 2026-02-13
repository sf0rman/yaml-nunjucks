; YAML + Nunjucks highlighting for custom grammar

; === Nunjucks ===

; Nunjucks delimiters
("{{" @punctuation.bracket)
("}}" @punctuation.bracket)
("{%" @punctuation.bracket)
("%}" @punctuation.bracket)
("{#" @punctuation.bracket)
("}" @punctuation.bracket)

; Nunjucks content
(nunjucks_expression) @embedded
(nunjucks_statement) @keyword
(nunjucks_comment) @comment

; === YAML ===

; YAML keys (first child of yaml_pair)
(yaml_pair (yaml_key) @property)

; YAML strings
(yaml_string) @string

; YAML values
(yaml_value) @string.special

; YAML mixed (text + templates)
(yaml_mixed) @string.special

; YAML list markers
("-" @punctuation.special)

; YAML pair delimiter
(":" @punctuation.delimiter)

; Comments
(comment) @comment
