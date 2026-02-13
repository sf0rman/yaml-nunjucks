#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__line_token1 = 1,
  aux_sym__line_token2 = 2,
  sym_blank_line = 3,
  anon_sym_LBRACE_PERCENT = 4,
  anon_sym_PERCENT_RBRACE = 5,
  sym_nunjucks_keyword = 6,
  sym__statement_rest = 7,
  anon_sym_LBRACE_LBRACE = 8,
  anon_sym_RBRACE_RBRACE = 9,
  sym__expr_content = 10,
  anon_sym_LBRACE_POUND = 11,
  aux_sym_nunjucks_comment_token1 = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  aux_sym_yaml_key_token1 = 15,
  aux_sym_yaml_value_token1 = 16,
  sym_cf_tag = 17,
  aux_sym_cf_intrinsic_token1 = 18,
  anon_sym_DASH = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_yaml_string_token1 = 21,
  aux_sym_yaml_string_token2 = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_yaml_string_token3 = 24,
  sym_comment = 25,
  sym_document = 26,
  sym__line = 27,
  sym_nunjucks_statement = 28,
  sym_nunjucks_expression = 29,
  sym_nunjucks_comment = 30,
  sym_yaml_pair = 31,
  sym_yaml_key = 32,
  sym_yaml_value = 33,
  sym_cf_intrinsic = 34,
  sym_yaml_mixed = 35,
  sym_yaml_list_item = 36,
  sym_yaml_string = 37,
  aux_sym_document_repeat1 = 38,
  aux_sym_yaml_mixed_repeat1 = 39,
  aux_sym_yaml_string_repeat1 = 40,
  aux_sym_yaml_string_repeat2 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_blank_line] = "blank_line",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [sym_nunjucks_keyword] = "nunjucks_keyword",
  [sym__statement_rest] = "_statement_rest",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__expr_content] = "_expr_content",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nunjucks_comment_token1] = "nunjucks_comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_yaml_key_token1] = "yaml_key_token1",
  [aux_sym_yaml_value_token1] = "yaml_value_token1",
  [sym_cf_tag] = "cf_tag",
  [aux_sym_cf_intrinsic_token1] = "cf_intrinsic_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_yaml_string_token1] = "yaml_string_token1",
  [aux_sym_yaml_string_token2] = "yaml_string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_yaml_string_token3] = "yaml_string_token3",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_nunjucks_statement] = "nunjucks_statement",
  [sym_nunjucks_expression] = "nunjucks_expression",
  [sym_nunjucks_comment] = "nunjucks_comment",
  [sym_yaml_pair] = "yaml_pair",
  [sym_yaml_key] = "yaml_key",
  [sym_yaml_value] = "yaml_value",
  [sym_cf_intrinsic] = "cf_intrinsic",
  [sym_yaml_mixed] = "yaml_mixed",
  [sym_yaml_list_item] = "yaml_list_item",
  [sym_yaml_string] = "yaml_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_yaml_mixed_repeat1] = "yaml_mixed_repeat1",
  [aux_sym_yaml_string_repeat1] = "yaml_string_repeat1",
  [aux_sym_yaml_string_repeat2] = "yaml_string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [aux_sym__line_token2] = aux_sym__line_token2,
  [sym_blank_line] = sym_blank_line,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [sym_nunjucks_keyword] = sym_nunjucks_keyword,
  [sym__statement_rest] = sym__statement_rest,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__expr_content] = sym__expr_content,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nunjucks_comment_token1] = aux_sym_nunjucks_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_yaml_key_token1] = aux_sym_yaml_key_token1,
  [aux_sym_yaml_value_token1] = aux_sym_yaml_value_token1,
  [sym_cf_tag] = sym_cf_tag,
  [aux_sym_cf_intrinsic_token1] = aux_sym_cf_intrinsic_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_yaml_string_token1] = aux_sym_yaml_string_token1,
  [aux_sym_yaml_string_token2] = aux_sym_yaml_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_yaml_string_token3] = aux_sym_yaml_string_token3,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_nunjucks_statement] = sym_nunjucks_statement,
  [sym_nunjucks_expression] = sym_nunjucks_expression,
  [sym_nunjucks_comment] = sym_nunjucks_comment,
  [sym_yaml_pair] = sym_yaml_pair,
  [sym_yaml_key] = sym_yaml_key,
  [sym_yaml_value] = sym_yaml_value,
  [sym_cf_intrinsic] = sym_cf_intrinsic,
  [sym_yaml_mixed] = sym_yaml_mixed,
  [sym_yaml_list_item] = sym_yaml_list_item,
  [sym_yaml_string] = sym_yaml_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_yaml_mixed_repeat1] = aux_sym_yaml_mixed_repeat1,
  [aux_sym_yaml_string_repeat1] = aux_sym_yaml_string_repeat1,
  [aux_sym_yaml_string_repeat2] = aux_sym_yaml_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nunjucks_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_rest] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__expr_content] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nunjucks_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_key_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_cf_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cf_intrinsic_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_nunjucks_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_nunjucks_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nunjucks_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_key] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_value] = {
    .visible = true,
    .named = true,
  },
  [sym_cf_intrinsic] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_mixed_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 41,
  [60] = 41,
  [61] = 39,
  [62] = 39,
};

