; ── Nunjucks ────────────────────────────────────────────────────────────────

(nunjucks_keyword) @keyword.control

; Whole {{ expression }} node gets "variable" colour (inner content is unstructured)
(nunjucks_expression) @variable

(nunjucks_comment) @comment

; ── CloudFormation / OrgFormation tags ───────────────────────────────────────

(cf_tag) @type

; ── YAML Keys ────────────────────────────────────────────────────────────────

(yaml_pair (yaml_key (yaml_plain_key) @property))
(yaml_pair (yaml_key (yaml_quoted_string) @property))
(yaml_pair (yaml_key (cf_tag) @type))

; ── Quoted strings ────────────────────────────────────────────────────────────

(yaml_quoted_string) @string

; ── Plain scalar values ───────────────────────────────────────────────────────

; Booleans
((yaml_plain_scalar) @boolean
  (#match? @boolean "^(true|false|True|False|TRUE|FALSE|yes|no|Yes|No|YES|NO|on|off|On|Off|ON|OFF)$"))

; Numbers (integer or float)
((yaml_plain_scalar) @number
  (#match? @number "^[+-]?[0-9]+([.][0-9]+)?([eE][+-]?[0-9]+)?$"))

; Null
((yaml_plain_scalar) @constant.builtin
  (#match? @constant.builtin "^(null|Null|NULL|~)$"))

; Plain scalars in value position (AWS::Type, ARNs, paths, etc.)
(yaml_plain_scalar) @string

; Flow sequence items (named node so we can target them)
(yaml_flow_scalar) @string

; Mixed content: surrounding text around {{ expressions }}
(yaml_mixed) @string

; ── Block structure ───────────────────────────────────────────────────────────

; Block scalar indicators (| and >) — treat like punctuation
(yaml_block_scalar) @punctuation.special

; YAML list dash
(yaml_list_item "-" @punctuation.special)

; ── Flow mapping keys ─────────────────────────────────────────────────────────

(yaml_flow_pair (yaml_flow_key) @property)

; ── Comments ─────────────────────────────────────────────────────────────────

(comment) @comment.line
