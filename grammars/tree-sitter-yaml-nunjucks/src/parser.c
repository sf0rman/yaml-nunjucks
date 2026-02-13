#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__line_token1 = 1,
  aux_sym__line_token2 = 2,
  sym_blank_line = 3,
  anon_sym_LBRACE_PERCENT = 4,
  aux_sym_nunjucks_statement_token1 = 5,
  anon_sym_PERCENT_RBRACE = 6,
  sym_statement_content = 7,
  anon_sym_LBRACE_LBRACE = 8,
  anon_sym_RBRACE_RBRACE = 9,
  sym__expr_content = 10,
  anon_sym_LBRACE_POUND = 11,
  aux_sym_nunjucks_comment_token1 = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  aux_sym_yaml_key_token1 = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_True = 18,
  anon_sym_False = 19,
  anon_sym_TRUE = 20,
  anon_sym_FALSE = 21,
  anon_sym_yes = 22,
  anon_sym_no = 23,
  anon_sym_Yes = 24,
  anon_sym_No = 25,
  anon_sym_YES = 26,
  anon_sym_NO = 27,
  anon_sym_on = 28,
  anon_sym_off = 29,
  anon_sym_On = 30,
  anon_sym_Off = 31,
  anon_sym_ON = 32,
  anon_sym_OFF = 33,
  sym_yaml_number = 34,
  sym_yaml_plain_scalar = 35,
  sym_cf_tag = 36,
  aux_sym_cf_intrinsic_token1 = 37,
  anon_sym_DASH = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_yaml_string_token1 = 40,
  aux_sym_yaml_string_token2 = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_yaml_string_token3 = 43,
  sym_comment = 44,
  sym_document = 45,
  sym__line = 46,
  sym_nunjucks_statement = 47,
  sym_nunjucks_expression = 48,
  sym_nunjucks_comment = 49,
  sym_yaml_pair = 50,
  sym_yaml_key = 51,
  sym_yaml_value = 52,
  sym_yaml_boolean = 53,
  sym_cf_intrinsic = 54,
  sym_yaml_mixed = 55,
  sym_yaml_list_item = 56,
  sym_yaml_string = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_yaml_mixed_repeat1 = 59,
  aux_sym_yaml_string_repeat1 = 60,
  aux_sym_yaml_string_repeat2 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_blank_line] = "blank_line",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_nunjucks_statement_token1] = "nunjucks_statement_token1",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [sym_statement_content] = "statement_content",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__expr_content] = "_expr_content",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nunjucks_comment_token1] = "nunjucks_comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_yaml_key_token1] = "yaml_key_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [anon_sym_Yes] = "Yes",
  [anon_sym_No] = "No",
  [anon_sym_YES] = "YES",
  [anon_sym_NO] = "NO",
  [anon_sym_on] = "on",
  [anon_sym_off] = "off",
  [anon_sym_On] = "On",
  [anon_sym_Off] = "Off",
  [anon_sym_ON] = "ON",
  [anon_sym_OFF] = "OFF",
  [sym_yaml_number] = "yaml_number",
  [sym_yaml_plain_scalar] = "yaml_plain_scalar",
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
  [sym_yaml_boolean] = "yaml_boolean",
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
  [sym_statement_content] = sym_statement_content,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__expr_content] = sym__expr_content,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nunjucks_comment_token1] = aux_sym_nunjucks_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_yaml_key_token1] = aux_sym_yaml_key_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_Yes] = anon_sym_Yes,
  [anon_sym_No] = anon_sym_No,
  [anon_sym_YES] = anon_sym_YES,
  [anon_sym_NO] = anon_sym_NO,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_Off] = anon_sym_Off,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_OFF] = anon_sym_OFF,
  [sym_yaml_number] = sym_yaml_number,
  [sym_yaml_plain_scalar] = sym_yaml_plain_scalar,
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
  [sym_yaml_boolean] = sym_yaml_boolean,
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
  [sym_statement_content] = {
    .visible = true,
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_No] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_YES] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OFF] = {
    .visible = true,
    .named = false,
  },
  [sym_yaml_number] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_plain_scalar] = {
    .visible = true,
    .named = true,
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
  [sym_yaml_boolean] = {
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
  [22] = 16,
  [23] = 16,
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
  [54] = 54,
  [55] = 55,
  [56] = 39,
  [57] = 39,
  [58] = 32,
  [59] = 32,
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

static inline bool aux_sym_yaml_key_token1_character_set_2(int32_t c) {
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

static inline bool sym_yaml_plain_scalar_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '#')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
        : c <= '[')
      : (c <= ']' || c == '}'))));
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
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (eof) ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(308);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0) ADVANCE(310);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'Y') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(135);
      if (lookahead == '{') ADVANCE(88);
      if (lookahead == '}') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(151);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '{') ADVANCE(88);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == 'F') ADVANCE(191);
      if (lookahead == 'N') ADVANCE(198);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'Y') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == 'y') ADVANCE(208);
      if (lookahead == '{') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!sym_yaml_plain_scalar_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '{') ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(93);
      if (lookahead == '{') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(226);
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
      if (lookahead == 'b') ADVANCE(226);
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
      if (lookahead == 'd') ADVANCE(226);
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
      if (lookahead == 'e') ADVANCE(226);
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
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(226);
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
      if (lookahead == 'n') ADVANCE(226);
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
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(226);
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
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(226);
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
      if (lookahead == '{') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == '}') ADVANCE(110);
      END_STATE();
    case 90:
      if (lookahead == '}') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == '}') ADVANCE(95);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 93:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(311);
      END_STATE();
    case 94:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(111);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(307);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '\'') ADVANCE(312);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(152);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_statement_content);
      if (lookahead == '%') ADVANCE(94);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '.') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(305);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_Yes);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_Yes);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_No);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_No);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Off);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_Off);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_OFF);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_OFF);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == '.') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '!') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'A') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(196);
      if (lookahead == 'N') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'F') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (lookahead == ':') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(224);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(305);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(228);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(276);
      if (lookahead == 'B') ADVANCE(237);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == 'F') ADVANCE(269);
      if (lookahead == 'G') ADVANCE(252);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'J') ADVANCE(284);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == 'O') ADVANCE(291);
      if (lookahead == 'R') ADVANCE(254);
      if (lookahead == 'S') ADVANCE(255);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(236);
      if (lookahead == 'O') ADVANCE(292);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(270);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(278);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(238);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(243);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(295);
      if (lookahead == 't') ADVANCE(297);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(245);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(282);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(300);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(271);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(274);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(263);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(297);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(272);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(233);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(253);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(268);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(298);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(244);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(246);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'm') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(247);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(240);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(304);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(277);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(297);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(287);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(280);
      if (lookahead == 'o') ADVANCE(294);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(283);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(295);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(266);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(303);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(257);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(248);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(234);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(232);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(249);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(261);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(264);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(265);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(297);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(293);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(279);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(286);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(301);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(262);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(299);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(258);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(256);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(227);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(231);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(235);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(267);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(242);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(250);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(253);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(241);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(152);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 96},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 96},
  [5] = {.lex_state = 96},
  [6] = {.lex_state = 96},
  [7] = {.lex_state = 96},
  [8] = {.lex_state = 96},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 103},
  [25] = {.lex_state = 96},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 96},
  [32] = {.lex_state = 91},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 104},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 96},
  [40] = {.lex_state = 104},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 96},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 96},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 96},
  [55] = {.lex_state = 114},
  [56] = {.lex_state = 96},
  [57] = {.lex_state = 96},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 91},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym_nunjucks_statement_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(47),
    [sym__line] = STATE(4),
    [sym_nunjucks_statement] = STATE(52),
    [sym_nunjucks_comment] = STATE(52),
    [sym_yaml_pair] = STATE(52),
    [sym_yaml_key] = STATE(46),
    [sym_yaml_list_item] = STATE(52),
    [sym_yaml_string] = STATE(54),
    [aux_sym_document_repeat1] = STATE(4),
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
  [2] = {
    [sym_nunjucks_expression] = STATE(21),
    [sym_yaml_pair] = STATE(37),
    [sym_yaml_key] = STATE(46),
    [sym_yaml_value] = STATE(37),
    [sym_yaml_boolean] = STATE(34),
    [sym_cf_intrinsic] = STATE(35),
    [sym_yaml_mixed] = STATE(38),
    [sym_yaml_string] = STATE(28),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(25),
    [aux_sym_yaml_key_token1] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_True] = ACTIONS(27),
    [anon_sym_False] = ACTIONS(27),
    [anon_sym_TRUE] = ACTIONS(27),
    [anon_sym_FALSE] = ACTIONS(27),
    [anon_sym_yes] = ACTIONS(27),
    [anon_sym_no] = ACTIONS(27),
    [anon_sym_Yes] = ACTIONS(27),
    [anon_sym_No] = ACTIONS(27),
    [anon_sym_YES] = ACTIONS(27),
    [anon_sym_NO] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_off] = ACTIONS(27),
    [anon_sym_On] = ACTIONS(27),
    [anon_sym_Off] = ACTIONS(27),
    [anon_sym_ON] = ACTIONS(27),
    [anon_sym_OFF] = ACTIONS(27),
    [sym_yaml_number] = ACTIONS(29),
    [sym_yaml_plain_scalar] = ACTIONS(31),
    [sym_cf_tag] = ACTIONS(33),
    [aux_sym_cf_intrinsic_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_yaml_number,
    ACTIONS(31), 1,
      sym_yaml_plain_scalar,
    ACTIONS(35), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(37), 1,
      sym_cf_tag,
    STATE(21), 1,
      sym_nunjucks_expression,
    STATE(34), 1,
      sym_yaml_boolean,
    STATE(38), 1,
      sym_yaml_mixed,
    STATE(49), 1,
      sym_yaml_value,
    STATE(35), 2,
      sym_cf_intrinsic,
      sym_yaml_string,
    ACTIONS(27), 18,
      anon_sym_true,
      anon_sym_false,
      anon_sym_True,
      anon_sym_False,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_yes,
      anon_sym_no,
      anon_sym_Yes,
      anon_sym_No,
      anon_sym_YES,
      anon_sym_NO,
      anon_sym_on,
      anon_sym_off,
      anon_sym_On,
      anon_sym_Off,
      anon_sym_ON,
      anon_sym_OFF,
  [58] = 15,
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
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_blank_line,
    STATE(46), 1,
      sym_yaml_key,
    STATE(54), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(52), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [108] = 15,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym__line_token1,
    ACTIONS(48), 1,
      sym_blank_line,
    ACTIONS(51), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(54), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(57), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(60), 1,
      sym_cf_tag,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      sym_comment,
    STATE(46), 1,
      sym_yaml_key,
    STATE(54), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(52), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [158] = 11,
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
    ACTIONS(75), 1,
      sym_comment,
    STATE(46), 1,
      sym_yaml_key,
    STATE(54), 1,
      sym_yaml_string,
    STATE(33), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [195] = 2,
    ACTIONS(79), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [211] = 2,
    ACTIONS(83), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [227] = 5,
    ACTIONS(85), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(93), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [244] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(98), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(51), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [261] = 5,
    ACTIONS(100), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(102), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(104), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [278] = 5,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [295] = 5,
    ACTIONS(114), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(117), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [312] = 5,
    ACTIONS(108), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(129), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [329] = 5,
    ACTIONS(100), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(125), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(133), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [346] = 2,
    ACTIONS(137), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(135), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [356] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [370] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym__line_token2,
    ACTIONS(143), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(19), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [384] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(141), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(145), 1,
      aux_sym__line_token2,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [398] = 4,
    ACTIONS(147), 1,
      aux_sym__line_token2,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(152), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [412] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(155), 1,
      aux_sym__line_token2,
    ACTIONS(157), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(17), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [426] = 2,
    ACTIONS(135), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(137), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [435] = 1,
    ACTIONS(135), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [441] = 2,
    ACTIONS(159), 1,
      aux_sym_nunjucks_statement_token1,
    ACTIONS(161), 1,
      sym_statement_content,
  [448] = 2,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 1,
      sym_nunjucks_expression,
  [455] = 2,
    ACTIONS(163), 1,
      aux_sym__line_token1,
    ACTIONS(165), 1,
      aux_sym__line_token2,
  [462] = 1,
    ACTIONS(167), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [467] = 2,
    ACTIONS(155), 1,
      aux_sym__line_token2,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [474] = 2,
    ACTIONS(171), 1,
      aux_sym__line_token1,
    ACTIONS(173), 1,
      aux_sym__line_token2,
  [481] = 1,
    ACTIONS(175), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [486] = 2,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(177), 1,
      aux_sym__line_token1,
  [493] = 1,
    ACTIONS(179), 1,
      sym__expr_content,
  [497] = 1,
    ACTIONS(181), 1,
      aux_sym__line_token2,
  [501] = 1,
    ACTIONS(183), 1,
      aux_sym__line_token2,
  [505] = 1,
    ACTIONS(155), 1,
      aux_sym__line_token2,
  [509] = 1,
    ACTIONS(185), 1,
      aux_sym_nunjucks_statement_token1,
  [513] = 1,
    ACTIONS(187), 1,
      aux_sym__line_token2,
  [517] = 1,
    ACTIONS(155), 1,
      aux_sym__line_token2,
  [521] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACE_RBRACE,
  [525] = 1,
    ACTIONS(191), 1,
      aux_sym_nunjucks_statement_token1,
  [529] = 1,
    ACTIONS(193), 1,
      anon_sym_PERCENT_RBRACE,
  [533] = 1,
    ACTIONS(195), 1,
      aux_sym__line_token2,
  [537] = 1,
    ACTIONS(197), 1,
      anon_sym_PERCENT_RBRACE,
  [541] = 1,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
  [545] = 1,
    ACTIONS(201), 1,
      aux_sym__line_token2,
  [549] = 1,
    ACTIONS(203), 1,
      anon_sym_COLON,
  [553] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [557] = 1,
    ACTIONS(177), 1,
      aux_sym__line_token1,
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
      aux_sym__line_token2,
  [577] = 1,
    ACTIONS(215), 1,
      aux_sym__line_token2,
  [581] = 1,
    ACTIONS(169), 1,
      anon_sym_COLON,
  [585] = 1,
    ACTIONS(217), 1,
      aux_sym_nunjucks_comment_token1,
  [589] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACE_RBRACE,
  [593] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE_RBRACE,
  [597] = 1,
    ACTIONS(223), 1,
      sym__expr_content,
  [601] = 1,
    ACTIONS(225), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 195,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 227,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 278,
  [SMALL_STATE(13)] = 295,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 356,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 412,
  [SMALL_STATE(22)] = 426,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 441,
  [SMALL_STATE(25)] = 448,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 467,
  [SMALL_STATE(29)] = 474,
  [SMALL_STATE(30)] = 481,
  [SMALL_STATE(31)] = 486,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 501,
  [SMALL_STATE(35)] = 505,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 513,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 521,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 533,
  [SMALL_STATE(43)] = 537,
  [SMALL_STATE(44)] = 541,
  [SMALL_STATE(45)] = 545,
  [SMALL_STATE(46)] = 549,
  [SMALL_STATE(47)] = 553,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 561,
  [SMALL_STATE(50)] = 565,
  [SMALL_STATE(51)] = 569,
  [SMALL_STATE(52)] = 573,
  [SMALL_STATE(53)] = 577,
  [SMALL_STATE(54)] = 581,
  [SMALL_STATE(55)] = 585,
  [SMALL_STATE(56)] = 589,
  [SMALL_STATE(57)] = 593,
  [SMALL_STATE(58)] = 597,
  [SMALL_STATE(59)] = 601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(32),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(58),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(59),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(20),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1, .dynamic_precedence = 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_boolean, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
