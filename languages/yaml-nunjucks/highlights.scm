; YAML + Nunjucks + CloudFormation highlighting
; Color scheme matches Go-lang style

; === Nunjucks ===
; Keywords (if, for, set, etc.) - blue like Go keywords
(nunjucks_keyword) @keyword.control

; Variables/identifiers in expressions {{ }} - white/light like Go identifiers
(nunjucks_expression) @variable

; Comments - gray
(nunjucks_comment) @comment

; === CloudFormation ===
; Intrinsic function tags (!Ref, !Sub, etc.) - function style
(cf_tag) @function.builtin
(cf_intrinsic (cf_tag) @function.builtin)

; === YAML Structure ===
; Keys - neutral/light (like Go struct fields)
(yaml_pair (yaml_key) @variable.member)

; Quoted strings - orange/brown like Go strings
(yaml_string) @string

; Plain scalar values - keep as strings for consistency
(yaml_value) @string

; Mixed content (text + templates)
(yaml_mixed) @string

; YAML comments - gray
(comment) @comment
