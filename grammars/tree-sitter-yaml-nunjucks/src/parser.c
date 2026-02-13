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
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  sym_cf_tag = 35,
  aux_sym_cf_intrinsic_token1 = 36,
  anon_sym_DASH = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_yaml_string_token1 = 39,
  aux_sym_yaml_string_token2 = 40,
  anon_sym_SQUOTE = 41,
  aux_sym_yaml_string_token3 = 42,
  sym_comment = 43,
  sym_document = 44,
  sym__line = 45,
  sym_nunjucks_statement = 46,
  sym_nunjucks_expression = 47,
  sym_nunjucks_comment = 48,
  sym_yaml_pair = 49,
  sym_yaml_key = 50,
  sym_yaml_value = 51,
  sym_yaml_boolean = 52,
  sym_yaml_plain_scalar = 53,
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
  [sym_yaml_plain_scalar] = "yaml_plain_scalar",
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
  [sym_yaml_plain_scalar] = sym_yaml_plain_scalar,
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
  [sym_yaml_plain_scalar] = {
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
  [64] = 64,
  [65] = 65,
  [66] = 46,
  [67] = 46,
  [68] = 47,
  [69] = 47,
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
      if (eof) ADVANCE(167);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(14);
      if (lookahead == 'N') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(26);
      if (lookahead == 'Y') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == 'y') ADVANCE(63);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(309);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(233);
      if (lookahead == 'N') ADVANCE(240);
      if (lookahead == 'O') ADVANCE(237);
      if (lookahead == 'T') ADVANCE(241);
      if (lookahead == 'Y') ADVANCE(234);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(253);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == 'y') ADVANCE(250);
      if (lookahead == '{') ADVANCE(157);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '{') ADVANCE(157);
      if (!aux_sym_cf_intrinsic_token1_character_set_1(lookahead)) ADVANCE(384);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(388);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '{') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(390);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '%') ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(226);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == '{') ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '{') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(394);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(305);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(75);
      if (lookahead == 'J') ADVANCE(117);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(66);
      if (lookahead == 'S') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(277);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(301);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(287);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'V') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'Z') ADVANCE(137);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(305);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 91:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(148);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(305);
      END_STATE();
    case 125:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'q') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(305);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 155:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 156:
      if (lookahead == 'z') ADVANCE(38);
      END_STATE();
    case 157:
      if (lookahead == '{') ADVANCE(221);
      END_STATE();
    case 158:
      if (lookahead == '}') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == '}') ADVANCE(174);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 160:
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 161:
      if (lookahead == '}') ADVANCE(165);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 163:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(391);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(387);
      if (lookahead == '#') ADVANCE(395);
      if (lookahead == '\'') ADVANCE(392);
      if (lookahead == '-') ADVANCE(386);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(266);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_nunjucks_keyword);
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(194);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'k') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'p') ADVANCE(210);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__statement_rest);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(390);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(394);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(165);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(224);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'A') ADVANCE(239);
      if (lookahead == 'a') ADVANCE(254);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(258);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(276);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(278);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'F') ADVANCE(238);
      if (lookahead == 'N') ADVANCE(300);
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == 'n') ADVANCE(296);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'F') ADVANCE(302);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'L') ADVANCE(243);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'O') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(286);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'R') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(262);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(288);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'S') ADVANCE(236);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'U') ADVANCE(235);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'a') ADVANCE(255);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(272);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(268);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(274);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(270);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'e') ADVANCE(259);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(298);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(294);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(292);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(260);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'l') ADVANCE(261);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'o') ADVANCE(282);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(263);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 's') ADVANCE(284);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 's') ADVANCE(280);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 's') ADVANCE(248);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 's') ADVANCE(249);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(246);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (lookahead == 'u') ADVANCE(247);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Yes);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Yes);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_No);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_YES);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_YES);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_NO);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_NO);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Off);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Off);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_ON);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_OFF);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_OFF);
      if (lookahead == '!') ADVANCE(384);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(265);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_yaml_number);
      if (lookahead == '.') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_yaml_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '4') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == '6') ADVANCE(307);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(355);
      if (lookahead == 'B') ADVANCE(316);
      if (lookahead == 'E') ADVANCE(369);
      if (lookahead == 'F') ADVANCE(348);
      if (lookahead == 'G') ADVANCE(331);
      if (lookahead == 'I') ADVANCE(338);
      if (lookahead == 'J') ADVANCE(363);
      if (lookahead == 'N') ADVANCE(364);
      if (lookahead == 'O') ADVANCE(370);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == 'S') ADVANCE(334);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'A') ADVANCE(315);
      if (lookahead == 'O') ADVANCE(371);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'B') ADVANCE(349);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'I') ADVANCE(357);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'M') ADVANCE(317);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'V') ADVANCE(322);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'Z') ADVANCE(374);
      if (lookahead == 't') ADVANCE(376);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(375);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(367);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(361);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(379);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'a') ADVANCE(353);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'b') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(342);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(376);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'c') ADVANCE(351);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(312);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(332);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'd') ADVANCE(347);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(377);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == 'u') ADVANCE(323);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(308);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(325);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(326);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'f') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'g') ADVANCE(319);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'h') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(383);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(356);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(376);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(366);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(360);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == 'o') ADVANCE(373);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'i') ADVANCE(362);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(374);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(381);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(345);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(382);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'l') ADVANCE(336);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(327);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(313);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(311);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(340);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(343);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'n') ADVANCE(330);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(344);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(372);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'o') ADVANCE(358);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'p') ADVANCE(365);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'q') ADVANCE(380);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(341);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'r') ADVANCE(337);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 's') ADVANCE(335);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(306);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(310);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(314);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 't') ADVANCE(346);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(321);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(329);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'u') ADVANCE(332);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (lookahead == 'z') ADVANCE(320);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_cf_intrinsic_token1);
      if (!aux_sym_cf_intrinsic_token1_character_set_2(lookahead)) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(266);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(390);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(395);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 166},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 166},
  [6] = {.lex_state = 166},
  [7] = {.lex_state = 166},
  [8] = {.lex_state = 166},
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
  [22] = {.lex_state = 179},
  [23] = {.lex_state = 179},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 180},
  [26] = {.lex_state = 180},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 228},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 166},
  [47] = {.lex_state = 161},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 166},
  [67] = {.lex_state = 166},
  [68] = {.lex_state = 161},
  [69] = {.lex_state = 161},
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
    [sym_document] = STATE(61),
    [sym__line] = STATE(4),
    [sym_nunjucks_statement] = STATE(62),
    [sym_nunjucks_comment] = STATE(62),
    [sym_yaml_pair] = STATE(62),
    [sym_yaml_key] = STATE(40),
    [sym_yaml_list_item] = STATE(62),
    [sym_yaml_string] = STATE(65),
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
    [sym_yaml_key] = STATE(40),
    [sym_yaml_value] = STATE(43),
    [sym_yaml_boolean] = STATE(41),
    [sym_yaml_plain_scalar] = STATE(44),
    [sym_cf_intrinsic] = STATE(44),
    [sym_yaml_mixed] = STATE(45),
    [sym_yaml_string] = STATE(38),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(25),
    [aux_sym_yaml_key_token1] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_TRUE] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [anon_sym_yes] = ACTIONS(29),
    [anon_sym_no] = ACTIONS(29),
    [anon_sym_Yes] = ACTIONS(29),
    [anon_sym_No] = ACTIONS(29),
    [anon_sym_YES] = ACTIONS(29),
    [anon_sym_NO] = ACTIONS(29),
    [anon_sym_on] = ACTIONS(29),
    [anon_sym_off] = ACTIONS(29),
    [anon_sym_On] = ACTIONS(29),
    [anon_sym_Off] = ACTIONS(29),
    [anon_sym_ON] = ACTIONS(29),
    [anon_sym_OFF] = ACTIONS(29),
    [sym_yaml_number] = ACTIONS(31),
    [sym_cf_tag] = ACTIONS(33),
    [aux_sym_cf_intrinsic_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
  },
  [3] = {
    [sym_nunjucks_expression] = STATE(21),
    [sym_yaml_value] = STATE(57),
    [sym_yaml_boolean] = STATE(41),
    [sym_yaml_plain_scalar] = STATE(44),
    [sym_cf_intrinsic] = STATE(44),
    [sym_yaml_mixed] = STATE(45),
    [sym_yaml_string] = STATE(44),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(25),
    [aux_sym_yaml_key_token1] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_TRUE] = ACTIONS(29),
    [anon_sym_FALSE] = ACTIONS(29),
    [anon_sym_yes] = ACTIONS(29),
    [anon_sym_no] = ACTIONS(29),
    [anon_sym_Yes] = ACTIONS(29),
    [anon_sym_No] = ACTIONS(29),
    [anon_sym_YES] = ACTIONS(29),
    [anon_sym_NO] = ACTIONS(29),
    [anon_sym_on] = ACTIONS(29),
    [anon_sym_off] = ACTIONS(29),
    [anon_sym_On] = ACTIONS(29),
    [anon_sym_Off] = ACTIONS(29),
    [anon_sym_ON] = ACTIONS(29),
    [anon_sym_OFF] = ACTIONS(29),
    [sym_yaml_number] = ACTIONS(31),
    [sym_cf_tag] = ACTIONS(39),
    [aux_sym_cf_intrinsic_token1] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym_blank_line,
    STATE(40), 1,
      sym_yaml_key,
    STATE(65), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(62), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [50] = 15,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym__line_token1,
    ACTIONS(50), 1,
      sym_blank_line,
    ACTIONS(53), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(56), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(59), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(62), 1,
      sym_cf_tag,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(74), 1,
      sym_comment,
    STATE(40), 1,
      sym_yaml_key,
    STATE(65), 1,
      sym_yaml_string,
    STATE(5), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(62), 4,
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
    ACTIONS(77), 1,
      sym_comment,
    STATE(40), 1,
      sym_yaml_key,
    STATE(65), 1,
      sym_yaml_string,
    STATE(53), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [137] = 2,
    ACTIONS(81), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [153] = 2,
    ACTIONS(85), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [169] = 5,
    ACTIONS(87), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(95), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [186] = 5,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(98), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(100), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(60), 2,
      sym_nunjucks_expression,
      sym_yaml_string,
  [203] = 5,
    ACTIONS(102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(104), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_yaml_string_token3,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [220] = 5,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(114), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [237] = 5,
    ACTIONS(116), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(119), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(122), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [254] = 5,
    ACTIONS(110), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(131), 1,
      aux_sym_yaml_string_token2,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [271] = 5,
    ACTIONS(102), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(135), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [288] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(137), 1,
      aux_sym__line_token2,
    ACTIONS(139), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [302] = 2,
    ACTIONS(143), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(141), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [312] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(139), 1,
      aux_sym_cf_intrinsic_token1,
    ACTIONS(145), 1,
      aux_sym__line_token2,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [326] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(145), 1,
      aux_sym__line_token2,
    ACTIONS(147), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(16), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [340] = 4,
    ACTIONS(149), 1,
      aux_sym__line_token2,
    ACTIONS(151), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(154), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(20), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [354] = 4,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 1,
      aux_sym__line_token2,
    ACTIONS(159), 1,
      aux_sym_cf_intrinsic_token1,
    STATE(18), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [368] = 4,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    ACTIONS(163), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(165), 1,
      sym_nunjucks_keyword,
    ACTIONS(167), 1,
      sym__statement_rest,
  [381] = 4,
    ACTIONS(169), 1,
      aux_sym__line_token1,
    ACTIONS(171), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(173), 1,
      sym_nunjucks_keyword,
    ACTIONS(175), 1,
      sym__statement_rest,
  [394] = 2,
    ACTIONS(141), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(143), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
  [403] = 3,
    ACTIONS(161), 1,
      aux_sym__line_token1,
    ACTIONS(163), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(167), 1,
      sym__statement_rest,
  [413] = 3,
    ACTIONS(177), 1,
      aux_sym__line_token1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(181), 1,
      sym__statement_rest,
  [423] = 1,
    ACTIONS(141), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_cf_intrinsic_token1,
  [429] = 2,
    ACTIONS(163), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(183), 1,
      aux_sym__line_token1,
  [436] = 1,
    ACTIONS(185), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [441] = 2,
    ACTIONS(187), 1,
      aux_sym__line_token1,
    ACTIONS(189), 1,
      aux_sym__line_token2,
  [448] = 2,
    ACTIONS(179), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(191), 1,
      aux_sym__line_token1,
  [455] = 2,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    ACTIONS(195), 1,
      anon_sym_PERCENT_RBRACE,
  [462] = 2,
    ACTIONS(197), 1,
      aux_sym__line_token2,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [469] = 1,
    ACTIONS(201), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [474] = 2,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    ACTIONS(205), 1,
      aux_sym__line_token2,
  [481] = 2,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(207), 1,
      aux_sym__line_token1,
  [488] = 2,
    ACTIONS(25), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(19), 1,
      sym_nunjucks_expression,
  [495] = 2,
    ACTIONS(157), 1,
      aux_sym__line_token2,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [502] = 1,
    ACTIONS(195), 1,
      anon_sym_PERCENT_RBRACE,
  [506] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [510] = 1,
    ACTIONS(211), 1,
      aux_sym__line_token2,
  [514] = 1,
    ACTIONS(213), 1,
      aux_sym_nunjucks_comment_token1,
  [518] = 1,
    ACTIONS(215), 1,
      aux_sym__line_token2,
  [522] = 1,
    ACTIONS(157), 1,
      aux_sym__line_token2,
  [526] = 1,
    ACTIONS(157), 1,
      aux_sym__line_token2,
  [530] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE_RBRACE,
  [534] = 1,
    ACTIONS(219), 1,
      sym__expr_content,
  [538] = 1,
    ACTIONS(221), 1,
      aux_sym__line_token2,
  [542] = 1,
    ACTIONS(179), 1,
      anon_sym_PERCENT_RBRACE,
  [546] = 1,
    ACTIONS(223), 1,
      aux_sym__line_token2,
  [550] = 1,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
  [554] = 1,
    ACTIONS(227), 1,
      aux_sym__line_token2,
  [558] = 1,
    ACTIONS(229), 1,
      aux_sym__line_token2,
  [562] = 1,
    ACTIONS(231), 1,
      aux_sym__line_token2,
  [566] = 1,
    ACTIONS(197), 1,
      aux_sym__line_token2,
  [570] = 1,
    ACTIONS(207), 1,
      aux_sym__line_token1,
  [574] = 1,
    ACTIONS(233), 1,
      aux_sym__line_token2,
  [578] = 1,
    ACTIONS(235), 1,
      aux_sym__line_token2,
  [582] = 1,
    ACTIONS(237), 1,
      anon_sym_PERCENT_RBRACE,
  [586] = 1,
    ACTIONS(239), 1,
      aux_sym__line_token2,
  [590] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
  [594] = 1,
    ACTIONS(243), 1,
      aux_sym__line_token2,
  [598] = 1,
    ACTIONS(245), 1,
      aux_sym__line_token2,
  [602] = 1,
    ACTIONS(247), 1,
      aux_sym__line_token2,
  [606] = 1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [610] = 1,
    ACTIONS(249), 1,
      anon_sym_RBRACE_RBRACE,
  [614] = 1,
    ACTIONS(251), 1,
      anon_sym_RBRACE_RBRACE,
  [618] = 1,
    ACTIONS(253), 1,
      sym__expr_content,
  [622] = 1,
    ACTIONS(255), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 203,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 254,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 288,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 326,
  [SMALL_STATE(20)] = 340,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 368,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 403,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 429,
  [SMALL_STATE(29)] = 436,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 448,
  [SMALL_STATE(32)] = 455,
  [SMALL_STATE(33)] = 462,
  [SMALL_STATE(34)] = 469,
  [SMALL_STATE(35)] = 474,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 495,
  [SMALL_STATE(39)] = 502,
  [SMALL_STATE(40)] = 506,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 514,
  [SMALL_STATE(43)] = 518,
  [SMALL_STATE(44)] = 522,
  [SMALL_STATE(45)] = 526,
  [SMALL_STATE(46)] = 530,
  [SMALL_STATE(47)] = 534,
  [SMALL_STATE(48)] = 538,
  [SMALL_STATE(49)] = 542,
  [SMALL_STATE(50)] = 546,
  [SMALL_STATE(51)] = 550,
  [SMALL_STATE(52)] = 554,
  [SMALL_STATE(53)] = 558,
  [SMALL_STATE(54)] = 562,
  [SMALL_STATE(55)] = 566,
  [SMALL_STATE(56)] = 570,
  [SMALL_STATE(57)] = 574,
  [SMALL_STATE(58)] = 578,
  [SMALL_STATE(59)] = 582,
  [SMALL_STATE(60)] = 586,
  [SMALL_STATE(61)] = 590,
  [SMALL_STATE(62)] = 594,
  [SMALL_STATE(63)] = 598,
  [SMALL_STATE(64)] = 602,
  [SMALL_STATE(65)] = 606,
  [SMALL_STATE(66)] = 610,
  [SMALL_STATE(67)] = 614,
  [SMALL_STATE(68)] = 618,
  [SMALL_STATE(69)] = 622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(47),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(68),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(69),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_plain_scalar, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1, .dynamic_precedence = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_boolean, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [241] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
