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

    // High-precedence token so it never forks against the leading-whitespace in _line
    blank_line: $ => token(prec(2, /[ \t]*\r?\n/)),

    // ── Nunjucks ──────────────────────────────────────────────────────────────

    nunjucks_statement: $ => seq(
      token(prec(2, '{%')),
      optional(/[ \t]+/),
      $.nunjucks_keyword,
      optional($._statement_rest),
      optional(/[ \t]+/),
      token(prec(2, '%}'))
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

    // Only plain words in the body — keywords are only meaningful at the front
    // of a statement, so no need to fork keyword-vs-word for each token here.
    _statement_rest: $ => repeat1(seq(
      /[ \t]+/,
      $._statement_word
    )),

    _statement_word: $ => token(/[a-zA-Z0-9_.|+\-*\/=!<>()'",]+/),

    // {{…}} as single high-prec tokens so lexer never forks against bare {
    nunjucks_expression: $ => seq(
      token(prec(2, '{{')),
      $._expr_content,
      token(prec(2, '}}'))
    ),
    _expr_content: $ => /([^}]|}[^}])+/,

    nunjucks_comment: $ => seq(
      token(prec(2, '{#')),
      /([^#]|#[^}])*#*/,
      '}'
    ),

    // ── YAML ──────────────────────────────────────────────────────────────────

    yaml_pair: $ => seq(
      $.yaml_key,
      ':',
      optional(seq(/[ \t]+/, $.yaml_value))
    ),

    yaml_key: $ => choice(
      $.yaml_quoted_string,
      $.cf_tag,
      $.yaml_plain_key
    ),

    yaml_plain_key: $ => /[^ \t\n:\[\]{},"'#!][^ \t\n:\[\]{},"'#!]*/,

    yaml_value: $ => choice(
      $.yaml_quoted_string,
      $.yaml_block_scalar,
      $.yaml_flow_sequence,
      $.yaml_flow_mapping,
      $.cf_intrinsic,
      $.nunjucks_expression,
      $.yaml_plain_scalar
    ),

    yaml_block_scalar: $ => /[|>][-+]?[0-9]*/,

    // Single unified rule for plain scalars, with or without embedded {{ }}.
    // Collapsing the old yaml_plain_scalar + yaml_mixed into one rule eliminates
    // the forking dual-stack that caused O(2^n) GLR speculation on every value.
    yaml_plain_scalar: $ => prec.right(seq(
      token(prec(-1, /[^ \t\n\[\]{},"'#!|>][^ \t\n\[\]{},"']*/)),
      repeat(choice(
        $.nunjucks_expression,
        token(/[^ \t\n\[\]{},"']+/)
      ))
    )),

    // ── Flow collections ──────────────────────────────────────────────────────

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

    yaml_flow_scalar: $ => /[^ \t\n,\[\]{}'"!][^ \t\n,\[\]{}'"]*/,

    _flow_item: $ => choice(
      $.yaml_quoted_string,
      $.yaml_flow_sequence,
      $.yaml_flow_mapping,
      $.cf_intrinsic,
      $.nunjucks_expression,
      $.yaml_flow_scalar
    ),

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

    // ── Strings ───────────────────────────────────────────────────────────────

    // {/\{/ as a single-char fallback after {[^{] so {{ is always claimed by
    // nunjucks_expression (token prec 2) and never left to the text chunk.
    yaml_quoted_string: $ => choice(
      seq('"', repeat(choice($.nunjucks_expression, /[^"\\\n{]+/, /\{/, /\\./)), '"'),
      seq("'", repeat(choice($.nunjucks_expression, /[^'\\\n{]+/, /\{/, /\\./)), "'")
    ),

    // ── Block sequence ────────────────────────────────────────────────────────

    yaml_list_item: $ => seq(
      '-',
      optional(seq(
        /[ \t]+/,
        choice($.yaml_pair, $.yaml_value)
      ))
    ),

    comment: $ => /#[^\n]*/,
  }
});
