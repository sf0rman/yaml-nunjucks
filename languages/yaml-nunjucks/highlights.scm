; ── Nunjucks ─────────────────────────────────────────────────────────────────

(nunjucks_keyword) @keyword.control
(nunjucks_expression) @variable
(nunjucks_comment) @comment

; ── YAML Keys ────────────────────────────────────────────────────────────────

(block_mapping_pair key: (flow_node (plain_scalar) @property))
(block_mapping_pair key: (flow_node (double_quote_scalar) @property))
(block_mapping_pair key: (flow_node (single_quote_scalar) @property))
(flow_pair key: (flow_node (plain_scalar) @property))
(flow_pair key: (flow_node (double_quote_scalar) @property))
(flow_pair key: (flow_node (single_quote_scalar) @property))

; ── Scalars ───────────────────────────────────────────────────────────────────

(boolean_scalar) @boolean
(null_scalar) @constant.builtin
(integer_scalar) @number
(float_scalar) @number

(double_quote_scalar) @string
(single_quote_scalar) @string
(string_scalar) @string
(block_scalar) @string

(plain_scalar) @string

; ── Tags (CloudFormation / OrgFormation intrinsics) ───────────────────────────

(tag) @type

; ── Anchors and aliases ───────────────────────────────────────────────────────

(anchor) @type.definition
(alias) @type

; ── Block structure ───────────────────────────────────────────────────────────

(block_sequence_item "-" @punctuation.special)

; ── Comments ─────────────────────────────────────────────────────────────────

(comment) @comment
