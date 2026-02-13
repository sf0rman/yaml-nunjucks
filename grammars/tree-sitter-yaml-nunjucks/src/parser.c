#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym__line_token1 = 1,
  aux_sym__line_token2 = 2,
  sym_blank_line = 3,
  anon_sym_LBRACE_PERCENT = 4,
  aux_sym_nunjucks_statement_token1 = 5,
  anon_sym_PERCENT_RBRACE = 6,
  sym_nunjucks_keyword = 7,
  sym__statement_content = 8,
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
  [sym__statement_content] = "_statement_content",
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
  [sym__statement_content] = sym__statement_content,
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
  [sym__statement_content] = {
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

enum {
  field_content = 1,
  field_keyword = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_keyword] = "keyword",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 2},
  [1] =
    {field_content, 3},
    {field_keyword, 2},
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
  [20] = 16,
  [21] = 21,
  [22] = 16,
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
  [53] = 34,
  [54] = 34,
  [55] = 38,
  [56] = 38,
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
      if (lookahead == '\r') ADVANCE(243);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead != 0) ADVANCE(245);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!') ADVANCE(165);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(158);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(240);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ':') ADVANCE(157);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(165);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(160);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(245);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '%') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(161);
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
      if (lookahead == 'b') ADVANCE(161);
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
      if (lookahead == 'd') ADVANCE(161);
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
      if (lookahead == 'e') ADVANCE(161);
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
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(161);
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
      if (lookahead == 'n') ADVANCE(161);
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
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(161);
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
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(161);
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
      if (lookahead == '{') ADVANCE(148);
      END_STATE();
    case 89:
      if (lookahead == '}') ADVANCE(151);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(103);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 91:
      if (lookahead == '}') ADVANCE(94);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(246);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(242);
      if (lookahead == '#') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(247);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(159);
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
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'b') ADVANCE(125);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'k') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(143);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(142);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__statement_content);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(240);
      if (lookahead == ':') ADVANCE(160);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_yaml_value_token1);
      if (lookahead == '!') ADVANCE(240);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(163);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(211);
      if (lookahead == 'B') ADVANCE(172);
      if (lookahead == 'E') ADVANCE(225);
      if (lookahead == 'F') ADVANCE(204);
      if (lookahead == 'G') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(194);
      if (lookahead == 'J') ADVANCE(219);
      if (lookahead == 'N') ADVANCE(220);
      if (lookahead == 'O') ADVANCE(226);
      if (lookahead == 'R') ADVANCE(189);
      if (lookahead == 'S') ADVANCE(190);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(171);
      if (lookahead == 'O') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(205);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(213);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(173);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(178);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(230);
      if (lookahead == 't') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(180);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(217);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(235);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(209);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(198);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(207);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(168);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(188);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(233);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(195);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == 'u') ADVANCE(179);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(174);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(182);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(175);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(239);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(222);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(216);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(229);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(218);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(230);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(237);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(201);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(238);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(192);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(167);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(184);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(196);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(199);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(200);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(228);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(214);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(221);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(236);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(197);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(234);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(193);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(191);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(162);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(166);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(170);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(202);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(177);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(185);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(188);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(176);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(159);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
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
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 106},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 102},
  [34] = {.lex_state = 95},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 146},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 102},
  [40] = {.lex_state = 106},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 95},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 95},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 106},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 155},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 91},
  [56] = {.lex_state = 91},
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
    [sym_yaml_string] = STATE(51),
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
    STATE(51), 1,
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
    STATE(51), 1,
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
    STATE(51), 1,
      sym_yaml_string,
    STATE(30), 4,
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
    STATE(18), 1,
      sym_nunjucks_expression,
    STATE(28), 1,
      sym_yaml_string,
    STATE(42), 1,
      sym_yaml_key,
    STATE(31), 2,
      sym_cf_intrinsic,
      sym_yaml_mixed,
    STATE(32), 2,
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
    STATE(18), 1,
      sym_nunjucks_expression,
    STATE(45), 1,
      sym_yaml_value,
    STATE(31), 3,
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
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [255] = 5,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(93), 1,
      aux_sym_yaml_string_token3,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [272] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(97), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(48), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
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
    ACTIONS(81), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(114), 1,
      aux_sym_yaml_string_token2,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [323] = 5,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(118), 1,
      aux_sym_yaml_string_token3,
    STATE(12), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [340] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(128), 1,
      aux_sym_yaml_string_token2,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [357] = 2,
    ACTIONS(133), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(131), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [367] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      aux_sym__line_token2,
    ACTIONS(137), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(19), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [381] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [395] = 4,
    ACTIONS(143), 1,
      aux_sym__line_token2,
    ACTIONS(145), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(148), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(19), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [409] = 2,
    ACTIONS(131), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(133), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [418] = 3,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [429] = 1,
    ACTIONS(131), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [435] = 2,
    ACTIONS(151), 1,
      sym_nunjucks_keyword,
    ACTIONS(153), 1,
      sym__statement_content,
  [442] = 1,
    ACTIONS(155), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [447] = 2,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(159), 1,
      aux_sym__line_token2,
  [454] = 2,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    ACTIONS(163), 1,
      aux_sym__line_token2,
  [461] = 1,
    ACTIONS(165), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [466] = 2,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [473] = 2,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      aux_sym__line_token1,
  [480] = 1,
    ACTIONS(171), 1,
      aux_sym__line_token2,
  [484] = 1,
    ACTIONS(139), 1,
      aux_sym__line_token2,
  [488] = 1,
    ACTIONS(173), 1,
      aux_sym__line_token2,
  [492] = 1,
    ACTIONS(175), 1,
      aux_sym_nunjucks_statement_token1,
  [496] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE_RBRACE,
  [500] = 1,
    ACTIONS(179), 1,
      aux_sym__line_token2,
  [504] = 1,
    ACTIONS(181), 1,
      aux_sym_nunjucks_statement_token1,
  [508] = 1,
    ACTIONS(183), 1,
      sym__statement_content,
  [512] = 1,
    ACTIONS(185), 1,
      sym__expr_content,
  [516] = 1,
    ACTIONS(187), 1,
      aux_sym_nunjucks_statement_token1,
  [520] = 1,
    ACTIONS(189), 1,
      anon_sym_PERCENT_RBRACE,
  [524] = 1,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
  [528] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [532] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [536] = 1,
    ACTIONS(169), 1,
      aux_sym__line_token1,
  [540] = 1,
    ACTIONS(197), 1,
      aux_sym__line_token2,
  [544] = 1,
    ACTIONS(199), 1,
      anon_sym_PERCENT_RBRACE,
  [548] = 1,
    ACTIONS(201), 1,
      aux_sym__line_token2,
  [552] = 1,
    ACTIONS(203), 1,
      aux_sym__line_token2,
  [556] = 1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [560] = 1,
    ACTIONS(207), 1,
      aux_sym__line_token2,
  [564] = 1,
    ACTIONS(167), 1,
      anon_sym_COLON,
  [568] = 1,
    ACTIONS(209), 1,
      aux_sym_nunjucks_comment_token1,
  [572] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACE_RBRACE,
  [576] = 1,
    ACTIONS(213), 1,
      anon_sym_RBRACE_RBRACE,
  [580] = 1,
    ACTIONS(215), 1,
      sym__expr_content,
  [584] = 1,
    ACTIONS(217), 1,
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
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 447,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 461,
  [SMALL_STATE(28)] = 466,
  [SMALL_STATE(29)] = 473,
  [SMALL_STATE(30)] = 480,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 492,
  [SMALL_STATE(34)] = 496,
  [SMALL_STATE(35)] = 500,
  [SMALL_STATE(36)] = 504,
  [SMALL_STATE(37)] = 508,
  [SMALL_STATE(38)] = 512,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 520,
  [SMALL_STATE(41)] = 524,
  [SMALL_STATE(42)] = 528,
  [SMALL_STATE(43)] = 532,
  [SMALL_STATE(44)] = 536,
  [SMALL_STATE(45)] = 540,
  [SMALL_STATE(46)] = 544,
  [SMALL_STATE(47)] = 548,
  [SMALL_STATE(48)] = 552,
  [SMALL_STATE(49)] = 556,
  [SMALL_STATE(50)] = 560,
  [SMALL_STATE(51)] = 564,
  [SMALL_STATE(52)] = 568,
  [SMALL_STATE(53)] = 572,
  [SMALL_STATE(54)] = 576,
  [SMALL_STATE(55)] = 580,
  [SMALL_STATE(56)] = 584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(55),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(12),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(15),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(56),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
