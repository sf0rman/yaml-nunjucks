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

    // Nunjucks statements - simple structure, use highlighting for keywords
    nunjucks_statement: $ => seq(
      '{%',
      /[ \t]*/,
      optional($.statement_content),
      /[ \t]*/,
      '%}'
    ),

    statement_content: $ => /([^%]|%[^}])+/,

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
      prec.dynamic(2, $.yaml_boolean),
      prec.dynamic(2, $.yaml_number),
      prec(1, $.yaml_mixed),
      $.nunjucks_expression,
      $.cf_intrinsic,
      prec.dynamic(0, $.yaml_plain_scalar)
    ),

    yaml_boolean: $ => choice('true', 'false', 'True', 'False', 'TRUE', 'FALSE', 'yes', 'no', 'Yes', 'No', 'YES', 'NO', 'on', 'off', 'On', 'Off', 'ON', 'OFF'),

    yaml_number: $ => token(choice(
      /[0-9]+\.[0-9]+/,  // float
      /[0-9]+/            // integer
    )),

    yaml_plain_scalar: $ => /[^\s:\[\]{},"'#!]+|[A-Za-z_][A-Za-z0-9_]*:[A-Za-z0-9_:]+/,

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
        /[^\s:\[\]{},"'#\n]+/
      )
    )),

    yaml_mixed: $ => choice(
      // Expression followed by text or more expressions
      seq($.nunjucks_expression, repeat1(choice($.nunjucks_expression, /[^\s:\[\]{},"'#\n]+/))),
      // Text followed by expression(s)
      seq(/[^\s:\[\]{},"'#\n]+/, $.nunjucks_expression, repeat(choice($.nunjucks_expression, /[^\s:\[\]{},"'#\n]+/)))
    ),

    yaml_list_item: $ => seq('-', optional(seq(/[ \t]+/, choice($.yaml_pair, $.yaml_value)))),

    yaml_string: $ => choice(
      seq('"', repeat(choice($.nunjucks_expression, /[^"\n\\]+/, /\\./)), '"'),
      seq("'", repeat(choice($.nunjucks_expression, /[^'\n\\]+/, /\\./)), "'")
    ),

    comment: $ => /#[^\n]*/,
  }
});
