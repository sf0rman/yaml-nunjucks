#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 194
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
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
  anon_sym_if = 6,
  anon_sym_elif = 7,
  anon_sym_else = 8,
  anon_sym_endif = 9,
  anon_sym_for = 10,
  anon_sym_in = 11,
  anon_sym_endfor = 12,
  anon_sym_set = 13,
  anon_sym_block = 14,
  anon_sym_endblock = 15,
  anon_sym_macro = 16,
  anon_sym_endmacro = 17,
  anon_sym_call = 18,
  anon_sym_endcall = 19,
  anon_sym_filter = 20,
  anon_sym_endfilter = 21,
  anon_sym_raw = 22,
  anon_sym_endraw = 23,
  anon_sym_extends = 24,
  anon_sym_include = 25,
  anon_sym_import = 26,
  anon_sym_from = 27,
  anon_sym_with = 28,
  anon_sym_without = 29,
  anon_sym_context = 30,
  anon_sym_not = 31,
  anon_sym_and = 32,
  anon_sym_or = 33,
  anon_sym_is = 34,
  sym__statement_word = 35,
  anon_sym_LBRACE_LBRACE = 36,
  anon_sym_RBRACE_RBRACE = 37,
  sym__expr_content = 38,
  anon_sym_LBRACE_POUND = 39,
  aux_sym_nunjucks_comment_token1 = 40,
  anon_sym_RBRACE = 41,
  anon_sym_COLON = 42,
  sym_yaml_plain_key = 43,
  sym_yaml_block_scalar = 44,
  aux_sym_yaml_plain_scalar_token1 = 45,
  aux_sym_yaml_plain_scalar_token2 = 46,
  anon_sym_LBRACK = 47,
  aux_sym_yaml_flow_sequence_token1 = 48,
  aux_sym_yaml_flow_sequence_token2 = 49,
  anon_sym_RBRACK = 50,
  sym_yaml_flow_scalar = 51,
  anon_sym_LBRACE = 52,
  sym_yaml_flow_key = 53,
  sym_cf_tag = 54,
  anon_sym_DQUOTE = 55,
  aux_sym_yaml_quoted_string_token1 = 56,
  aux_sym_yaml_quoted_string_token2 = 57,
  aux_sym_yaml_quoted_string_token3 = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_yaml_quoted_string_token4 = 60,
  anon_sym_DASH = 61,
  sym_comment = 62,
  sym_document = 63,
  sym__line = 64,
  sym_nunjucks_statement = 65,
  sym_nunjucks_keyword = 66,
  aux_sym__statement_rest = 67,
  sym_nunjucks_expression = 68,
  sym_nunjucks_comment = 69,
  sym_yaml_pair = 70,
  sym_yaml_key = 71,
  sym_yaml_value = 72,
  sym_yaml_plain_scalar = 73,
  sym_yaml_flow_sequence = 74,
  sym__flow_item = 75,
  sym_yaml_flow_mapping = 76,
  sym_yaml_flow_pair = 77,
  sym_cf_intrinsic = 78,
  sym__cf_value = 79,
  sym_yaml_quoted_string = 80,
  sym_yaml_list_item = 81,
  aux_sym_document_repeat1 = 82,
  aux_sym_yaml_plain_scalar_repeat1 = 83,
  aux_sym_yaml_flow_sequence_repeat1 = 84,
  aux_sym_yaml_flow_mapping_repeat1 = 85,
  aux_sym_yaml_quoted_string_repeat1 = 86,
  aux_sym_yaml_quoted_string_repeat2 = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [sym_blank_line] = "blank_line",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_endfor] = "endfor",
  [anon_sym_set] = "set",
  [anon_sym_block] = "block",
  [anon_sym_endblock] = "endblock",
  [anon_sym_macro] = "macro",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_call] = "call",
  [anon_sym_endcall] = "endcall",
  [anon_sym_filter] = "filter",
  [anon_sym_endfilter] = "endfilter",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_extends] = "extends",
  [anon_sym_include] = "include",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_with] = "with",
  [anon_sym_without] = "without",
  [anon_sym_context] = "context",
  [anon_sym_not] = "not",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_is] = "is",
  [sym__statement_word] = "_statement_word",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym__expr_content] = "_expr_content",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nunjucks_comment_token1] = "nunjucks_comment_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_yaml_plain_key] = "yaml_plain_key",
  [sym_yaml_block_scalar] = "yaml_block_scalar",
  [aux_sym_yaml_plain_scalar_token1] = "yaml_plain_scalar_token1",
  [aux_sym_yaml_plain_scalar_token2] = "yaml_plain_scalar_token2",
  [anon_sym_LBRACK] = "[",
  [aux_sym_yaml_flow_sequence_token1] = "yaml_flow_sequence_token1",
  [aux_sym_yaml_flow_sequence_token2] = "yaml_flow_sequence_token2",
  [anon_sym_RBRACK] = "]",
  [sym_yaml_flow_scalar] = "yaml_flow_scalar",
  [anon_sym_LBRACE] = "{",
  [sym_yaml_flow_key] = "yaml_flow_key",
  [sym_cf_tag] = "cf_tag",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_yaml_quoted_string_token1] = "yaml_quoted_string_token1",
  [aux_sym_yaml_quoted_string_token2] = "yaml_quoted_string_token2",
  [aux_sym_yaml_quoted_string_token3] = "yaml_quoted_string_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_yaml_quoted_string_token4] = "yaml_quoted_string_token4",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__line] = "_line",
  [sym_nunjucks_statement] = "nunjucks_statement",
  [sym_nunjucks_keyword] = "nunjucks_keyword",
  [aux_sym__statement_rest] = "_statement_rest",
  [sym_nunjucks_expression] = "nunjucks_expression",
  [sym_nunjucks_comment] = "nunjucks_comment",
  [sym_yaml_pair] = "yaml_pair",
  [sym_yaml_key] = "yaml_key",
  [sym_yaml_value] = "yaml_value",
  [sym_yaml_plain_scalar] = "yaml_plain_scalar",
  [sym_yaml_flow_sequence] = "yaml_flow_sequence",
  [sym__flow_item] = "_flow_item",
  [sym_yaml_flow_mapping] = "yaml_flow_mapping",
  [sym_yaml_flow_pair] = "yaml_flow_pair",
  [sym_cf_intrinsic] = "cf_intrinsic",
  [sym__cf_value] = "_cf_value",
  [sym_yaml_quoted_string] = "yaml_quoted_string",
  [sym_yaml_list_item] = "yaml_list_item",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_yaml_plain_scalar_repeat1] = "yaml_plain_scalar_repeat1",
  [aux_sym_yaml_flow_sequence_repeat1] = "yaml_flow_sequence_repeat1",
  [aux_sym_yaml_flow_mapping_repeat1] = "yaml_flow_mapping_repeat1",
  [aux_sym_yaml_quoted_string_repeat1] = "yaml_quoted_string_repeat1",
  [aux_sym_yaml_quoted_string_repeat2] = "yaml_quoted_string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [aux_sym__line_token2] = aux_sym__line_token2,
  [sym_blank_line] = sym_blank_line,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_endcall] = anon_sym_endcall,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_endfilter] = anon_sym_endfilter,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_without] = anon_sym_without,
  [anon_sym_context] = anon_sym_context,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_is] = anon_sym_is,
  [sym__statement_word] = sym__statement_word,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym__expr_content] = sym__expr_content,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nunjucks_comment_token1] = aux_sym_nunjucks_comment_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_yaml_plain_key] = sym_yaml_plain_key,
  [sym_yaml_block_scalar] = sym_yaml_block_scalar,
  [aux_sym_yaml_plain_scalar_token1] = aux_sym_yaml_plain_scalar_token1,
  [aux_sym_yaml_plain_scalar_token2] = aux_sym_yaml_plain_scalar_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_yaml_flow_sequence_token1] = aux_sym_yaml_flow_sequence_token1,
  [aux_sym_yaml_flow_sequence_token2] = aux_sym_yaml_flow_sequence_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_yaml_flow_scalar] = sym_yaml_flow_scalar,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_yaml_flow_key] = sym_yaml_flow_key,
  [sym_cf_tag] = sym_cf_tag,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_yaml_quoted_string_token1] = aux_sym_yaml_quoted_string_token1,
  [aux_sym_yaml_quoted_string_token2] = aux_sym_yaml_quoted_string_token2,
  [aux_sym_yaml_quoted_string_token3] = aux_sym_yaml_quoted_string_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_yaml_quoted_string_token4] = aux_sym_yaml_quoted_string_token4,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__line] = sym__line,
  [sym_nunjucks_statement] = sym_nunjucks_statement,
  [sym_nunjucks_keyword] = sym_nunjucks_keyword,
  [aux_sym__statement_rest] = aux_sym__statement_rest,
  [sym_nunjucks_expression] = sym_nunjucks_expression,
  [sym_nunjucks_comment] = sym_nunjucks_comment,
  [sym_yaml_pair] = sym_yaml_pair,
  [sym_yaml_key] = sym_yaml_key,
  [sym_yaml_value] = sym_yaml_value,
  [sym_yaml_plain_scalar] = sym_yaml_plain_scalar,
  [sym_yaml_flow_sequence] = sym_yaml_flow_sequence,
  [sym__flow_item] = sym__flow_item,
  [sym_yaml_flow_mapping] = sym_yaml_flow_mapping,
  [sym_yaml_flow_pair] = sym_yaml_flow_pair,
  [sym_cf_intrinsic] = sym_cf_intrinsic,
  [sym__cf_value] = sym__cf_value,
  [sym_yaml_quoted_string] = sym_yaml_quoted_string,
  [sym_yaml_list_item] = sym_yaml_list_item,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_yaml_plain_scalar_repeat1] = aux_sym_yaml_plain_scalar_repeat1,
  [aux_sym_yaml_flow_sequence_repeat1] = aux_sym_yaml_flow_sequence_repeat1,
  [aux_sym_yaml_flow_mapping_repeat1] = aux_sym_yaml_flow_mapping_repeat1,
  [aux_sym_yaml_quoted_string_repeat1] = aux_sym_yaml_quoted_string_repeat1,
  [aux_sym_yaml_quoted_string_repeat2] = aux_sym_yaml_quoted_string_repeat2,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_without] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_context] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [sym__statement_word] = {
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
  [sym_yaml_plain_key] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_block_scalar] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_yaml_plain_scalar_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_plain_scalar_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_flow_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_flow_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_yaml_flow_scalar] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_yaml_flow_key] = {
    .visible = true,
    .named = true,
  },
  [sym_cf_tag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
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
  [sym_nunjucks_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_rest] = {
    .visible = false,
    .named = false,
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
  [sym_yaml_plain_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_flow_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__flow_item] = {
    .visible = false,
    .named = true,
  },
  [sym_yaml_flow_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_flow_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_cf_intrinsic] = {
    .visible = true,
    .named = true,
  },
  [sym__cf_value] = {
    .visible = false,
    .named = true,
  },
  [sym_yaml_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_list_item] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_plain_scalar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_flow_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_flow_mapping_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_repeat2] = {
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
  [8] = 7,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 11,
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
  [24] = 22,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 27,
  [32] = 25,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 23,
  [37] = 29,
  [38] = 35,
  [39] = 27,
  [40] = 28,
  [41] = 25,
  [42] = 42,
  [43] = 23,
  [44] = 42,
  [45] = 42,
  [46] = 29,
  [47] = 35,
  [48] = 42,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 50,
  [57] = 57,
  [58] = 58,
  [59] = 51,
  [60] = 49,
  [61] = 50,
  [62] = 58,
  [63] = 52,
  [64] = 58,
  [65] = 53,
  [66] = 52,
  [67] = 54,
  [68] = 55,
  [69] = 53,
  [70] = 49,
  [71] = 54,
  [72] = 57,
  [73] = 73,
  [74] = 57,
  [75] = 55,
  [76] = 51,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 42,
  [88] = 88,
  [89] = 42,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 103,
  [107] = 100,
  [108] = 98,
  [109] = 95,
  [110] = 94,
  [111] = 92,
  [112] = 91,
  [113] = 90,
  [114] = 96,
  [115] = 97,
  [116] = 102,
  [117] = 42,
  [118] = 101,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 96,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 97,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 92,
  [135] = 135,
  [136] = 94,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 102,
  [141] = 141,
  [142] = 101,
  [143] = 143,
  [144] = 95,
  [145] = 145,
  [146] = 141,
  [147] = 98,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 139,
  [153] = 143,
  [154] = 154,
  [155] = 90,
  [156] = 138,
  [157] = 154,
  [158] = 135,
  [159] = 133,
  [160] = 160,
  [161] = 161,
  [162] = 91,
  [163] = 103,
  [164] = 143,
  [165] = 149,
  [166] = 166,
  [167] = 167,
  [168] = 141,
  [169] = 100,
  [170] = 104,
  [171] = 171,
  [172] = 172,
  [173] = 149,
  [174] = 174,
  [175] = 175,
  [176] = 139,
  [177] = 177,
  [178] = 154,
  [179] = 179,
  [180] = 138,
  [181] = 181,
  [182] = 135,
  [183] = 133,
  [184] = 143,
  [185] = 143,
  [186] = 143,
  [187] = 143,
  [188] = 166,
  [189] = 166,
  [190] = 166,
  [191] = 166,
  [192] = 166,
  [193] = 166,
};

static inline bool sym_yaml_plain_key_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= '#' || (c < ','
        ? c == '\''
        : c <= ',')))
    : (c <= ':' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_yaml_plain_key_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '#' || (c < ','
        ? c == '\''
        : c <= ',')))
    : (c <= ':' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_yaml_plain_scalar_token1_character_set_1(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= '\'')))
    : (c <= ',' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool aux_sym_yaml_plain_scalar_token2_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= ' ' || c == '"'))
    : (c <= '\'' || (c < ']'
      ? (c < '['
        ? c == ','
        : c <= '[')
      : (c <= ']' || c == '}'))));
}

