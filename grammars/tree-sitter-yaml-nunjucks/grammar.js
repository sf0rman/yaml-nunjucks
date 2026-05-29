module.exports = grammar({
  name: 'yaml_nunjucks',
  extras: $ => [],

  rules: {
    document: $ => repeat($._line),

    _line: $ => choice(
      seq(
        optional(/[ \t]+/),
        choice(
          $.nunjucks_statement,
          $.nunjucks_comment,
          $.yaml_pair,
          $.yaml_list_item,
          $.comment
        ),
        /\r?\n/
      ),
      $.blank_line
    ),

    blank_line: $ => /[ \t]*\r?\n/,

    // ── Nunjucks ──────────────────────────────────────────────────────────────

    nunjucks_statement: $ => seq(
      '{%',
      optional(/[ \t]+/),
      $.nunjucks_keyword,
      optional($._statement_rest),
      optional(/[ \t]+/),
      '%}'
    ),

    nunjucks_keyword: $ => choice(
      'if', 'elif', 'else', 'endif',
      'for', 'in', 'endfor',
      'set', 'block', 'endblock',
      'macro', 'endmacro',
      'call', 'endcall',
      'filter', 'endfilter',
      'raw', 'endraw',
      'extends', 'include', 'import', 'from',
      'with', 'without', 'context',
      'not', 'and', 'or', 'is',
    ),

    _statement_rest: $ => repeat1(choice(
      seq(/[ \t]+/, $.nunjucks_keyword),
      seq(/[ \t]+/, $._statement_word)
    )),

    _statement_word: $ => token(prec(-1, /[a-zA-Z0-9_.|+\-*\/=!<>()'",]+/)),

    nunjucks_expression: $ => seq('{{', $._expr_content, '}}'),
    _expr_content: $ => /([^}]|}[^}])+/,

    nunjucks_comment: $ => seq('{#', /([^#]|#[^}])*#*/, '}'),

    // ── YAML ──────────────────────────────────────────────────────────────────

    yaml_pair: $ => seq(
      $.yaml_key,
      ':',
      optional(seq(/[ \t]+/, $.yaml_value))
    ),

    // Named choice so each key type can be queried independently
    yaml_key: $ => choice(
      $.yaml_quoted_string,
      $.cf_tag,
      $.yaml_plain_key
    ),

    // Stops at ':' and YAML structural chars — no colon allowed (key ends before ': ')
    yaml_plain_key: $ => /[^ \t\n:\[\]{},"'#!][^ \t\n:\[\]{},"'#!]*/,

    yaml_value: $ => choice(
      $.yaml_quoted_string,
      $.yaml_block_scalar,
      $.yaml_flow_sequence,
      $.yaml_flow_mapping,
      $.cf_intrinsic,
      $.nunjucks_expression,
      $.yaml_mixed,
      $.yaml_plain_scalar
    ),

    // Block scalar indicators: | or > with optional chomping/indent modifiers
    yaml_block_scalar: $ => /[|>][-+]?[0-9]*/,

    // Plain unquoted scalar value.
    // Allows colons for AWS::Type, sts:Action, ARNs, index.handler, etc.
    // Excludes | and > as first char so yaml_block_scalar takes precedence.
    yaml_plain_scalar: $ => token(prec(-1,
      /[^ \t\n\[\]{},"'#!|>][^ \t\n\[\]{},"']*/
    )),

    // ── Flow collections ──────────────────────────────────────────────────────

    // Inline sequence: [item, item, ...]
    yaml_flow_sequence: $ => seq(
      '[',
      optional(/[ \t]*/),
      optional(seq(
        $._flow_item,
        repeat(seq(/[ \t]*,[ \t]*/, $._flow_item)),
        optional(/[ \t]*/)
      )),
      ']'
    ),

    // Named rule so flow scalars can be highlighted like yaml_plain_scalar
    yaml_flow_scalar: $ => /[^ \t\n,\[\]{}'"!][^ \t\n,\[\]{}'"]*/,

    _flow_item: $ => choice(
      $.yaml_quoted_string,
      $.yaml_flow_sequence,
      $.yaml_flow_mapping,
      $.cf_intrinsic,
      $.nunjucks_expression,
      $.yaml_flow_scalar
    ),

    // Inline mapping: {key: value, ...}
    yaml_flow_mapping: $ => seq(
      '{',
      optional(/[ \t]*/),
      optional(seq(
        $.yaml_flow_pair,
        repeat(seq(/[ \t]*,[ \t]*/, $.yaml_flow_pair)),
        optional(/[ \t]*/)
      )),
      '}'
    ),

    yaml_flow_pair: $ => prec.right(seq(
      $.yaml_flow_key,
      ':',
      optional(seq(/[ \t]*/, $._flow_item))
    )),

    yaml_flow_key: $ => /[^ \t\n:\[\]{},"'!][^ \t\n:\[\]{},"']*/,

    // ── CloudFormation / OrgFormation ─────────────────────────────────────────

    cf_tag: $ => token(choice(
      '!Ref', '!Sub', '!GetAtt', '!Join', '!Select', '!Split',
      '!FindInMap', '!Base64', '!GetAZs', '!ImportValue',
      '!If', '!Equals', '!Not', '!And', '!Or', '!Condition',
      '!GetOrganizationBinding', '!Include', '!Foreach'
    )),

    cf_intrinsic: $ => prec(2, seq(
      $.cf_tag,
      /[ \t]+/,
      $._cf_value
    )),

    _cf_value: $ => choice(
      $.yaml_quoted_string,
      $.yaml_flow_sequence,
      $.nunjucks_expression,
      $.yaml_plain_scalar
    ),

    // ── Mixed content ─────────────────────────────────────────────────────────

    // Plain text interleaved with {{ expressions }}, e.g. prefix_{{ var }}_suffix
    yaml_mixed: $ => prec(1, choice(
      seq(
        $.nunjucks_expression,
        repeat1(choice($.nunjucks_expression, /[^ \t\n\[\]{},"']+/))
      ),
      seq(
        /[^ \t\n\[\]{},"']+/,
        $.nunjucks_expression,
        repeat(choice($.nunjucks_expression, /[^ \t\n\[\]{},"']+/))
      )
    )),

    // ── Block sequence ────────────────────────────────────────────────────────

    yaml_list_item: $ => seq(
      '-',
      optional(seq(
        /[ \t]+/,
        choice($.yaml_pair, $.yaml_value)
      ))
    ),

    // ── Strings ───────────────────────────────────────────────────────────────

    // Quoted strings can contain embedded Nunjucks expressions
    yaml_quoted_string: $ => choice(
      seq('"', repeat(choice($.nunjucks_expression, /[^"\\\n]+/, /\\./)), '"'),
      seq("'", repeat(choice($.nunjucks_expression, /[^'\\\n]+/, /\\./)), "'")
    ),

    comment: $ => /#[^\n]*/,
  }
});
