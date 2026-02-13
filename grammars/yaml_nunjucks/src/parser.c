#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__line_token1 = 1,
  aux_sym__line_token2 = 2,
  sym_blank_line = 3,
  anon_sym_LBRACE_PERCENT = 4,
  aux_sym_nunjucks_statement_token1 = 5,
  anon_sym_PERCENT_RBRACE = 6,
  anon_sym_LBRACE_LBRACE = 7,
  anon_sym_RBRACE_RBRACE = 8,
  sym__expr_content = 9,
  anon_sym_LBRACE_POUND = 10,
  aux_sym_nunjucks_comment_token1 = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COLON = 13,
  aux_sym_yaml_key_token1 = 14,
  aux_sym_yaml_value_token1 = 15,
  aux_sym_yaml_mixed_token1 = 16,
  anon_sym_DASH = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_yaml_string_token1 = 19,
  aux_sym_yaml_string_token2 = 20,
  anon_sym_SQUOTE = 21,
  aux_sym_yaml_string_token3 = 22,
  sym_comment = 23,
  sym_document = 24,
  sym__line = 25,
  sym_nunjucks_statement = 26,
  sym_nunjucks_expression = 27,
  sym_nunjucks_comment = 28,
  sym_yaml_pair = 29,
  sym_yaml_key = 30,
  sym_yaml_value = 31,
  sym_yaml_mixed = 32,
  sym_yaml_list_item = 33,
  sym_yaml_string = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_yaml_mixed_repeat1 = 36,
  aux_sym_yaml_string_repeat1 = 37,
  aux_sym_yaml_string_repeat2 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_blank_line] = "blank_line",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_nunjucks_statement_token1] = "nunjucks_statement_token1",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__expr_content] = "_expr_content",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nunjucks_comment_token1] = "nunjucks_comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_yaml_key_token1] = "yaml_key_token1",
  [aux_sym_yaml_value_token1] = "yaml_value_token1",
  [aux_sym_yaml_mixed_token1] = "yaml_mixed_token1",
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
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__expr_content] = sym__expr_content,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nunjucks_comment_token1] = aux_sym_nunjucks_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_yaml_key_token1] = aux_sym_yaml_key_token1,
  [aux_sym_yaml_value_token1] = aux_sym_yaml_value_token1,
  [aux_sym_yaml_mixed_token1] = aux_sym_yaml_mixed_token1,
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
  [aux_sym_yaml_mixed_token1] = {
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
  [20] = 19,
  [21] = 19,
  [22] = 22,
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
  [42] = 31,
  [43] = 31,
  [44] = 28,
  [45] = 28,
};

static inline bool aux_sym_yaml_key_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '#')))
    : (c <= '\'' || (c < '['
      ? (c < ':'
        ? c == ','
        : c <= ':')
      : (c <= '[' || (c < '{'
        ? c == ']'
        : c <= '{')))));
}

