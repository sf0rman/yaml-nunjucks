module.exports = grammar({
  name: 'yaml_nunjucks',
  extras: $ => [],

  rules: {
    document: $ => repeat($._line),

    _line: $ => choice(
      seq(optional(/[ \t]+/), choice($.nunjucks_statement, $.nunjucks_comment, $.yaml_pair, $.yaml_list_item, $.comment), /\r?\n/),
      $.blank_line
    ),

    blank_line: $ => /[ \t]*\r?\n/,

    // Nunjucks statements - capture keywords separately
    nunjucks_statement: $ => seq(
      '{%',
      optional(/[ \t]+/),
      optional($.nunjucks_keyword),
      optional($._statement_rest),
      optional(/[ \t]+/),
      '%}'
    ),

    nunjucks_keyword: $ => token(choice(
      'if', 'elif', 'else', 'endif',
      'for', 'in', 'endfor',
      'set', 'block', 'endblock',
      'macro', 'endmacro',
      'call', 'endcall',
      'filter', 'endfilter',
      'extends', 'include', 'import', 'from'
    )),

    _statement_rest: $ => /([^%]|%[^}])*/,

    // Nunjucks expressions - keep simple for now
    nunjucks_expression: $ => seq('{{', $._expr_content, '}}'),
    _expr_content: $ => /([^}]|}[^}])+/,

    nunjucks_comment: $ => seq('{#', /([^#]|#[^}])*#*/, '}'),

    // YAML with CloudFormation support
    yaml_pair: $ => seq($.yaml_key, ':', optional(seq(/[ \t]+/, $.yaml_value))),

    yaml_key: $ => choice(
      $.yaml_string,
      $.cf_tag,
      /[^\s:\[\]{},"'#!]+/
    ),

    yaml_value: $ => choice(
      $.yaml_string,
      $.yaml_mixed,
      $.nunjucks_expression,
      $.cf_intrinsic,
      /[^\s\[\]{},"'#!]+/
    ),

    // CloudFormation and OrgFormation intrinsic functions
    cf_tag: $ => token(choice(
      // CloudFormation intrinsics
      '!Ref', '!Sub', '!GetAtt', '!Join', '!Select', '!Split',
      '!FindInMap', '!Base64', '!GetAZs', '!ImportValue',
      '!If', '!Equals', '!Not', '!And', '!Or',
      // OrgFormation specific
      '!GetOrganizationBinding', '!Include', '!Foreach'
    )),

    cf_intrinsic: $ => prec(2, seq(
      $.cf_tag,
      /[ \t]+/,
      choice(
        $.yaml_string,
        $.nunjucks_expression,
        /[^\s\[\]{},"'#\n]+/
      )
    )),

    yaml_mixed: $ => choice(
      seq($.nunjucks_expression, repeat1(choice($.nunjucks_expression, /[^\s\[\]{},"'#\n]+/))),
      seq(/[^\s\[\]{},"'#\n]+/, repeat1(choice($.nunjucks_expression, /[^\s\[\]{},"'#\n]+/)))
    ),

    yaml_list_item: $ => seq('-', optional(seq(/[ \t]+/, choice($.yaml_pair, $.yaml_value)))),

    yaml_string: $ => choice(
      seq('"', repeat(choice($.nunjucks_expression, /[^"\n\\]+/, /\\./)), '"'),
      seq("'", repeat(choice($.nunjucks_expression, /[^'\n\\]+/, /\\./)), "'")
    ),

    comment: $ => /#[^\n]*/,
  }
});