static inline bool aux_sym_yaml_key_token1_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '#')
        : c <= '\'')))
    : (c <= ',' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_yaml_key_token1_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '#')
        : c <= '\'')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_cf_intrinsic_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '#')))
    : (c <= '\'' || (c < ']'
      ? (c < '['
        ? c == ','
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(141);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(284);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(288);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(209);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '%') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '\\') ADVANCE(133);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(294);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(70);
      if (lookahead == 'G') ADVANCE(50);
      if (lookahead == 'I') ADVANCE(58);
      if (lookahead == 'J') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'V') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'Z') ADVANCE(114);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(205);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 'q') ADVANCE(126);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 127:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(191);
      END_STATE();
    case 129:
      if (lookahead == '}') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(144);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == '}') ADVANCE(135);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(190);
      END_STATE();
    case 135:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(195);
      END_STATE();
    case 136:
      if (eof) ADVANCE(137);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '#') ADVANCE(295);
      if (lookahead == '\'') ADVANCE(292);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(203);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'f') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(187);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(134);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(135);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(194);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(284);
      if (lookahead == ':') ADVANCE(204);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_yaml_value_token1);
      if (lookahead == '!') ADVANCE(284);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(207);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(255);
      if (lookahead == 'B') ADVANCE(216);
      if (lookahead == 'E') ADVANCE(269);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'G') ADVANCE(231);
      if (lookahead == 'I') ADVANCE(238);
      if (lookahead == 'J') ADVANCE(263);
      if (lookahead == 'N') ADVANCE(264);
      if (lookahead == 'O') ADVANCE(270);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == 'S') ADVANCE(234);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(215);
      if (lookahead == 'O') ADVANCE(271);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(249);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(257);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(217);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(222);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(274);
      if (lookahead == 't') ADVANCE(276);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(275);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(267);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(224);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(261);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(279);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(250);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(253);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(242);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(276);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(251);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(247);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(225);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(268);
      if (lookahead == 'n') ADVANCE(226);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(219);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(256);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(276);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(260);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(273);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(262);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(281);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(245);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(282);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(213);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(240);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(243);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(230);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(244);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(276);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(272);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(258);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(265);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(280);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(241);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(278);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(237);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(235);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(210);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(214);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(246);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(221);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(229);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(220);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(203);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 136},
  [2] = {.lex_state = 136},
  [3] = {.lex_state = 136},
  [4] = {.lex_state = 136},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 136},
  [7] = {.lex_state = 136},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 149},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 149},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 150},
  [25] = {.lex_state = 150},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 132},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 136},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 198},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 136},
  [60] = {.lex_state = 136},
  [61] = {.lex_state = 132},
  [62] = {.lex_state = 132},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym__line_token2] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [sym_nunjucks_keyword] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_cf_tag] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_yaml_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(37),
    [sym__line] = STATE(3),
    [sym_nunjucks_statement] = STATE(55),
    [sym_nunjucks_comment] = STATE(55),
    [sym_yaml_pair] = STATE(55),
    [sym_yaml_key] = STATE(48),
    [sym_yaml_list_item] = STATE(55),
    [sym_yaml_string] = STATE(58),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_blank_line] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
    [aux_sym_yaml_key_token1] = ACTIONS(13),
    [sym_cf_tag] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(30), 1,
      sym_blank_line,
    ACTIONS(33), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(36), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(42), 1,
      sym_cf_tag,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(54), 1,
      sym_comment,
    STATE(48), 1,
      sym_yaml_key,
    STATE(58), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(55), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [50] = 15,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(15), 1,
      sym_cf_tag,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_blank_line,
    STATE(48), 1,
      sym_yaml_key,
    STATE(58), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(55), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [100] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(15), 1,
      sym_cf_tag,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      sym_comment,
    STATE(48), 1,
      sym_yaml_key,
    STATE(58), 1,
      sym_yaml_string,
    STATE(47), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [137] = 12,
    ACTIONS(13), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(65), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(67), 1,
      sym_cf_tag,
    ACTIONS(69), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 1,
      sym_nunjucks_expression,
    STATE(33), 1,
      sym_yaml_string,
    STATE(48), 1,
      sym_yaml_key,
    STATE(38), 2,
      sym_cf_intrinsic,
      sym_yaml_mixed,
    STATE(40), 2,
      sym_yaml_pair,
      sym_yaml_value,
  [176] = 2,
    ACTIONS(73), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [192] = 2,
    ACTIONS(77), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [208] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(65), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(69), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(79), 1,
      sym_cf_tag,
    STATE(17), 1,
      sym_nunjucks_expression,
    STATE(51), 1,
      sym_yaml_value,
    STATE(38), 3,
      sym_cf_intrinsic,
      sym_yaml_mixed,
      sym_yaml_string,
  [238] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(89), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [255] = 5,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(94), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(96), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [272] = 5,
    ACTIONS(100), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(106), 1,
      aux_sym_yaml_string_token2,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [289] = 5,
    ACTIONS(92), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(110), 1,
      aux_sym_yaml_string_token3,
    STATE(10), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [306] = 5,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(114), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [323] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(118), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(54), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [340] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [357] = 4,
    ACTIONS(131), 1,
      aux_sym__line_token2,
    ACTIONS(133), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(136), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [371] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [385] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(143), 1,
      aux_sym__line_token2,
    ACTIONS(145), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [399] = 2,
    ACTIONS(149), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(147), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [409] = 4,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    ACTIONS(153), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(155), 1,
      sym_nunjucks_keyword,
    ACTIONS(157), 1,
      sym__statement_rest,
  [422] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [433] = 4,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(163), 1,
      sym_nunjucks_keyword,
    ACTIONS(165), 1,
      sym__statement_rest,
  [446] = 2,
    ACTIONS(147), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(149), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [455] = 3,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(165), 1,
      sym__statement_rest,
  [465] = 3,
    ACTIONS(167), 1,
      aux_sym__line_token1,
    ACTIONS(169), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(171), 1,
      sym__statement_rest,
  [475] = 1,
    ACTIONS(147), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [481] = 2,
    ACTIONS(169), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(173), 1,
      aux_sym__line_token1,
  [488] = 2,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(175), 1,
      aux_sym__line_token1,
  [495] = 2,
    ACTIONS(177), 1,
      aux_sym__line_token1,
    ACTIONS(179), 1,
      aux_sym__line_token2,
  [502] = 2,
    ACTIONS(181), 1,
      aux_sym__line_token1,
    ACTIONS(183), 1,
      anon_sym_PERCENT_RBRACE,
  [509] = 2,
    ACTIONS(185), 1,
      aux_sym__line_token1,
    ACTIONS(187), 1,
      aux_sym__line_token2,
  [516] = 1,
    ACTIONS(189), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [521] = 2,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [528] = 2,
    ACTIONS(191), 1,
      anon_sym_COLON,
    ACTIONS(193), 1,
      aux_sym__line_token1,
  [535] = 1,
    ACTIONS(195), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [540] = 1,
    ACTIONS(197), 1,
      aux_sym__line_token2,
  [544] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [548] = 1,
    ACTIONS(139), 1,
      aux_sym__line_token2,
  [552] = 1,
    ACTIONS(201), 1,
      sym__expr_content,
  [556] = 1,
    ACTIONS(203), 1,
      aux_sym__line_token2,
  [560] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
  [564] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
  [568] = 1,
    ACTIONS(209), 1,
      aux_sym__line_token2,
  [572] = 1,
    ACTIONS(169), 1,
      anon_sym_PERCENT_RBRACE,
  [576] = 1,
    ACTIONS(183), 1,
      anon_sym_PERCENT_RBRACE,
  [580] = 1,
    ACTIONS(211), 1,
      aux_sym_nunjucks_comment_token1,
  [584] = 1,
    ACTIONS(213), 1,
      aux_sym__line_token2,
  [588] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [592] = 1,
    ACTIONS(217), 1,
      aux_sym__line_token2,
  [596] = 1,
    ACTIONS(193), 1,
      aux_sym__line_token1,
  [600] = 1,
    ACTIONS(219), 1,
      aux_sym__line_token2,
  [604] = 1,
    ACTIONS(221), 1,
      aux_sym__line_token2,
  [608] = 1,
    ACTIONS(223), 1,
      anon_sym_PERCENT_RBRACE,
  [612] = 1,
    ACTIONS(225), 1,
      aux_sym__line_token2,
  [616] = 1,
    ACTIONS(227), 1,
      aux_sym__line_token2,
  [620] = 1,
    ACTIONS(229), 1,
      aux_sym__line_token2,
  [624] = 1,
    ACTIONS(231), 1,
      aux_sym__line_token2,
  [628] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [632] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACE_RBRACE,
  [636] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACE_RBRACE,
  [640] = 1,
    ACTIONS(237), 1,
      sym__expr_content,
  [644] = 1,
    ACTIONS(239), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 272,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 323,
  [SMALL_STATE(15)] = 340,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 399,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 422,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 455,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 481,
  [SMALL_STATE(28)] = 488,
  [SMALL_STATE(29)] = 495,
  [SMALL_STATE(30)] = 502,
  [SMALL_STATE(31)] = 509,
  [SMALL_STATE(32)] = 516,
  [SMALL_STATE(33)] = 521,
  [SMALL_STATE(34)] = 528,
  [SMALL_STATE(35)] = 535,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 544,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 552,
  [SMALL_STATE(40)] = 556,
  [SMALL_STATE(41)] = 560,
  [SMALL_STATE(42)] = 564,
  [SMALL_STATE(43)] = 568,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 576,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 584,
  [SMALL_STATE(48)] = 588,
  [SMALL_STATE(49)] = 592,
  [SMALL_STATE(50)] = 596,
  [SMALL_STATE(51)] = 600,
  [SMALL_STATE(52)] = 604,
  [SMALL_STATE(53)] = 608,
  [SMALL_STATE(54)] = 612,
  [SMALL_STATE(55)] = 616,
  [SMALL_STATE(56)] = 620,
  [SMALL_STATE(57)] = 624,
  [SMALL_STATE(58)] = 628,
  [SMALL_STATE(59)] = 632,
  [SMALL_STATE(60)] = 636,
  [SMALL_STATE(61)] = 640,
  [SMALL_STATE(62)] = 644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(61),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(62),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yaml_nunjucks(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
