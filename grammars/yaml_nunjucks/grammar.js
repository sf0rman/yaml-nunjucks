/**
 * @file YAML + Nunjucks combined grammar for tree-sitter
 * @license MIT
 *
 * Simple line-oriented grammar for highlighting YAML with Nunjucks templates
 */

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
          $.comment,
        ),
        /\r?\n/
      ),
      $.blank_line
    ),

    blank_line: $ => /[ \t]*\r?\n/,

    // === Nunjucks ===

    nunjucks_statement: $ => seq('{%', /([^%]|%[^}])*/, '%}'),

    nunjucks_expression: $ => seq('{{', $._expr_content, '}}'),

    _expr_content: $ => /([^}]|}[^}])+/,

    nunjucks_comment: $ => seq('{#', /([^#]|#[^}])*#*/, '}'),

    // === YAML ===

    yaml_pair: $ => seq(
      $.yaml_key,
      ':',
      optional(seq(/[ \t]+/, $.yaml_value))
    ),

    yaml_key: $ => choice(
      $.yaml_string,
      /[^\s:\[\]{},"'#]+/
    ),

    yaml_value: $ => choice(
      $.yaml_string,
      $.yaml_mixed,
      $.nunjucks_expression,
      /[^\s\[\]{},"'#]+/
    ),

    yaml_mixed: $ => choice(
      seq($.nunjucks_expression, repeat1(choice($.nunjucks_expression, /[^\s\[\]{},"'#\n]+/))),
      seq(/[^\s\[\]{},"'#\n]+/, repeat1(choice($.nunjucks_expression, /[^\s\[\]{},"'#\n]+/))),
    ),

    yaml_list_item: $ => seq('-', optional(seq(/[ \t]+/, $.yaml_value))),

    yaml_string: $ => choice(
      seq('"', repeat(choice($.nunjucks_expression, /[^"\n\\]+/, /\\./)), '"'),
      seq("'", repeat(choice($.nunjucks_expression, /[^'\n\\]+/, /\\./)), "'")
    ),

    comment: $ => /#[^\n]*/,
  }
});
