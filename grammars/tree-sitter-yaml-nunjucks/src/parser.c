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
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  [62] = 62,
  [63] = 63,
  [64] = 45,
  [65] = 45,
  [66] = 46,
  [67] = 46,
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
      if (eof) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '-') ADVANCE(443);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'Y') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'y') ADVANCE(64);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == 'F') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(242);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == 'T') ADVANCE(243);
      if (lookahead == 'Y') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(252);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(268);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '{') ADVANCE(158);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(442);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(446);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead != 0) ADVANCE(448);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(174);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(367);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == 'F') ADVANCE(328);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(332);
      if (lookahead == 'T') ADVANCE(336);
      if (lookahead == 'Y') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead == 'y') ADVANCE(345);
      if (lookahead == '{') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!sym_yaml_plain_scalar_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(448);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '%') ADVANCE(175);
      if (lookahead == '{') ADVANCE(223);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '{') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(452);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(363);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(36);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(68);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'J') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(131);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(282);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 22:
      if (lookahead == 'F') ADVANCE(321);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(300);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'U') ADVANCE(19);
      END_STATE();
    case 31:
      if (lookahead == 'V') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'Z') ADVANCE(138);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(363);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(315);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(309);
      END_STATE();
    case 79:
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 81:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 92:
      if (lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(149);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == 'q') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(363);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 157:
      if (lookahead == 'z') ADVANCE(39);
      END_STATE();
    case 158:
      if (lookahead == '{') ADVANCE(223);
      END_STATE();
    case 159:
      if (lookahead == '}') ADVANCE(176);
      END_STATE();
    case 160:
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 161:
      if (lookahead == '}') ADVANCE(226);
      END_STATE();
    case 162:
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(449);
      END_STATE();
    case 166:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(222);
      END_STATE();
    case 167:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(227);
      END_STATE();
    case 168:
      if (eof) ADVANCE(169);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(445);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(450);
      if (lookahead == '-') ADVANCE(444);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(269);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'b') ADVANCE(201);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'k') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(219);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(212);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(190);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(166);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(448);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(452);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(226);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '.') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'A') ADVANCE(241);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(240);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(246);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(442);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_Yes);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_Yes);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Yes);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_No);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_No);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_NO);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_Off);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_Off);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Off);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_OFF);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_OFF);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(268);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_OFF);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == '.') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '!') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '.') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_yaml_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'A') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(337);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'F') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'L') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'S') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(347);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (lookahead == ':') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(359);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(361);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (lookahead == '!') ADVANCE(442);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(365);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead == 'B') ADVANCE(374);
      if (lookahead == 'E') ADVANCE(427);
      if (lookahead == 'F') ADVANCE(406);
      if (lookahead == 'G') ADVANCE(389);
      if (lookahead == 'I') ADVANCE(396);
      if (lookahead == 'J') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(422);
      if (lookahead == 'O') ADVANCE(428);
      if (lookahead == 'R') ADVANCE(391);
      if (lookahead == 'S') ADVANCE(392);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead == 'O') ADVANCE(429);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(407);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(415);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(375);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(380);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(432);
      if (lookahead == 't') ADVANCE(434);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(433);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(425);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(382);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(419);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(437);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(408);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(400);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(434);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(409);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(370);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(390);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(405);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(435);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(397);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(381);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(383);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'm') ADVANCE(426);
      if (lookahead == 'n') ADVANCE(384);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(377);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(441);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(414);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(434);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(424);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(431);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(420);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(432);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(439);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(403);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(440);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(394);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(385);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(371);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(369);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(386);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(398);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(401);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(388);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(402);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(430);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(416);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(423);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(438);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(399);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(436);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(395);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(393);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(364);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(368);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(372);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(404);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(379);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(387);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(390);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(378);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 168},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 168},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 168},
  [7] = {.lex_state = 168},
  [8] = {.lex_state = 168},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 181},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 182},
  [26] = {.lex_state = 182},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 230},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 168},
  [46] = {.lex_state = 162},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 168},
  [65] = {.lex_state = 168},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
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
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_Yes] = ACTIONS(1),
    [anon_sym_No] = ACTIONS(1),
    [anon_sym_YES] = ACTIONS(1),
    [anon_sym_NO] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_Off] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_OFF] = ACTIONS(1),
    [sym_yaml_number] = ACTIONS(1),
    [sym_cf_tag] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_yaml_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(59),
    [sym__line] = STATE(4),
    [sym_nunjucks_statement] = STATE(60),
    [sym_nunjucks_comment] = STATE(60),
    [sym_yaml_pair] = STATE(60),
    [sym_yaml_key] = STATE(39),
    [sym_yaml_list_item] = STATE(60),
    [sym_yaml_string] = STATE(63),
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
    [sym_yaml_pair] = STATE(43),
    [sym_yaml_key] = STATE(39),
    [sym_yaml_value] = STATE(43),
    [sym_yaml_boolean] = STATE(40),
    [sym_cf_intrinsic] = STATE(41),
    [sym_yaml_mixed] = STATE(44),
    [sym_yaml_string] = STATE(35),
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
    STATE(40), 1,
      sym_yaml_boolean,
    STATE(44), 1,
      sym_yaml_mixed,
    STATE(55), 1,
      sym_yaml_value,
    STATE(41), 2,
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
    STATE(39), 1,
      sym_yaml_key,
    STATE(63), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(60), 4,
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
    STATE(39), 1,
      sym_yaml_key,
    STATE(63), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(60), 4,
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
    STATE(39), 1,
      sym_yaml_key,
    STATE(63), 1,
      sym_yaml_string,
    STATE(52), 4,
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
    STATE(58), 2,
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
  [346] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      aux_sym__line_token2,
    ACTIONS(137), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [360] = 2,
    ACTIONS(141), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(139), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [370] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(137), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(143), 1,
      aux_sym__line_token2,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [384] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(143), 1,
      aux_sym__line_token2,
    ACTIONS(145), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
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
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [426] = 4,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(163), 1,
      sym_nunjucks_keyword,
    ACTIONS(165), 1,
      sym__statement_rest,
  [439] = 4,
    ACTIONS(167), 1,
      aux_sym__line_token1,
    ACTIONS(169), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(171), 1,
      sym_nunjucks_keyword,
    ACTIONS(173), 1,
      sym__statement_rest,
  [452] = 2,
    ACTIONS(139), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(141), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [461] = 3,
    ACTIONS(159), 1,
      aux_sym__line_token1,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(165), 1,
      sym__statement_rest,
  [471] = 3,
    ACTIONS(175), 1,
      aux_sym__line_token1,
    ACTIONS(177), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(179), 1,
      sym__statement_rest,
  [481] = 1,
    ACTIONS(139), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [487] = 2,
    ACTIONS(161), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(181), 1,
      aux_sym__line_token1,
  [494] = 1,
    ACTIONS(183), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [499] = 2,
    ACTIONS(185), 1,
      aux_sym__line_token1,
    ACTIONS(187), 1,
      aux_sym__line_token2,
  [506] = 2,
    ACTIONS(177), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(189), 1,
      aux_sym__line_token1,
  [513] = 2,
    ACTIONS(191), 1,
      aux_sym__line_token1,
    ACTIONS(193), 1,
      anon_sym_PERCENT_RBRACE,
  [520] = 1,
    ACTIONS(195), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [525] = 2,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    ACTIONS(199), 1,
      aux_sym__line_token2,
  [532] = 2,
    ACTIONS(155), 1,
      aux_sym__line_token2,
    ACTIONS(201), 1,
      anon_sym_COLON,
  [539] = 2,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(203), 1,
      aux_sym__line_token1,
  [546] = 2,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 1,
      sym_nunjucks_expression,
  [553] = 1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [557] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [561] = 1,
    ACTIONS(209), 1,
      aux_sym__line_token2,
  [565] = 1,
    ACTIONS(155), 1,
      aux_sym__line_token2,
  [569] = 1,
    ACTIONS(211), 1,
      aux_sym_nunjucks_comment_token1,
  [573] = 1,
    ACTIONS(213), 1,
      aux_sym__line_token2,
  [577] = 1,
    ACTIONS(155), 1,
      aux_sym__line_token2,
  [581] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE_RBRACE,
  [585] = 1,
    ACTIONS(217), 1,
      sym__expr_content,
  [589] = 1,
    ACTIONS(177), 1,
      anon_sym_PERCENT_RBRACE,
  [593] = 1,
    ACTIONS(193), 1,
      anon_sym_PERCENT_RBRACE,
  [597] = 1,
    ACTIONS(219), 1,
      aux_sym__line_token2,
  [601] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [605] = 1,
    ACTIONS(223), 1,
      aux_sym__line_token2,
  [609] = 1,
    ACTIONS(225), 1,
      aux_sym__line_token2,
  [613] = 1,
    ACTIONS(227), 1,
      aux_sym__line_token2,
  [617] = 1,
    ACTIONS(203), 1,
      aux_sym__line_token1,
  [621] = 1,
    ACTIONS(229), 1,
      aux_sym__line_token2,
  [625] = 1,
    ACTIONS(231), 1,
      aux_sym__line_token2,
  [629] = 1,
    ACTIONS(233), 1,
      anon_sym_PERCENT_RBRACE,
  [633] = 1,
    ACTIONS(235), 1,
      aux_sym__line_token2,
  [637] = 1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
  [641] = 1,
    ACTIONS(239), 1,
      aux_sym__line_token2,
  [645] = 1,
    ACTIONS(241), 1,
      aux_sym__line_token2,
  [649] = 1,
    ACTIONS(243), 1,
      aux_sym__line_token2,
  [653] = 1,
    ACTIONS(201), 1,
      anon_sym_COLON,
  [657] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACE_RBRACE,
  [661] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACE_RBRACE,
  [665] = 1,
    ACTIONS(249), 1,
      sym__expr_content,
  [669] = 1,
    ACTIONS(251), 1,
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
  [SMALL_STATE(17)] = 360,
  [SMALL_STATE(18)] = 370,
  [SMALL_STATE(19)] = 384,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 412,
  [SMALL_STATE(22)] = 426,
  [SMALL_STATE(23)] = 439,
  [SMALL_STATE(24)] = 452,
  [SMALL_STATE(25)] = 461,
  [SMALL_STATE(26)] = 471,
  [SMALL_STATE(27)] = 481,
  [SMALL_STATE(28)] = 487,
  [SMALL_STATE(29)] = 494,
  [SMALL_STATE(30)] = 499,
  [SMALL_STATE(31)] = 506,
  [SMALL_STATE(32)] = 513,
  [SMALL_STATE(33)] = 520,
  [SMALL_STATE(34)] = 525,
  [SMALL_STATE(35)] = 532,
  [SMALL_STATE(36)] = 539,
  [SMALL_STATE(37)] = 546,
  [SMALL_STATE(38)] = 553,
  [SMALL_STATE(39)] = 557,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 581,
  [SMALL_STATE(46)] = 585,
  [SMALL_STATE(47)] = 589,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 597,
  [SMALL_STATE(50)] = 601,
  [SMALL_STATE(51)] = 605,
  [SMALL_STATE(52)] = 609,
  [SMALL_STATE(53)] = 613,
  [SMALL_STATE(54)] = 617,
  [SMALL_STATE(55)] = 621,
  [SMALL_STATE(56)] = 625,
  [SMALL_STATE(57)] = 629,
  [SMALL_STATE(58)] = 633,
  [SMALL_STATE(59)] = 637,
  [SMALL_STATE(60)] = 641,
  [SMALL_STATE(61)] = 645,
  [SMALL_STATE(62)] = 649,
  [SMALL_STATE(63)] = 653,
  [SMALL_STATE(64)] = 657,
  [SMALL_STATE(65)] = 661,
  [SMALL_STATE(66)] = 665,
  [SMALL_STATE(67)] = 669,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(66),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(67),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(20),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1, .dynamic_precedence = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_boolean, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [237] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
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
