#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__line_token1 = 1,
  aux_sym__line_token2 = 2,
  sym_blank_line = 3,
  anon_sym_LBRACE_PERCENT = 4,
  aux_sym_nunjucks_statement_token1 = 5,
  anon_sym_PERCENT_RBRACE = 6,
  sym_nunjucks_keyword = 7,
  sym__statement_rest = 8,
  anon_sym_LBRACE_LBRACE = 9,
  anon_sym_RBRACE_RBRACE = 10,
  sym__expr_content = 11,
  anon_sym_LBRACE_POUND = 12,
  aux_sym_nunjucks_comment_token1 = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COLON = 15,
  aux_sym_yaml_key_token1 = 16,
  aux_sym_yaml_value_token1 = 17,
  sym_cf_tag = 18,
  aux_sym_cf_intrinsic_token1 = 19,
  anon_sym_DASH = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_yaml_string_token1 = 22,
  aux_sym_yaml_string_token2 = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_yaml_string_token3 = 25,
  sym_comment = 26,
  sym_document = 27,
  sym__line = 28,
  sym_nunjucks_statement = 29,
  sym_nunjucks_expression = 30,
  sym_nunjucks_comment = 31,
  sym_yaml_pair = 32,
  sym_yaml_key = 33,
  sym_yaml_value = 34,
  sym_cf_intrinsic = 35,
  sym_yaml_mixed = 36,
  sym_yaml_list_item = 37,
  sym_yaml_string = 38,
  aux_sym_document_repeat1 = 39,
  aux_sym_yaml_mixed_repeat1 = 40,
  aux_sym_yaml_string_repeat1 = 41,
  aux_sym_yaml_string_repeat2 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_blank_line] = "blank_line",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_nunjucks_statement_token1] = "nunjucks_statement_token1",
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
  [aux_sym_nunjucks_statement_token1] = aux_sym_nunjucks_statement_token1,
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
  [aux_sym_nunjucks_statement_token1] = {
    .visible = false,
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
  [21] = 17,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
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
  [54] = 34,
  [55] = 34,
  [56] = 38,
  [57] = 38,
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
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (eof) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(242);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(159);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(244);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '%') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(160);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'J') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'R') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'Z') ADVANCE(78);
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 87:
      if (lookahead == 'z') ADVANCE(24);
      END_STATE();
    case 88:
      if (lookahead == '{') ADVANCE(147);
      END_STATE();
    case 89:
      if (lookahead == '}') ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == '}') ADVANCE(94);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(151);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(241);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(246);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'k') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(143);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(248);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == ':') ADVANCE(159);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_yaml_value_token1);
      if (lookahead == '!') ADVANCE(239);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(210);
      if (lookahead == 'B') ADVANCE(171);
      if (lookahead == 'E') ADVANCE(224);
      if (lookahead == 'F') ADVANCE(203);
      if (lookahead == 'G') ADVANCE(186);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'J') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == 'O') ADVANCE(225);
      if (lookahead == 'R') ADVANCE(188);
      if (lookahead == 'S') ADVANCE(189);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(226);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(212);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(172);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(229);
      if (lookahead == 't') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(230);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(179);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(234);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(205);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(208);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(197);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(167);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(187);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(202);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(178);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(163);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(180);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(181);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(174);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(238);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(215);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(228);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(217);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(229);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(236);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(200);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(237);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(182);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(168);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(195);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(198);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(185);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(199);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(213);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(220);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(235);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(196);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(233);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(192);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(190);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(161);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(165);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(169);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(201);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(176);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(184);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(187);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(175);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(158);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 95},
  [2] = {.lex_state = 95},
  [3] = {.lex_state = 95},
  [4] = {.lex_state = 95},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 95},
  [7] = {.lex_state = 95},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 106},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 146},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 154},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 95},
  [56] = {.lex_state = 91},
  [57] = {.lex_state = 91},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym_nunjucks_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(43),
    [sym__line] = STATE(3),
    [sym_nunjucks_statement] = STATE(49),
    [sym_nunjucks_comment] = STATE(49),
    [sym_yaml_pair] = STATE(49),
    [sym_yaml_key] = STATE(42),
    [sym_yaml_list_item] = STATE(49),
    [sym_yaml_string] = STATE(52),
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
    STATE(42), 1,
      sym_yaml_key,
    STATE(52), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(49), 4,
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
    STATE(42), 1,
      sym_yaml_key,
    STATE(52), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(49), 4,
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
    STATE(42), 1,
      sym_yaml_key,
    STATE(52), 1,
      sym_yaml_string,
    STATE(31), 4,
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
    STATE(19), 1,
      sym_nunjucks_expression,
    STATE(30), 1,
      sym_yaml_string,
    STATE(42), 1,
      sym_yaml_key,
    STATE(32), 2,
      sym_yaml_pair,
      sym_yaml_value,
    STATE(33), 2,
      sym_cf_intrinsic,
      sym_yaml_mixed,
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
    STATE(19), 1,
      sym_nunjucks_expression,
    STATE(45), 1,
      sym_yaml_value,
    STATE(33), 3,
      sym_cf_intrinsic,
      sym_yaml_mixed,
      sym_yaml_string,
  [238] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(87), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [255] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(48), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [272] = 5,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(95), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(97), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [289] = 5,
    ACTIONS(99), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_yaml_string_token3,
    STATE(12), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [306] = 5,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(118), 1,
      aux_sym_yaml_string_token2,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [323] = 5,
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(125), 1,
      aux_sym_yaml_string_token2,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [340] = 5,
    ACTIONS(93), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(129), 1,
      aux_sym_yaml_string_token3,
    STATE(12), 2,
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
  [371] = 2,
    ACTIONS(141), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(139), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [381] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(143), 1,
      aux_sym__line_token2,
    ACTIONS(145), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [395] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(147), 1,
      aux_sym__line_token2,
    ACTIONS(149), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [409] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(149), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [420] = 2,
    ACTIONS(139), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(141), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [429] = 1,
    ACTIONS(139), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [435] = 2,
    ACTIONS(151), 1,
      aux_sym__line_token1,
    ACTIONS(153), 1,
      aux_sym__line_token2,
  [442] = 2,
    ACTIONS(155), 1,
      sym_nunjucks_keyword,
    ACTIONS(157), 1,
      sym__statement_rest,
  [449] = 2,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      aux_sym_nunjucks_statement_token1,
  [456] = 2,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    ACTIONS(165), 1,
      aux_sym__line_token2,
  [463] = 1,
    ACTIONS(167), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [468] = 2,
    ACTIONS(169), 1,
      aux_sym__line_token1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [475] = 1,
    ACTIONS(173), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [480] = 2,
    ACTIONS(147), 1,
      aux_sym__line_token2,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [487] = 1,
    ACTIONS(175), 1,
      aux_sym__line_token2,
  [491] = 1,
    ACTIONS(177), 1,
      aux_sym__line_token2,
  [495] = 1,
    ACTIONS(147), 1,
      aux_sym__line_token2,
  [499] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE_RBRACE,
  [503] = 1,
    ACTIONS(181), 1,
      aux_sym_nunjucks_statement_token1,
  [507] = 1,
    ACTIONS(183), 1,
      aux_sym__line_token2,
  [511] = 1,
    ACTIONS(185), 1,
      aux_sym_nunjucks_statement_token1,
  [515] = 1,
    ACTIONS(187), 1,
      sym__expr_content,
  [519] = 1,
    ACTIONS(189), 1,
      sym__statement_rest,
  [523] = 1,
    ACTIONS(191), 1,
      anon_sym_PERCENT_RBRACE,
  [527] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [531] = 1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [535] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [539] = 1,
    ACTIONS(169), 1,
      aux_sym__line_token1,
  [543] = 1,
    ACTIONS(199), 1,
      aux_sym__line_token2,
  [547] = 1,
    ACTIONS(201), 1,
      aux_sym_nunjucks_statement_token1,
  [551] = 1,
    ACTIONS(203), 1,
      aux_sym__line_token2,
  [555] = 1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [559] = 1,
    ACTIONS(207), 1,
      aux_sym__line_token2,
  [563] = 1,
    ACTIONS(209), 1,
      anon_sym_PERCENT_RBRACE,
  [567] = 1,
    ACTIONS(211), 1,
      aux_sym__line_token2,
  [571] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [575] = 1,
    ACTIONS(213), 1,
      aux_sym_nunjucks_comment_token1,
  [579] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE_RBRACE,
  [583] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE_RBRACE,
  [587] = 1,
    ACTIONS(219), 1,
      sym__expr_content,
  [591] = 1,
    ACTIONS(221), 1,
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
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 420,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 449,
  [SMALL_STATE(26)] = 456,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 487,
  [SMALL_STATE(32)] = 491,
  [SMALL_STATE(33)] = 495,
  [SMALL_STATE(34)] = 499,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 507,
  [SMALL_STATE(37)] = 511,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 519,
  [SMALL_STATE(40)] = 523,
  [SMALL_STATE(41)] = 527,
  [SMALL_STATE(42)] = 531,
  [SMALL_STATE(43)] = 535,
  [SMALL_STATE(44)] = 539,
  [SMALL_STATE(45)] = 543,
  [SMALL_STATE(46)] = 547,
  [SMALL_STATE(47)] = 551,
  [SMALL_STATE(48)] = 555,
  [SMALL_STATE(49)] = 559,
  [SMALL_STATE(50)] = 563,
  [SMALL_STATE(51)] = 567,
  [SMALL_STATE(52)] = 571,
  [SMALL_STATE(53)] = 575,
  [SMALL_STATE(54)] = 579,
  [SMALL_STATE(55)] = 583,
  [SMALL_STATE(56)] = 587,
  [SMALL_STATE(57)] = 591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(56),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(13),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(13),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(57),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