static inline bool aux_sym_yaml_plain_scalar_token2_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\t')
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : c <= '\'')))
    : (c <= ',' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_yaml_flow_key_character_set_1(int32_t c) {
  return (c < ','
    ? (c < '!'
      ? (c < '\n'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || c == '\''))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == ':'
        : c <= '[')
      : (c <= ']' || c == '{'))));
}

static inline bool sym_yaml_flow_key_character_set_2(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= ' ' || (c < '\''
        ? c == '"'
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
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (eof) ADVANCE(181);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(185);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(252);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(233);
      if (lookahead == '{') ADVANCE(174);
      if (!aux_sym_yaml_plain_scalar_token2_character_set_1(lookahead)) ADVANCE(234);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == ':') ADVANCE(232);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '{') ADVANCE(247);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(232);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(253);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '%') ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(217);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead == '{') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(257);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(250);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == 'G') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'J') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(123);
      if (lookahead == 'O') ADVANCE(135);
      if (lookahead == 'R') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(136);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'V') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'Z') ADVANCE(147);
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(250);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(148);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(250);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(250);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(210);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(196);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(197);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 133:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 134:
      if (lookahead == 'q') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 170:
      if (lookahead == 'w') ADVANCE(204);
      END_STATE();
    case 171:
      if (lookahead == 'w') ADVANCE(205);
      END_STATE();
    case 172:
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 173:
      if (lookahead == 'z') ADVANCE(32);
      END_STATE();
    case 174:
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 175:
      if (lookahead == '}') ADVANCE(219);
      END_STATE();
    case 176:
      if (lookahead == '}') ADVANCE(187);
      END_STATE();
    case 177:
      if (lookahead == '}') ADVANCE(179);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 178:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 179:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(220);
      END_STATE();
    case 180:
      if (eof) ADVANCE(181);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(226);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(185);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '\n') ADVANCE(185);
      if (!sym_yaml_plain_key_character_set_1(lookahead)) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_yaml_block_scalar);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_yaml_block_scalar);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_yaml_plain_scalar_token1);
      if (!aux_sym_yaml_plain_scalar_token1_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_yaml_plain_scalar_token2);
      if (lookahead == '\n') ADVANCE(184);
      if (!aux_sym_yaml_plain_scalar_token2_character_set_2(lookahead)) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_yaml_plain_scalar_token2);
      if (!aux_sym_yaml_plain_scalar_token1_character_set_1(lookahead)) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '{') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(234);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(234);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      if (!sym_yaml_flow_key_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_yaml_flow_scalar);
      if (!aux_sym_yaml_plain_scalar_token1_character_set_1(lookahead)) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_yaml_flow_key);
      if (!sym_yaml_flow_key_character_set_2(lookahead)) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token2);
      if (lookahead == '{') ADVANCE(218);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token3);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(229);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 180},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 180},
  [5] = {.lex_state = 180},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 236},
  [8] = {.lex_state = 236},
  [9] = {.lex_state = 236},
  [10] = {.lex_state = 180},
  [11] = {.lex_state = 236},
  [12] = {.lex_state = 236},
  [13] = {.lex_state = 236},
  [14] = {.lex_state = 236},
  [15] = {.lex_state = 236},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 180},
  [18] = {.lex_state = 180},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 237},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 239},
  [36] = {.lex_state = 239},
  [37] = {.lex_state = 237},
  [38] = {.lex_state = 237},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 239},
  [49] = {.lex_state = 242},
  [50] = {.lex_state = 238},
  [51] = {.lex_state = 240},
  [52] = {.lex_state = 238},
  [53] = {.lex_state = 238},
  [54] = {.lex_state = 240},
  [55] = {.lex_state = 240},
  [56] = {.lex_state = 238},
  [57] = {.lex_state = 238},
  [58] = {.lex_state = 240},
  [59] = {.lex_state = 240},
  [60] = {.lex_state = 242},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 240},
  [63] = {.lex_state = 238},
  [64] = {.lex_state = 240},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 238},
  [67] = {.lex_state = 240},
  [68] = {.lex_state = 240},
  [69] = {.lex_state = 238},
  [70] = {.lex_state = 242},
  [71] = {.lex_state = 240},
  [72] = {.lex_state = 238},
  [73] = {.lex_state = 240},
  [74] = {.lex_state = 238},
  [75] = {.lex_state = 240},
  [76] = {.lex_state = 240},
  [77] = {.lex_state = 238},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 242},
  [80] = {.lex_state = 242},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 242},
  [85] = {.lex_state = 238},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 240},
  [88] = {.lex_state = 240},
  [89] = {.lex_state = 238},
  [90] = {.lex_state = 240},
  [91] = {.lex_state = 240},
  [92] = {.lex_state = 240},
  [93] = {.lex_state = 240},
  [94] = {.lex_state = 240},
  [95] = {.lex_state = 240},
  [96] = {.lex_state = 238},
  [97] = {.lex_state = 238},
  [98] = {.lex_state = 240},
  [99] = {.lex_state = 240},
  [100] = {.lex_state = 240},
  [101] = {.lex_state = 238},
  [102] = {.lex_state = 238},
  [103] = {.lex_state = 240},
  [104] = {.lex_state = 240},
  [105] = {.lex_state = 238},
  [106] = {.lex_state = 238},
  [107] = {.lex_state = 238},
  [108] = {.lex_state = 238},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 240},
  [115] = {.lex_state = 240},
  [116] = {.lex_state = 240},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 240},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 242},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 180},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 5},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 180},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 180},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 223},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 180},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 177},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 180},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 180},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 180},
  [185] = {.lex_state = 180},
  [186] = {.lex_state = 180},
  [187] = {.lex_state = 180},
  [188] = {.lex_state = 177},
  [189] = {.lex_state = 177},
  [190] = {.lex_state = 177},
  [191] = {.lex_state = 177},
  [192] = {.lex_state = 177},
  [193] = {.lex_state = 177},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_yaml_plain_scalar_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_yaml_flow_sequence_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_cf_tag] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(175),
    [sym__line] = STATE(5),
    [sym_nunjucks_statement] = STATE(177),
    [sym_nunjucks_comment] = STATE(177),
    [sym_yaml_pair] = STATE(177),
    [sym_yaml_key] = STATE(174),
    [sym_yaml_quoted_string] = STATE(181),
    [sym_yaml_list_item] = STATE(177),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_blank_line] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
    [sym_yaml_plain_key] = ACTIONS(13),
    [sym_cf_tag] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(25), 1,
      aux_sym__line_token1,
    STATE(81), 1,
      sym_nunjucks_keyword,
    ACTIONS(29), 2,
      anon_sym_in,
      anon_sym_with,
    ACTIONS(27), 27,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_set,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_without,
      anon_sym_context,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_is,
  [40] = 3,
    STATE(82), 1,
      sym_nunjucks_keyword,
    ACTIONS(29), 2,
      anon_sym_in,
      anon_sym_with,
    ACTIONS(27), 27,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_endif,
      anon_sym_for,
      anon_sym_endfor,
      anon_sym_set,
      anon_sym_block,
      anon_sym_endblock,
      anon_sym_macro,
      anon_sym_endmacro,
      anon_sym_call,
      anon_sym_endcall,
      anon_sym_filter,
      anon_sym_endfilter,
      anon_sym_raw,
      anon_sym_endraw,
      anon_sym_extends,
      anon_sym_include,
      anon_sym_import,
      anon_sym_from,
      anon_sym_without,
      anon_sym_context,
      anon_sym_not,
      anon_sym_and,
      anon_sym_or,
      anon_sym_is,
  [77] = 15,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__line_token1,
    ACTIONS(36), 1,
      sym_blank_line,
    ACTIONS(39), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(42), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(45), 1,
      sym_yaml_plain_key,
    ACTIONS(48), 1,
      sym_cf_tag,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(60), 1,
      sym_comment,
    STATE(174), 1,
      sym_yaml_key,
    STATE(181), 1,
      sym_yaml_quoted_string,
    STATE(4), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(177), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [127] = 15,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      sym_yaml_plain_key,
    ACTIONS(15), 1,
      sym_cf_tag,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_blank_line,
    STATE(174), 1,
      sym_yaml_key,
    STATE(181), 1,
      sym_yaml_quoted_string,
    STATE(4), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(177), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [177] = 12,
    ACTIONS(15), 1,
      sym_yaml_plain_key,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym_yaml_block_scalar,
    ACTIONS(69), 1,
      aux_sym_yaml_plain_scalar_token1,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      sym_cf_tag,
    STATE(130), 1,
      sym_yaml_quoted_string,
    STATE(174), 1,
      sym_yaml_key,
    STATE(148), 2,
      sym_yaml_pair,
      sym_yaml_value,
    STATE(150), 4,
      sym_yaml_plain_scalar,
      sym_yaml_flow_sequence,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
  [218] = 10,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      sym_yaml_flow_scalar,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    STATE(50), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [254] = 10,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      sym_yaml_flow_scalar,
    STATE(61), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [290] = 10,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_yaml_flow_scalar,
    STATE(56), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [326] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      sym_yaml_plain_key,
    ACTIONS(15), 1,
      sym_cf_tag,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      sym_comment,
    STATE(174), 1,
      sym_yaml_key,
    STATE(181), 1,
      sym_yaml_quoted_string,
    STATE(172), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [363] = 9,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      sym_yaml_flow_scalar,
    STATE(52), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [396] = 9,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      sym_yaml_flow_scalar,
    STATE(63), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [429] = 9,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      sym_yaml_flow_scalar,
    STATE(66), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [462] = 8,
    ACTIONS(121), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_yaml_flow_scalar,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_cf_tag,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    STATE(93), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [492] = 8,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_cf_tag,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      sym_yaml_flow_scalar,
    STATE(85), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [522] = 9,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_yaml_block_scalar,
    ACTIONS(139), 1,
      aux_sym_yaml_plain_scalar_token1,
    ACTIONS(141), 1,
      sym_cf_tag,
    STATE(171), 1,
      sym_yaml_value,
    STATE(150), 5,
      sym_yaml_plain_scalar,
      sym_yaml_flow_sequence,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [554] = 2,
    ACTIONS(145), 3,
      aux_sym__line_token1,
      sym_yaml_plain_key,
      anon_sym_DASH,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [570] = 2,
    ACTIONS(149), 3,
      aux_sym__line_token1,
      sym_yaml_plain_key,
      anon_sym_DASH,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [586] = 6,
    ACTIONS(121), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      aux_sym_yaml_plain_scalar_token1,
    STATE(100), 5,
      sym_nunjucks_expression,
      sym_yaml_plain_scalar,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [609] = 6,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_yaml_plain_scalar_token1,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(169), 5,
      sym_nunjucks_expression,
      sym_yaml_plain_scalar,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [632] = 6,
    ACTIONS(77), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_yaml_plain_scalar_token1,
    STATE(107), 5,
      sym_nunjucks_expression,
      sym_yaml_plain_scalar,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [655] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(159), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(33), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [673] = 5,
    ACTIONS(163), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(165), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(167), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(169), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
    STATE(38), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [691] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(161), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(33), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [709] = 5,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(177), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(34), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [727] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(161), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(33), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [745] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(183), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(32), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [763] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(187), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(24), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [781] = 5,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(196), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(199), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
    STATE(29), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [799] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(203), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(26), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [817] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(209), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(41), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [835] = 5,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(177), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(34), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [853] = 5,
    ACTIONS(211), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(216), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(33), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [871] = 5,
    ACTIONS(222), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(231), 1,
      anon_sym_SQUOTE,
    ACTIONS(228), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(34), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [889] = 5,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(237), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(239), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(235), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
    STATE(29), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [907] = 5,
    ACTIONS(167), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(241), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
    STATE(35), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [925] = 5,
    ACTIONS(199), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(246), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(194), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [943] = 5,
    ACTIONS(163), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(239), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(249), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(235), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [961] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(251), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(255), 1,
      anon_sym_SQUOTE,
    ACTIONS(253), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(25), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [979] = 5,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(259), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(257), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token3,
    STATE(22), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [997] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(179), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 2,
      aux_sym_yaml_quoted_string_token3,
      aux_sym_yaml_quoted_string_token4,
    STATE(34), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [1015] = 2,
    ACTIONS(263), 2,
      aux_sym_yaml_quoted_string_token1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(261), 4,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_DQUOTE,
      aux_sym_yaml_quoted_string_token3,
  [1026] = 4,
    ACTIONS(169), 1,
      aux_sym__line_token2,
    ACTIONS(265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 1,
      aux_sym_yaml_plain_scalar_token2,
    STATE(47), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [1040] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 4,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_plain_scalar_token2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1050] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(261), 4,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_quoted_string_token3,
      anon_sym_SQUOTE,
      aux_sym_yaml_quoted_string_token4,
  [1060] = 4,
    ACTIONS(194), 1,
      aux_sym__line_token2,
    ACTIONS(269), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(272), 1,
      aux_sym_yaml_plain_scalar_token2,
    STATE(46), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [1074] = 4,
    ACTIONS(235), 1,
      aux_sym__line_token2,
    ACTIONS(265), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(275), 1,
      aux_sym_yaml_plain_scalar_token2,
    STATE(46), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_plain_scalar_repeat1,
  [1088] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE,
      aux_sym_yaml_plain_scalar_token2,
      aux_sym_yaml_flow_sequence_token2,
  [1098] = 4,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    STATE(62), 1,
      sym_yaml_flow_pair,
  [1111] = 4,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(283), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    STATE(53), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1124] = 4,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1137] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(293), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1150] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(293), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1163] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(59), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1176] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1189] = 4,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(301), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(69), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1202] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(303), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1215] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(75), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1228] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1241] = 4,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(64), 1,
      sym_yaml_flow_pair,
  [1254] = 4,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(319), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(65), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1267] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(68), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1280] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(325), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1293] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(55), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1306] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(325), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1319] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(333), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1332] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(51), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1345] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1358] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(333), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1371] = 4,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(58), 1,
      sym_yaml_flow_pair,
  [1384] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(76), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1397] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(349), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1410] = 4,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(357), 1,
      aux_sym_yaml_flow_sequence_token2,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1423] = 4,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(360), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1436] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1449] = 4,
    ACTIONS(291), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(73), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1462] = 4,
    ACTIONS(368), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(370), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1475] = 3,
    ACTIONS(375), 1,
      aux_sym__line_token1,
    ACTIONS(378), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(78), 1,
      aux_sym__statement_rest,
  [1485] = 3,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_yaml_flow_pair,
  [1495] = 3,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_yaml_flow_pair,
  [1505] = 3,
    ACTIONS(380), 1,
      aux_sym__line_token1,
    ACTIONS(382), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(83), 1,
      aux_sym__statement_rest,
  [1515] = 3,
    ACTIONS(384), 1,
      aux_sym__line_token1,
    ACTIONS(386), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(86), 1,
      aux_sym__statement_rest,
  [1525] = 3,
    ACTIONS(384), 1,
      aux_sym__line_token1,
    ACTIONS(386), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(78), 1,
      aux_sym__statement_rest,
  [1535] = 3,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_yaml_flow_pair,
  [1545] = 2,
    ACTIONS(368), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(373), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1553] = 3,
    ACTIONS(388), 1,
      aux_sym__line_token1,
    ACTIONS(390), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(78), 1,
      aux_sym__statement_rest,
  [1563] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1571] = 2,
    ACTIONS(355), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1579] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1587] = 2,
    ACTIONS(394), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(392), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1595] = 2,
    ACTIONS(398), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(396), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1603] = 2,
    ACTIONS(402), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(400), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1611] = 2,
    ACTIONS(406), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1619] = 2,
    ACTIONS(410), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(408), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1627] = 2,
    ACTIONS(414), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1635] = 2,
    ACTIONS(416), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(418), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1643] = 2,
    ACTIONS(420), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(422), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1651] = 2,
    ACTIONS(426), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1659] = 2,
    ACTIONS(430), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1667] = 2,
    ACTIONS(434), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(432), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1675] = 2,
    ACTIONS(436), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(438), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1683] = 2,
    ACTIONS(440), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(442), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1691] = 2,
    ACTIONS(446), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(444), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1699] = 2,
    ACTIONS(450), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(448), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1707] = 2,
    ACTIONS(450), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(448), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1715] = 2,
    ACTIONS(446), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(444), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1723] = 2,
    ACTIONS(434), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(432), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1731] = 2,
    ACTIONS(426), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(424), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1739] = 2,
    ACTIONS(414), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(412), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1747] = 2,
    ACTIONS(410), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(408), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1755] = 2,
    ACTIONS(402), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(400), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1763] = 2,
    ACTIONS(398), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(396), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1771] = 2,
    ACTIONS(394), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(392), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1779] = 2,
    ACTIONS(416), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(418), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1787] = 2,
    ACTIONS(420), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(422), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1795] = 2,
    ACTIONS(440), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(442), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1803] = 2,
    ACTIONS(263), 1,
      aux_sym_yaml_plain_scalar_token2,
    ACTIONS(261), 2,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
  [1811] = 2,
    ACTIONS(436), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(438), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1819] = 1,
    ACTIONS(378), 2,
      aux_sym__line_token1,
      anon_sym_PERCENT_RBRACE,
  [1824] = 2,
    ACTIONS(452), 1,
      aux_sym__line_token1,
    ACTIONS(454), 1,
      aux_sym__line_token2,
  [1831] = 1,
    ACTIONS(456), 2,
      aux_sym__line_token1,
      anon_sym_PERCENT_RBRACE,
  [1836] = 2,
    ACTIONS(281), 1,
      sym_yaml_flow_key,
    STATE(88), 1,
      sym_yaml_flow_pair,
  [1843] = 1,
    ACTIONS(418), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [1848] = 2,
    ACTIONS(458), 1,
      aux_sym__line_token1,
    ACTIONS(460), 1,
      aux_sym__line_token2,
  [1855] = 2,
    ACTIONS(386), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(462), 1,
      sym__statement_word,
  [1862] = 2,
    ACTIONS(462), 1,
      sym__statement_word,
    ACTIONS(464), 1,
      anon_sym_PERCENT_RBRACE,
  [1869] = 1,
    ACTIONS(422), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [1874] = 2,
    ACTIONS(390), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(462), 1,
      sym__statement_word,
  [1881] = 2,
    ACTIONS(466), 1,
      aux_sym__line_token1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [1888] = 2,
    ACTIONS(468), 1,
      anon_sym_COLON,
    ACTIONS(470), 1,
      aux_sym__line_token2,
  [1895] = 1,
    ACTIONS(472), 1,
      aux_sym__line_token2,
  [1899] = 1,
    ACTIONS(474), 1,
      aux_sym__line_token2,
  [1903] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
  [1907] = 1,
    ACTIONS(400), 1,
      aux_sym__line_token2,
  [1911] = 1,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [1915] = 1,
    ACTIONS(408), 1,
      aux_sym__line_token2,
  [1919] = 1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [1923] = 1,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
  [1927] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1931] = 1,
    ACTIONS(442), 1,
      aux_sym__line_token2,
  [1935] = 1,
    ACTIONS(482), 1,
      aux_sym__line_token1,
  [1939] = 1,
    ACTIONS(438), 1,
      aux_sym__line_token2,
  [1943] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE_RBRACE,
  [1947] = 1,
    ACTIONS(412), 1,
      aux_sym__line_token2,
  [1951] = 1,
    ACTIONS(486), 1,
      aux_sym__line_token2,
  [1955] = 1,
    ACTIONS(466), 1,
      aux_sym__line_token1,
  [1959] = 1,
    ACTIONS(424), 1,
      aux_sym__line_token2,
  [1963] = 1,
    ACTIONS(488), 1,
      aux_sym__line_token2,
  [1967] = 1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
  [1971] = 1,
    ACTIONS(470), 1,
      aux_sym__line_token2,
  [1975] = 1,
    ACTIONS(462), 1,
      sym__statement_word,
  [1979] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [1983] = 1,
    ACTIONS(490), 1,
      anon_sym_RBRACE_RBRACE,
  [1987] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
  [1991] = 1,
    ACTIONS(392), 1,
      aux_sym__line_token2,
  [1995] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1999] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
  [2003] = 1,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
  [2007] = 1,
    ACTIONS(494), 1,
      anon_sym_RBRACE,
  [2011] = 1,
    ACTIONS(496), 1,
      aux_sym__line_token2,
  [2015] = 1,
    ACTIONS(498), 1,
      aux_sym_nunjucks_comment_token1,
  [2019] = 1,
    ACTIONS(396), 1,
      aux_sym__line_token2,
  [2023] = 1,
    ACTIONS(444), 1,
      aux_sym__line_token2,
  [2027] = 1,
    ACTIONS(500), 1,
      anon_sym_RBRACE_RBRACE,
  [2031] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
  [2035] = 1,
    ACTIONS(502), 1,
      sym__expr_content,
  [2039] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [2043] = 1,
    ACTIONS(506), 1,
      aux_sym__line_token1,
  [2047] = 1,
    ACTIONS(432), 1,
      aux_sym__line_token2,
  [2051] = 1,
    ACTIONS(448), 1,
      aux_sym__line_token2,
  [2055] = 1,
    ACTIONS(508), 1,
      aux_sym__line_token2,
  [2059] = 1,
    ACTIONS(510), 1,
      aux_sym__line_token2,
  [2063] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
  [2067] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [2071] = 1,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
  [2075] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
  [2079] = 1,
    ACTIONS(516), 1,
      aux_sym__line_token2,
  [2083] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [2087] = 1,
    ACTIONS(518), 1,
      aux_sym__line_token2,
  [2091] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [2095] = 1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [2099] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
  [2103] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [2107] = 1,
    ACTIONS(524), 1,
      anon_sym_RBRACE_RBRACE,
  [2111] = 1,
    ACTIONS(526), 1,
      anon_sym_RBRACE_RBRACE,
  [2115] = 1,
    ACTIONS(528), 1,
      anon_sym_RBRACE_RBRACE,
  [2119] = 1,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
  [2123] = 1,
    ACTIONS(532), 1,
      sym__expr_content,
  [2127] = 1,
    ACTIONS(534), 1,
      sym__expr_content,
  [2131] = 1,
    ACTIONS(536), 1,
      sym__expr_content,
  [2135] = 1,
    ACTIONS(538), 1,
      sym__expr_content,
  [2139] = 1,
    ACTIONS(540), 1,
      sym__expr_content,
  [2143] = 1,
    ACTIONS(542), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 254,
  [SMALL_STATE(9)] = 290,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 363,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 492,
  [SMALL_STATE(16)] = 522,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 570,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 609,
  [SMALL_STATE(21)] = 632,
  [SMALL_STATE(22)] = 655,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 709,
  [SMALL_STATE(26)] = 727,
  [SMALL_STATE(27)] = 745,
  [SMALL_STATE(28)] = 763,
  [SMALL_STATE(29)] = 781,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 817,
  [SMALL_STATE(32)] = 835,
  [SMALL_STATE(33)] = 853,
  [SMALL_STATE(34)] = 871,
  [SMALL_STATE(35)] = 889,
  [SMALL_STATE(36)] = 907,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 943,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 979,
  [SMALL_STATE(41)] = 997,
  [SMALL_STATE(42)] = 1015,
  [SMALL_STATE(43)] = 1026,
  [SMALL_STATE(44)] = 1040,
  [SMALL_STATE(45)] = 1050,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1074,
  [SMALL_STATE(48)] = 1088,
  [SMALL_STATE(49)] = 1098,
  [SMALL_STATE(50)] = 1111,
  [SMALL_STATE(51)] = 1124,
  [SMALL_STATE(52)] = 1137,
  [SMALL_STATE(53)] = 1150,
  [SMALL_STATE(54)] = 1163,
  [SMALL_STATE(55)] = 1176,
  [SMALL_STATE(56)] = 1189,
  [SMALL_STATE(57)] = 1202,
  [SMALL_STATE(58)] = 1215,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1241,
  [SMALL_STATE(61)] = 1254,
  [SMALL_STATE(62)] = 1267,
  [SMALL_STATE(63)] = 1280,
  [SMALL_STATE(64)] = 1293,
  [SMALL_STATE(65)] = 1306,
  [SMALL_STATE(66)] = 1319,
  [SMALL_STATE(67)] = 1332,
  [SMALL_STATE(68)] = 1345,
  [SMALL_STATE(69)] = 1358,
  [SMALL_STATE(70)] = 1371,
  [SMALL_STATE(71)] = 1384,
  [SMALL_STATE(72)] = 1397,
  [SMALL_STATE(73)] = 1410,
  [SMALL_STATE(74)] = 1423,
  [SMALL_STATE(75)] = 1436,
  [SMALL_STATE(76)] = 1449,
  [SMALL_STATE(77)] = 1462,
  [SMALL_STATE(78)] = 1475,
  [SMALL_STATE(79)] = 1485,
  [SMALL_STATE(80)] = 1495,
  [SMALL_STATE(81)] = 1505,
  [SMALL_STATE(82)] = 1515,
  [SMALL_STATE(83)] = 1525,
  [SMALL_STATE(84)] = 1535,
  [SMALL_STATE(85)] = 1545,
  [SMALL_STATE(86)] = 1553,
  [SMALL_STATE(87)] = 1563,
  [SMALL_STATE(88)] = 1571,
  [SMALL_STATE(89)] = 1579,
  [SMALL_STATE(90)] = 1587,
  [SMALL_STATE(91)] = 1595,
  [SMALL_STATE(92)] = 1603,
  [SMALL_STATE(93)] = 1611,
  [SMALL_STATE(94)] = 1619,
  [SMALL_STATE(95)] = 1627,
  [SMALL_STATE(96)] = 1635,
  [SMALL_STATE(97)] = 1643,
  [SMALL_STATE(98)] = 1651,
  [SMALL_STATE(99)] = 1659,
  [SMALL_STATE(100)] = 1667,
  [SMALL_STATE(101)] = 1675,
  [SMALL_STATE(102)] = 1683,
  [SMALL_STATE(103)] = 1691,
  [SMALL_STATE(104)] = 1699,
  [SMALL_STATE(105)] = 1707,
  [SMALL_STATE(106)] = 1715,
  [SMALL_STATE(107)] = 1723,
  [SMALL_STATE(108)] = 1731,
  [SMALL_STATE(109)] = 1739,
  [SMALL_STATE(110)] = 1747,
  [SMALL_STATE(111)] = 1755,
  [SMALL_STATE(112)] = 1763,
  [SMALL_STATE(113)] = 1771,
  [SMALL_STATE(114)] = 1779,
  [SMALL_STATE(115)] = 1787,
  [SMALL_STATE(116)] = 1795,
  [SMALL_STATE(117)] = 1803,
  [SMALL_STATE(118)] = 1811,
  [SMALL_STATE(119)] = 1819,
  [SMALL_STATE(120)] = 1824,
  [SMALL_STATE(121)] = 1831,
  [SMALL_STATE(122)] = 1836,
  [SMALL_STATE(123)] = 1843,
  [SMALL_STATE(124)] = 1848,
  [SMALL_STATE(125)] = 1855,
  [SMALL_STATE(126)] = 1862,
  [SMALL_STATE(127)] = 1869,
  [SMALL_STATE(128)] = 1874,
  [SMALL_STATE(129)] = 1881,
  [SMALL_STATE(130)] = 1888,
  [SMALL_STATE(131)] = 1895,
  [SMALL_STATE(132)] = 1899,
  [SMALL_STATE(133)] = 1903,
  [SMALL_STATE(134)] = 1907,
  [SMALL_STATE(135)] = 1911,
  [SMALL_STATE(136)] = 1915,
  [SMALL_STATE(137)] = 1919,
  [SMALL_STATE(138)] = 1923,
  [SMALL_STATE(139)] = 1927,
  [SMALL_STATE(140)] = 1931,
  [SMALL_STATE(141)] = 1935,
  [SMALL_STATE(142)] = 1939,
  [SMALL_STATE(143)] = 1943,
  [SMALL_STATE(144)] = 1947,
  [SMALL_STATE(145)] = 1951,
  [SMALL_STATE(146)] = 1955,
  [SMALL_STATE(147)] = 1959,
  [SMALL_STATE(148)] = 1963,
  [SMALL_STATE(149)] = 1967,
  [SMALL_STATE(150)] = 1971,
  [SMALL_STATE(151)] = 1975,
  [SMALL_STATE(152)] = 1979,
  [SMALL_STATE(153)] = 1983,
  [SMALL_STATE(154)] = 1987,
  [SMALL_STATE(155)] = 1991,
  [SMALL_STATE(156)] = 1995,
  [SMALL_STATE(157)] = 1999,
  [SMALL_STATE(158)] = 2003,
  [SMALL_STATE(159)] = 2007,
  [SMALL_STATE(160)] = 2011,
  [SMALL_STATE(161)] = 2015,
  [SMALL_STATE(162)] = 2019,
  [SMALL_STATE(163)] = 2023,
  [SMALL_STATE(164)] = 2027,
  [SMALL_STATE(165)] = 2031,
  [SMALL_STATE(166)] = 2035,
  [SMALL_STATE(167)] = 2039,
  [SMALL_STATE(168)] = 2043,
  [SMALL_STATE(169)] = 2047,
  [SMALL_STATE(170)] = 2051,
  [SMALL_STATE(171)] = 2055,
  [SMALL_STATE(172)] = 2059,
  [SMALL_STATE(173)] = 2063,
  [SMALL_STATE(174)] = 2067,
  [SMALL_STATE(175)] = 2071,
  [SMALL_STATE(176)] = 2075,
  [SMALL_STATE(177)] = 2079,
  [SMALL_STATE(178)] = 2083,
  [SMALL_STATE(179)] = 2087,
  [SMALL_STATE(180)] = 2091,
  [SMALL_STATE(181)] = 2095,
  [SMALL_STATE(182)] = 2099,
  [SMALL_STATE(183)] = 2103,
  [SMALL_STATE(184)] = 2107,
  [SMALL_STATE(185)] = 2111,
  [SMALL_STATE(186)] = 2115,
  [SMALL_STATE(187)] = 2119,
  [SMALL_STATE(188)] = 2123,
  [SMALL_STATE(189)] = 2127,
  [SMALL_STATE(190)] = 2131,
  [SMALL_STATE(191)] = 2135,
  [SMALL_STATE(192)] = 2139,
  [SMALL_STATE(193)] = 2143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(161),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(181),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(120),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(177),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_plain_scalar, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_plain_scalar, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(193),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(29),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(166),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(33),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(188),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(34),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_plain_scalar, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_plain_scalar, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(191),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(189),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_plain_scalar_repeat1, 2), SHIFT_REPEAT(46),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2), SHIFT_REPEAT(122),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2), SHIFT_REPEAT(15),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_rest, 2), SHIFT_REPEAT(151),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_rest, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 6),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 6),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 6),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 6),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_pair, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_pair, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 5),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 4),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 4),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_quoted_string, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_quoted_string, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_quoted_string, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_quoted_string, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_pair, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cf_intrinsic, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 3),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_keyword, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [514] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
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
