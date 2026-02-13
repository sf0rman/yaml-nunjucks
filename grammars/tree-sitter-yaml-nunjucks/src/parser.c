#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  sym_cf_tag = 16,
  aux_sym_cf_intrinsic_token1 = 17,
  anon_sym_DASH = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_yaml_string_token1 = 20,
  aux_sym_yaml_string_token2 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_yaml_string_token3 = 23,
  sym_comment = 24,
  sym_document = 25,
  sym__line = 26,
  sym_nunjucks_statement = 27,
  sym_nunjucks_expression = 28,
  sym_nunjucks_comment = 29,
  sym_yaml_pair = 30,
  sym_yaml_key = 31,
  sym_yaml_value = 32,
  sym_cf_intrinsic = 33,
  sym_yaml_mixed = 34,
  sym_yaml_list_item = 35,
  sym_yaml_string = 36,
  aux_sym_document_repeat1 = 37,
  aux_sym_yaml_mixed_repeat1 = 38,
  aux_sym_yaml_string_repeat1 = 39,
  aux_sym_yaml_string_repeat2 = 40,
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
  [23] = 23,
  [24] = 17,
  [25] = 25,
  [26] = 26,
  [27] = 17,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 43,
  [63] = 43,
  [64] = 44,
  [65] = 44,
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

