; YAML + Nunjucks + CloudFormation highlighting
; Color scheme matches Go-lang and YAML style

; === Nunjucks ===
; Keywords (if, for, set, etc.) - blue like Go keywords
(nunjucks_keyword) @keyword

; Variables/identifiers in expressions {{ }} - white/light like Go identifiers
(nunjucks_expression) @variable

; Comments - gray
(nunjucks_comment) @comment

; === CloudFormation & OrgFormation ===
; Intrinsic function tags (!Ref, !Sub, etc.) - green like YAML special values
(cf_tag) @type
(cf_intrinsic (cf_tag) @type)

; === YAML Structure ===
; Keys - light/neutral (like struct fields)
(yaml_pair (yaml_key) @property)

; Quoted strings - orange/brown like Go strings
(yaml_string) @string

; Plain scalar values (unquoted) - lighter/neutral
(yaml_value) @variable.member

; Mixed content (text + templates) - treat as values
(yaml_mixed) @variable.member

; YAML comments - gray
(comment) @comment
