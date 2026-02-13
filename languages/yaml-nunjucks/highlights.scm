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
; Intrinsic function tags (!Ref, !Sub, etc.) - green like YAML tags
(cf_tag) @type

; Complete intrinsic function calls
(cf_intrinsic (cf_tag) @type)

; === YAML Structure ===
; Keys in key-value pairs
(yaml_pair (yaml_key) @property)

; Quoted strings
(yaml_string) @string

; Booleans
(yaml_boolean) @boolean
((yaml_plain_scalar) @boolean
  (#match? @boolean "^(true|false|True|False|TRUE|FALSE|yes|no|Yes|No|YES|NO|on|off|On|Off|ON|OFF)$"))

; Numbers
(yaml_number) @number
((yaml_plain_scalar) @number
  (#match? @number "^[0-9]+(\\.[0-9]+)?$"))

; Plain scalar values - treat as strings (AWS::*, sts:*, etc.)
((yaml_plain_scalar) @string)
(yaml_value) @string

; Mixed content (text + templates)
(yaml_mixed) @string

; YAML comments
(comment) @comment.line