static inline bool aux_sym_cf_intrinsic_token1_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= ' ' || c == '#'))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static inline bool aux_sym_cf_intrinsic_token1_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? (c >= '"' && c <= '#')
        : c <= '\'')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
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
      if (eof) ADVANCE(136);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(207);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead == '{') ADVANCE(127);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(201);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '{') ADVANCE(127);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(282);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead == '\r') ADVANCE(286);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '{') ADVANCE(287);
      if (lookahead != 0) ADVANCE(288);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(141);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '{') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '%') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '{') ADVANCE(190);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '{') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(69);
      if (lookahead == 'G') ADVANCE(49);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'J') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'V') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'Z') ADVANCE(113);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(144);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(203);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 126:
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 127:
      if (lookahead == '{') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 129:
      if (lookahead == '}') ADVANCE(143);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(289);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(189);
      END_STATE();
    case 134:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(194);
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(285);
      if (lookahead == '#') ADVANCE(293);
      if (lookahead == '\'') ADVANCE(290);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(202);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(141);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(168);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(150);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 's') ADVANCE(159);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(186);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead != 0) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(282);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(205);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(253);
      if (lookahead == 'B') ADVANCE(214);
      if (lookahead == 'E') ADVANCE(267);
      if (lookahead == 'F') ADVANCE(246);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(236);
      if (lookahead == 'J') ADVANCE(261);
      if (lookahead == 'N') ADVANCE(262);
      if (lookahead == 'O') ADVANCE(268);
      if (lookahead == 'R') ADVANCE(231);
      if (lookahead == 'S') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(213);
      if (lookahead == 'O') ADVANCE(269);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(247);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(255);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(215);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(220);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(272);
      if (lookahead == 't') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(265);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(222);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(277);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(248);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(251);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(240);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(249);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(210);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(230);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(245);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(237);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'p') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(221);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(224);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(217);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(254);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(264);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(258);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(271);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(260);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(272);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(279);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(243);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(280);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(234);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(225);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(209);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(226);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(238);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(241);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(242);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(270);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(256);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(263);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(278);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(239);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(276);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(235);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(233);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(204);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(208);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(212);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(244);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(219);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(230);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(218);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(202);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(293);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 135},
  [2] = {.lex_state = 135},
  [3] = {.lex_state = 135},
  [4] = {.lex_state = 135},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 135},
  [7] = {.lex_state = 135},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 148},
  [23] = {.lex_state = 148},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 149},
  [26] = {.lex_state = 149},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 135},
  [44] = {.lex_state = 131},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 197},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 135},
  [63] = {.lex_state = 135},
  [64] = {.lex_state = 131},
  [65] = {.lex_state = 131},
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
    [sym_document] = STATE(57),
    [sym__line] = STATE(2),
    [sym_nunjucks_statement] = STATE(58),
    [sym_nunjucks_comment] = STATE(58),
    [sym_yaml_pair] = STATE(58),
    [sym_yaml_key] = STATE(39),
    [sym_yaml_list_item] = STATE(58),
    [sym_yaml_string] = STATE(61),
    [aux_sym_document_repeat1] = STATE(2),
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
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_blank_line,
    STATE(39), 1,
      sym_yaml_key,
    STATE(61), 1,
      sym_yaml_string,
    STATE(3), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(58), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [50] = 15,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__line_token1,
    ACTIONS(34), 1,
      sym_blank_line,
    ACTIONS(37), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(40), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(43), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(46), 1,
      sym_cf_tag,
    ACTIONS(49), 1,
      anon_sym_DASH,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    STATE(39), 1,
      sym_yaml_key,
    STATE(61), 1,
      sym_yaml_string,
    STATE(3), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(58), 4,
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
    STATE(39), 1,
      sym_yaml_key,
    STATE(61), 1,
      sym_yaml_string,
    STATE(50), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [137] = 12,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(65), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(67), 1,
      sym_cf_tag,
    ACTIONS(69), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(21), 1,
      sym_nunjucks_expression,
    STATE(33), 1,
      sym_yaml_string,
    STATE(38), 1,
      sym_cf_intrinsic,
    STATE(39), 1,
      sym_yaml_key,
    STATE(42), 1,
      sym_yaml_mixed,
    STATE(40), 2,
      sym_yaml_pair,
      sym_yaml_value,
  [175] = 2,
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
  [191] = 2,
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
  [207] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(69), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(79), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(81), 1,
      sym_cf_tag,
    STATE(21), 1,
      sym_nunjucks_expression,
    STATE(42), 1,
      sym_yaml_mixed,
    STATE(53), 1,
      sym_yaml_value,
    STATE(38), 2,
      sym_cf_intrinsic,
      sym_yaml_string,
  [239] = 5,
    ACTIONS(83), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(91), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [256] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(94), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(96), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(56), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [273] = 5,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [290] = 5,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(108), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(110), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [307] = 5,
    ACTIONS(112), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(115), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [324] = 5,
    ACTIONS(106), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(127), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [341] = 5,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(131), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [358] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(133), 1,
      aux_sym__line_token2,
    ACTIONS(135), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [372] = 2,
    ACTIONS(139), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(137), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [382] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(141), 1,
      aux_sym__line_token2,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [396] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(141), 1,
      aux_sym__line_token2,
    ACTIONS(143), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [410] = 4,
    ACTIONS(145), 1,
      aux_sym__line_token2,
    ACTIONS(147), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(150), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [424] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(153), 1,
      aux_sym__line_token2,
    ACTIONS(155), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [438] = 4,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(161), 1,
      sym_nunjucks_keyword,
    ACTIONS(163), 1,
      sym__statement_rest,
  [451] = 4,
    ACTIONS(165), 1,
      aux_sym__line_token1,
    ACTIONS(167), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(169), 1,
      sym_nunjucks_keyword,
    ACTIONS(171), 1,
      sym__statement_rest,
  [464] = 2,
    ACTIONS(137), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(139), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [473] = 3,
    ACTIONS(157), 1,
      aux_sym__line_token1,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(163), 1,
      sym__statement_rest,
  [483] = 3,
    ACTIONS(173), 1,
      aux_sym__line_token1,
    ACTIONS(175), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(177), 1,
      sym__statement_rest,
  [493] = 1,
    ACTIONS(137), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [499] = 2,
    ACTIONS(159), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(179), 1,
      aux_sym__line_token1,
  [506] = 1,
    ACTIONS(181), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [511] = 2,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    ACTIONS(185), 1,
      aux_sym__line_token2,
  [518] = 2,
    ACTIONS(175), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(187), 1,
      aux_sym__line_token1,
  [525] = 2,
    ACTIONS(189), 1,
      aux_sym__line_token1,
    ACTIONS(191), 1,
      anon_sym_PERCENT_RBRACE,
  [532] = 2,
    ACTIONS(153), 1,
      aux_sym__line_token2,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [539] = 2,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      aux_sym__line_token1,
  [546] = 2,
    ACTIONS(63), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 1,
      sym_nunjucks_expression,
  [553] = 2,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    ACTIONS(199), 1,
      aux_sym__line_token2,
  [560] = 1,
    ACTIONS(201), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [565] = 1,
    ACTIONS(153), 1,
      aux_sym__line_token2,
  [569] = 1,
    ACTIONS(203), 1,
      anon_sym_COLON,
  [573] = 1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [577] = 1,
    ACTIONS(175), 1,
      anon_sym_PERCENT_RBRACE,
  [581] = 1,
    ACTIONS(153), 1,
      aux_sym__line_token2,
  [585] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACE_RBRACE,
  [589] = 1,
    ACTIONS(209), 1,
      sym__expr_content,
  [593] = 1,
    ACTIONS(211), 1,
      aux_sym__line_token2,
  [597] = 1,
    ACTIONS(191), 1,
      anon_sym_PERCENT_RBRACE,
  [601] = 1,
    ACTIONS(213), 1,
      aux_sym__line_token2,
  [605] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
  [609] = 1,
    ACTIONS(217), 1,
      aux_sym__line_token2,
  [613] = 1,
    ACTIONS(219), 1,
      aux_sym__line_token2,
  [617] = 1,
    ACTIONS(221), 1,
      aux_sym_nunjucks_comment_token1,
  [621] = 1,
    ACTIONS(195), 1,
      aux_sym__line_token1,
  [625] = 1,
    ACTIONS(223), 1,
      aux_sym__line_token2,
  [629] = 1,
    ACTIONS(225), 1,
      aux_sym__line_token2,
  [633] = 1,
    ACTIONS(227), 1,
      anon_sym_PERCENT_RBRACE,
  [637] = 1,
    ACTIONS(229), 1,
      aux_sym__line_token2,
  [641] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [645] = 1,
    ACTIONS(233), 1,
      aux_sym__line_token2,
  [649] = 1,
    ACTIONS(235), 1,
      aux_sym__line_token2,
  [653] = 1,
    ACTIONS(237), 1,
      aux_sym__line_token2,
  [657] = 1,
    ACTIONS(193), 1,
      anon_sym_COLON,
  [661] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE_RBRACE,
  [665] = 1,
    ACTIONS(241), 1,
      anon_sym_RBRACE_RBRACE,
  [669] = 1,
    ACTIONS(243), 1,
      sym__expr_content,
  [673] = 1,
    ACTIONS(245), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 307,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 341,
  [SMALL_STATE(16)] = 358,
  [SMALL_STATE(17)] = 372,
  [SMALL_STATE(18)] = 382,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 410,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 438,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 464,
  [SMALL_STATE(25)] = 473,
  [SMALL_STATE(26)] = 483,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 499,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 518,
  [SMALL_STATE(32)] = 525,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 546,
  [SMALL_STATE(36)] = 553,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 565,
  [SMALL_STATE(39)] = 569,
  [SMALL_STATE(40)] = 573,
  [SMALL_STATE(41)] = 577,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 585,
  [SMALL_STATE(44)] = 589,
  [SMALL_STATE(45)] = 593,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 601,
  [SMALL_STATE(48)] = 605,
  [SMALL_STATE(49)] = 609,
  [SMALL_STATE(50)] = 613,
  [SMALL_STATE(51)] = 617,
  [SMALL_STATE(52)] = 621,
  [SMALL_STATE(53)] = 625,
  [SMALL_STATE(54)] = 629,
  [SMALL_STATE(55)] = 633,
  [SMALL_STATE(56)] = 637,
  [SMALL_STATE(57)] = 641,
  [SMALL_STATE(58)] = 645,
  [SMALL_STATE(59)] = 649,
  [SMALL_STATE(60)] = 653,
  [SMALL_STATE(61)] = 657,
  [SMALL_STATE(62)] = 661,
  [SMALL_STATE(63)] = 665,
  [SMALL_STATE(64)] = 669,
  [SMALL_STATE(65)] = 673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(44),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(64),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(65),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(20),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