static inline bool aux_sym_yaml_key_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_yaml_value_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_yaml_mixed_token1_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= ' ' || (c >= '"' && c <= '#')))
    : (c <= '\'' || (c < ']'
      ? (c < '['
        ? c == ','
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '%') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(11);
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '{') ADVANCE(10);
      if (!aux_sym_yaml_mixed_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '{') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(24);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(38);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (lookahead == '}') ADVANCE(25);
      if (!aux_sym_yaml_key_token1_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_yaml_key_token1);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_yaml_value_token1);
      if (!aux_sym_yaml_value_token1_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (!aux_sym_yaml_value_token1_character_set_1(lookahead)) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!aux_sym_yaml_key_token1_character_set_2(lookahead)) ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_yaml_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_yaml_string_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_yaml_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym__line_token2] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_yaml_key_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym__line] = STATE(3),
    [sym_nunjucks_statement] = STATE(37),
    [sym_nunjucks_comment] = STATE(37),
    [sym_yaml_pair] = STATE(37),
    [sym_yaml_key] = STATE(35),
    [sym_yaml_list_item] = STATE(37),
    [sym_yaml_string] = STATE(40),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_blank_line] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
    [aux_sym_yaml_key_token1] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym__line_token1,
    ACTIONS(28), 1,
      sym_blank_line,
    ACTIONS(31), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(34), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(40), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      sym_comment,
    STATE(35), 1,
      sym_yaml_key,
    STATE(40), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(37), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [47] = 14,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_blank_line,
    STATE(35), 1,
      sym_yaml_key,
    STATE(40), 1,
      sym_yaml_string,
    STATE(2), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(37), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [94] = 10,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      aux_sym_yaml_key_token1,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(56), 1,
      sym_comment,
    STATE(35), 1,
      sym_yaml_key,
    STATE(40), 1,
      sym_yaml_string,
    STATE(34), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [128] = 2,
    ACTIONS(60), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [143] = 2,
    ACTIONS(64), 3,
      aux_sym__line_token1,
      aux_sym_yaml_key_token1,
      anon_sym_DASH,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [158] = 8,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(70), 1,
      aux_sym_yaml_mixed_token1,
    STATE(16), 1,
      sym_nunjucks_expression,
    STATE(38), 1,
      sym_yaml_value,
    STATE(27), 2,
      sym_yaml_mixed,
      sym_yaml_string,
  [184] = 8,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(68), 1,
      aux_sym_yaml_value_token1,
    ACTIONS(70), 1,
      aux_sym_yaml_mixed_token1,
    STATE(16), 1,
      sym_nunjucks_expression,
    STATE(30), 1,
      sym_yaml_value,
    STATE(27), 2,
      sym_yaml_mixed,
      sym_yaml_string,
  [210] = 5,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(76), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [227] = 5,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(82), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(84), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [244] = 5,
    ACTIONS(80), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(90), 1,
      aux_sym_yaml_string_token2,
    STATE(10), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [261] = 5,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(94), 1,
      aux_sym_yaml_string_token3,
    STATE(9), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [278] = 5,
    ACTIONS(96), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(99), 1,
      aux_sym_yaml_string_token2,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      aux_sym_yaml_string_token3,
    STATE(13), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat2,
  [295] = 5,
    ACTIONS(107), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym_yaml_string_token1,
    ACTIONS(115), 1,
      aux_sym_yaml_string_token2,
    STATE(14), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_string_repeat1,
  [312] = 4,
    ACTIONS(118), 1,
      aux_sym__line_token2,
    ACTIONS(120), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      aux_sym_yaml_mixed_token1,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [326] = 4,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(126), 1,
      aux_sym__line_token2,
    ACTIONS(128), 1,
      aux_sym_yaml_mixed_token1,
    STATE(17), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [340] = 4,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(130), 1,
      aux_sym__line_token2,
    ACTIONS(132), 1,
      aux_sym_yaml_mixed_token1,
    STATE(15), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [354] = 3,
    ACTIONS(66), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(128), 1,
      aux_sym_yaml_mixed_token1,
    STATE(17), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [365] = 2,
    ACTIONS(134), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token1,
    ACTIONS(136), 2,
      anon_sym_DQUOTE,
      aux_sym_yaml_string_token2,
  [374] = 2,
    ACTIONS(134), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_string_token3,
    ACTIONS(136), 2,
      aux_sym_yaml_string_token2,
      anon_sym_SQUOTE,
  [383] = 1,
    ACTIONS(136), 3,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_mixed_token1,
  [389] = 2,
    ACTIONS(138), 1,
      aux_sym__line_token1,
    ACTIONS(140), 1,
      aux_sym__line_token2,
  [396] = 1,
    ACTIONS(142), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [401] = 1,
    ACTIONS(144), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [406] = 2,
    ACTIONS(146), 1,
      aux_sym__line_token1,
    ACTIONS(148), 1,
      aux_sym__line_token2,
  [413] = 1,
    ACTIONS(150), 1,
      anon_sym_PERCENT_RBRACE,
  [417] = 1,
    ACTIONS(126), 1,
      aux_sym__line_token2,
  [421] = 1,
    ACTIONS(152), 1,
      sym__expr_content,
  [425] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [429] = 1,
    ACTIONS(156), 1,
      aux_sym__line_token2,
  [433] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACE_RBRACE,
  [437] = 1,
    ACTIONS(160), 1,
      aux_sym__line_token2,
  [441] = 1,
    ACTIONS(162), 1,
      aux_sym_nunjucks_statement_token1,
  [445] = 1,
    ACTIONS(164), 1,
      aux_sym__line_token2,
  [449] = 1,
    ACTIONS(166), 1,
      anon_sym_COLON,
  [453] = 1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [457] = 1,
    ACTIONS(170), 1,
      aux_sym__line_token2,
  [461] = 1,
    ACTIONS(172), 1,
      aux_sym__line_token2,
  [465] = 1,
    ACTIONS(174), 1,
      aux_sym__line_token2,
  [469] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [473] = 1,
    ACTIONS(178), 1,
      aux_sym_nunjucks_comment_token1,
  [477] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE_RBRACE,
  [481] = 1,
    ACTIONS(182), 1,
      anon_sym_RBRACE_RBRACE,
  [485] = 1,
    ACTIONS(184), 1,
      sym__expr_content,
  [489] = 1,
    ACTIONS(186), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 261,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 295,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 374,
  [SMALL_STATE(21)] = 383,
  [SMALL_STATE(22)] = 389,
  [SMALL_STATE(23)] = 396,
  [SMALL_STATE(24)] = 401,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 417,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 433,
  [SMALL_STATE(32)] = 437,
  [SMALL_STATE(33)] = 441,
  [SMALL_STATE(34)] = 445,
  [SMALL_STATE(35)] = 449,
  [SMALL_STATE(36)] = 453,
  [SMALL_STATE(37)] = 457,
  [SMALL_STATE(38)] = 461,
  [SMALL_STATE(39)] = 465,
  [SMALL_STATE(40)] = 469,
  [SMALL_STATE(41)] = 473,
  [SMALL_STATE(42)] = 477,
  [SMALL_STATE(43)] = 481,
  [SMALL_STATE(44)] = 485,
  [SMALL_STATE(45)] = 489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(44),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat2, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat2, 2), SHIFT_REPEAT(13),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(14),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_string_repeat1, 2), SHIFT_REPEAT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(45),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_string, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
