; YAML + Nunjucks + CloudFormation highlighting

; === Nunjucks ===
; Keywords (if, for, set, etc.)
(nunjucks_keyword) @keyword.control

; Statement content
(nunjucks_statement) @tag

; Expression content
(nunjucks_expression) @variable

; Comments
(nunjucks_comment) @comment

; === CloudFormation ===
; Intrinsic function tags (!Ref, !Sub, etc.)
(cf_tag) @function.builtin

; Complete intrinsic function calls
(cf_intrinsic (cf_tag) @function.builtin)

; === YAML Structure ===
; Keys in key-value pairs
(yaml_pair (yaml_key) @property)

; Quoted strings
(yaml_string) @string

; Plain scalar values
(yaml_value) @string.special

; Mixed content (text + templates)
(yaml_mixed) @string.special

; YAML comments
(comment) @comment.line
