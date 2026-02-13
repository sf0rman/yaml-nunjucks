#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
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
  [57] = 40,
  [58] = 40,
  [59] = 38,
  [60] = 38,
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
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym_yaml_value_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(175);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(228);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(114);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '{') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '%') ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '{') ADVANCE(163);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(238);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(176);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'J') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead == 'O') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'I') ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'V') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'Z') ADVANCE(89);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(80);
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'k') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'q') ADVANCE(99);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 100:
      if (lookahead == '{') ADVANCE(163);
      END_STATE();
    case 101:
      if (lookahead == '}') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == '}') ADVANCE(116);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == '}') ADVANCE(107);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 106:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(162);
      END_STATE();
    case 107:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(167);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(236);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(174);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'k') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(159);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(130);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead != 0) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_yaml_value_token1);
      if (lookahead == '!') ADVANCE(228);
      if (!aux_sym_yaml_value_token1_character_set_1(lookahead)) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(178);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'B') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(218);
      if (lookahead == 'F') ADVANCE(204);
      if (lookahead == 'G') ADVANCE(194);
      if (lookahead == 'I') ADVANCE(200);
      if (lookahead == 'J') ADVANCE(213);
      if (lookahead == 'N') ADVANCE(215);
      if (lookahead == 'O') ADVANCE(219);
      if (lookahead == 'R') ADVANCE(196);
      if (lookahead == 'S') ADVANCE(197);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(185);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(211);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(187);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(189);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(221);
      if (lookahead == 't') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(205);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(182);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(224);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(190);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(191);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(217);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(210);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(221);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(203);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(199);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(192);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(193);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(202);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(220);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(214);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(226);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(225);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(198);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(181);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(184);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(188);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(195);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(174);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 108},
  [3] = {.lex_state = 108},
  [4] = {.lex_state = 108},
  [5] = {.lex_state = 108},
  [6] = {.lex_state = 108},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 121},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 121},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 122},
  [25] = {.lex_state = 122},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 104},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 170},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 108},
  [58] = {.lex_state = 108},
  [59] = {.lex_state = 104},
  [60] = {.lex_state = 104},
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
    [sym_document] = STATE(48),
    [sym__line] = STATE(3),
    [sym_nunjucks_statement] = STATE(53),
    [sym_nunjucks_comment] = STATE(53),
    [sym_yaml_pair] = STATE(53),
    [sym_yaml_key] = STATE(35),
    [sym_yaml_list_item] = STATE(53),
    [sym_yaml_string] = STATE(56),
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
    STATE(35), 1,
      sym_yaml_key,
    STATE(56), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(53), 4,
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
    STATE(35), 1,
      sym_yaml_key,
    STATE(56), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(53), 4,
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
    STATE(35), 1,
      sym_yaml_key,
    STATE(56), 1,
      sym_yaml_string,
    STATE(46), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [137] = 2,
    ACTIONS(65), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [153] = 2,
    ACTIONS(69), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [169] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(73), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(75), 1,
      sym_cf_tag,
    ACTIONS(77), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 1,
      sym_nunjucks_expression,
    STATE(49), 1,
      sym_yaml_value,
    STATE(36), 3,
      sym_cf_intrinsic,
      sym_yaml_mixed,
      sym_yaml_string,
  [199] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(73), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(75), 1,
      sym_cf_tag,
    ACTIONS(77), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 1,
      sym_nunjucks_expression,
    STATE(39), 1,
      sym_yaml_value,
    STATE(36), 3,
      sym_cf_intrinsic,
      sym_yaml_mixed,
      sym_yaml_string,
  [229] = 5,
    ACTIONS(79), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(87), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [246] = 5,
    ACTIONS(90), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(92), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [263] = 5,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(104), 1,
      aux_sym_yaml_string_token2,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [280] = 5,
    ACTIONS(90), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(108), 1,
      aux_sym_yaml_string_token3,
    STATE(10), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [297] = 5,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [314] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(116), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(52), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [331] = 5,
    ACTIONS(118), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(121), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [348] = 4,
    ACTIONS(129), 1,
      aux_sym__line_token2,
    ACTIONS(131), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(134), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [362] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(137), 1,
      aux_sym__line_token2,
    ACTIONS(139), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [376] = 4,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(141), 1,
      aux_sym__line_token2,
    ACTIONS(143), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [390] = 2,
    ACTIONS(147), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(145), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [400] = 4,
    ACTIONS(149), 1,
      aux_sym__line_token1,
    ACTIONS(151), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(153), 1,
      sym_nunjucks_keyword,
    ACTIONS(155), 1,
      sym__statement_rest,
  [413] = 3,
    ACTIONS(71), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [424] = 4,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(161), 1,
      sym_nunjucks_keyword,
    ACTIONS(163), 1,
      sym__statement_rest,
  [437] = 2,
    ACTIONS(145), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(147), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [446] = 3,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(163), 1,
      sym__statement_rest,
  [456] = 3,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(169), 1,
      sym__statement_rest,
  [466] = 1,
    ACTIONS(145), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [472] = 2,
    ACTIONS(167), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(171), 1,
      aux_sym__line_token1,
  [479] = 1,
    ACTIONS(173), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [484] = 2,
    ACTIONS(175), 1,
      aux_sym__line_token1,
    ACTIONS(177), 1,
      aux_sym__line_token2,
  [491] = 2,
    ACTIONS(179), 1,
      aux_sym__line_token1,
    ACTIONS(181), 1,
      anon_sym_PERCENT_RBRACE,
  [498] = 2,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    ACTIONS(185), 1,
      aux_sym__line_token2,
  [505] = 1,
    ACTIONS(187), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [510] = 2,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(189), 1,
      aux_sym__line_token1,
  [517] = 1,
    ACTIONS(181), 1,
      anon_sym_PERCENT_RBRACE,
  [521] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [525] = 1,
    ACTIONS(137), 1,
      aux_sym__line_token2,
  [529] = 1,
    ACTIONS(193), 1,
      aux_sym__line_token1,
  [533] = 1,
    ACTIONS(195), 1,
      sym__expr_content,
  [537] = 1,
    ACTIONS(197), 1,
      aux_sym__line_token2,
  [541] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACE_RBRACE,
  [545] = 1,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
  [549] = 1,
    ACTIONS(203), 1,
      aux_sym__line_token2,
  [553] = 1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [557] = 1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_RBRACE,
  [561] = 1,
    ACTIONS(207), 1,
      aux_sym__line_token2,
  [565] = 1,
    ACTIONS(209), 1,
      aux_sym__line_token2,
  [569] = 1,
    ACTIONS(211), 1,
      aux_sym__line_token2,
  [573] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [577] = 1,
    ACTIONS(215), 1,
      aux_sym__line_token2,
  [581] = 1,
    ACTIONS(217), 1,
      aux_sym__line_token2,
  [585] = 1,
    ACTIONS(219), 1,
      anon_sym_PERCENT_RBRACE,
  [589] = 1,
    ACTIONS(221), 1,
      aux_sym__line_token2,
  [593] = 1,
    ACTIONS(223), 1,
      aux_sym__line_token2,
  [597] = 1,
    ACTIONS(225), 1,
      aux_sym__line_token2,
  [601] = 1,
    ACTIONS(227), 1,
      aux_sym_nunjucks_comment_token1,
  [605] = 1,
    ACTIONS(229), 1,
      anon_sym_COLON,
  [609] = 1,
    ACTIONS(231), 1,
      anon_sym_RBRACE_RBRACE,
  [613] = 1,
    ACTIONS(233), 1,
      anon_sym_RBRACE_RBRACE,
  [617] = 1,
    ACTIONS(235), 1,
      sym__expr_content,
  [621] = 1,
    ACTIONS(237), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 199,
  [SMALL_STATE(9)] = 229,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 297,
  [SMALL_STATE(14)] = 314,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 348,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 376,
  [SMALL_STATE(19)] = 390,
  [SMALL_STATE(20)] = 400,
  [SMALL_STATE(21)] = 413,
  [SMALL_STATE(22)] = 424,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 446,
  [SMALL_STATE(25)] = 456,
  [SMALL_STATE(26)] = 466,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 479,
  [SMALL_STATE(29)] = 484,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 498,
  [SMALL_STATE(32)] = 505,
  [SMALL_STATE(33)] = 510,
  [SMALL_STATE(34)] = 517,
  [SMALL_STATE(35)] = 521,
  [SMALL_STATE(36)] = 525,
  [SMALL_STATE(37)] = 529,
  [SMALL_STATE(38)] = 533,
  [SMALL_STATE(39)] = 537,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 545,
  [SMALL_STATE(42)] = 549,
  [SMALL_STATE(43)] = 553,
  [SMALL_STATE(44)] = 557,
  [SMALL_STATE(45)] = 561,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 569,
  [SMALL_STATE(48)] = 573,
  [SMALL_STATE(49)] = 577,
  [SMALL_STATE(50)] = 581,
  [SMALL_STATE(51)] = 585,
  [SMALL_STATE(52)] = 589,
  [SMALL_STATE(53)] = 593,
  [SMALL_STATE(54)] = 597,
  [SMALL_STATE(55)] = 601,
  [SMALL_STATE(56)] = 605,
  [SMALL_STATE(57)] = 609,
  [SMALL_STATE(58)] = 613,
  [SMALL_STATE(59)] = 617,
  [SMALL_STATE(60)] = 621,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(59),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(15),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(60),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
