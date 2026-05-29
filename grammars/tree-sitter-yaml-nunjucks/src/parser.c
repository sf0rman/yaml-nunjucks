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
#define STATE_COUNT 185
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  sym_yaml_plain_scalar = 45,
  anon_sym_LBRACK = 46,
  aux_sym_yaml_flow_sequence_token1 = 47,
  aux_sym_yaml_flow_sequence_token2 = 48,
  anon_sym_RBRACK = 49,
  sym_yaml_flow_scalar = 50,
  anon_sym_LBRACE = 51,
  sym_yaml_flow_key = 52,
  sym_cf_tag = 53,
  aux_sym_yaml_mixed_token1 = 54,
  anon_sym_DASH = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_yaml_quoted_string_token1 = 57,
  aux_sym_yaml_quoted_string_token2 = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_yaml_quoted_string_token3 = 60,
  sym_comment = 61,
  sym_document = 62,
  sym__line = 63,
  sym_nunjucks_statement = 64,
  sym_nunjucks_keyword = 65,
  aux_sym__statement_rest = 66,
  sym_nunjucks_expression = 67,
  sym_nunjucks_comment = 68,
  sym_yaml_pair = 69,
  sym_yaml_key = 70,
  sym_yaml_value = 71,
  sym_yaml_flow_sequence = 72,
  sym__flow_item = 73,
  sym_yaml_flow_mapping = 74,
  sym_yaml_flow_pair = 75,
  sym_cf_intrinsic = 76,
  sym__cf_value = 77,
  sym_yaml_mixed = 78,
  sym_yaml_list_item = 79,
  sym_yaml_quoted_string = 80,
  aux_sym_document_repeat1 = 81,
  aux_sym_yaml_flow_sequence_repeat1 = 82,
  aux_sym_yaml_flow_mapping_repeat1 = 83,
  aux_sym_yaml_mixed_repeat1 = 84,
  aux_sym_yaml_quoted_string_repeat1 = 85,
  aux_sym_yaml_quoted_string_repeat2 = 86,
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
  [sym_yaml_plain_scalar] = "yaml_plain_scalar",
  [anon_sym_LBRACK] = "[",
  [aux_sym_yaml_flow_sequence_token1] = "yaml_flow_sequence_token1",
  [aux_sym_yaml_flow_sequence_token2] = "yaml_flow_sequence_token2",
  [anon_sym_RBRACK] = "]",
  [sym_yaml_flow_scalar] = "yaml_flow_scalar",
  [anon_sym_LBRACE] = "{",
  [sym_yaml_flow_key] = "yaml_flow_key",
  [sym_cf_tag] = "cf_tag",
  [aux_sym_yaml_mixed_token1] = "yaml_mixed_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_yaml_quoted_string_token1] = "yaml_quoted_string_token1",
  [aux_sym_yaml_quoted_string_token2] = "yaml_quoted_string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_yaml_quoted_string_token3] = "yaml_quoted_string_token3",
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
  [sym_yaml_flow_sequence] = "yaml_flow_sequence",
  [sym__flow_item] = "_flow_item",
  [sym_yaml_flow_mapping] = "yaml_flow_mapping",
  [sym_yaml_flow_pair] = "yaml_flow_pair",
  [sym_cf_intrinsic] = "cf_intrinsic",
  [sym__cf_value] = "_cf_value",
  [sym_yaml_mixed] = "yaml_mixed",
  [sym_yaml_list_item] = "yaml_list_item",
  [sym_yaml_quoted_string] = "yaml_quoted_string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_yaml_flow_sequence_repeat1] = "yaml_flow_sequence_repeat1",
  [aux_sym_yaml_flow_mapping_repeat1] = "yaml_flow_mapping_repeat1",
  [aux_sym_yaml_mixed_repeat1] = "yaml_mixed_repeat1",
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
  [sym_yaml_plain_scalar] = sym_yaml_plain_scalar,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_yaml_flow_sequence_token1] = aux_sym_yaml_flow_sequence_token1,
  [aux_sym_yaml_flow_sequence_token2] = aux_sym_yaml_flow_sequence_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_yaml_flow_scalar] = sym_yaml_flow_scalar,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_yaml_flow_key] = sym_yaml_flow_key,
  [sym_cf_tag] = sym_cf_tag,
  [aux_sym_yaml_mixed_token1] = aux_sym_yaml_mixed_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_yaml_quoted_string_token1] = aux_sym_yaml_quoted_string_token1,
  [aux_sym_yaml_quoted_string_token2] = aux_sym_yaml_quoted_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_yaml_quoted_string_token3] = aux_sym_yaml_quoted_string_token3,
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
  [sym_yaml_flow_sequence] = sym_yaml_flow_sequence,
  [sym__flow_item] = sym__flow_item,
  [sym_yaml_flow_mapping] = sym_yaml_flow_mapping,
  [sym_yaml_flow_pair] = sym_yaml_flow_pair,
  [sym_cf_intrinsic] = sym_cf_intrinsic,
  [sym__cf_value] = sym__cf_value,
  [sym_yaml_mixed] = sym_yaml_mixed,
  [sym_yaml_list_item] = sym_yaml_list_item,
  [sym_yaml_quoted_string] = sym_yaml_quoted_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_yaml_flow_sequence_repeat1] = aux_sym_yaml_flow_sequence_repeat1,
  [aux_sym_yaml_flow_mapping_repeat1] = aux_sym_yaml_flow_mapping_repeat1,
  [aux_sym_yaml_mixed_repeat1] = aux_sym_yaml_mixed_repeat1,
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
  [sym_yaml_plain_scalar] = {
    .visible = true,
    .named = true,
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
  [aux_sym_yaml_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yaml_quoted_string_token3] = {
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
  [sym_yaml_mixed] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_yaml_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
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
  [aux_sym_yaml_mixed_repeat1] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 26,
  [33] = 30,
  [34] = 30,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 29,
  [39] = 27,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 48,
  [54] = 54,
  [55] = 50,
  [56] = 56,
  [57] = 50,
  [58] = 58,
  [59] = 54,
  [60] = 52,
  [61] = 51,
  [62] = 42,
  [63] = 63,
  [64] = 58,
  [65] = 56,
  [66] = 56,
  [67] = 52,
  [68] = 68,
  [69] = 69,
  [70] = 46,
  [71] = 51,
  [72] = 58,
  [73] = 69,
  [74] = 69,
  [75] = 54,
  [76] = 76,
  [77] = 42,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 80,
  [84] = 84,
  [85] = 80,
  [86] = 86,
  [87] = 42,
  [88] = 42,
  [89] = 89,
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
  [104] = 97,
  [105] = 98,
  [106] = 103,
  [107] = 95,
  [108] = 94,
  [109] = 93,
  [110] = 92,
  [111] = 91,
  [112] = 89,
  [113] = 99,
  [114] = 100,
  [115] = 101,
  [116] = 102,
  [117] = 99,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 100,
  [127] = 127,
  [128] = 103,
  [129] = 97,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 94,
  [135] = 102,
  [136] = 136,
  [137] = 101,
  [138] = 138,
  [139] = 95,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 89,
  [147] = 140,
  [148] = 148,
  [149] = 131,
  [150] = 91,
  [151] = 148,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 93,
  [157] = 92,
  [158] = 143,
  [159] = 138,
  [160] = 160,
  [161] = 161,
  [162] = 152,
  [163] = 145,
  [164] = 98,
  [165] = 165,
  [166] = 143,
  [167] = 167,
  [168] = 168,
  [169] = 145,
  [170] = 170,
  [171] = 140,
  [172] = 172,
  [173] = 131,
  [174] = 174,
  [175] = 148,
  [176] = 152,
  [177] = 138,
  [178] = 138,
  [179] = 160,
  [180] = 136,
  [181] = 160,
  [182] = 136,
  [183] = 160,
  [184] = 160,
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
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '"' || c == '\''))
    : (c <= ',' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_yaml_plain_key_character_set_3(int32_t c) {
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

static inline bool aux_sym_yaml_mixed_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_yaml_mixed_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_yaml_mixed_token1_character_set_3(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(141);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '{') ADVANCE(96);
      if (!aux_sym_yaml_mixed_token1_character_set_1(lookahead)) ADVANCE(419);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(422);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(423);
      if (lookahead != 0) ADVANCE(424);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'b') ADVANCE(225);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(315);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(337);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '>' ||
          lookahead == '|') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(419);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          (lookahead < ' ' || '#' < lookahead) &&
          lookahead != ',' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(319);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(424);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '%') ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '{') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(428);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(332);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'B') ADVANCE(21);
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'J') ADVANCE(72);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'Z') ADVANCE(85);
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(332);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(332);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 95:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 96:
      if (lookahead == '{') ADVANCE(302);
      END_STATE();
    case 97:
      if (lookahead == '}') ADVANCE(305);
      END_STATE();
    case 98:
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 99:
      if (lookahead == '}') ADVANCE(101);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(425);
      END_STATE();
    case 101:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(306);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(312);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '#') ADVANCE(429);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == ':') ADVANCE(311);
      if (lookahead == '{') ADVANCE(10);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(316);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == '4') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == '6') ADVANCE(139);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'A') ADVANCE(233);
      if (lookahead == 'B') ADVANCE(148);
      if (lookahead == 'C') ADVANCE(256);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'J') ADVANCE(245);
      if (lookahead == 'N') ADVANCE(250);
      if (lookahead == 'O') ADVANCE(262);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(182);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'A') ADVANCE(147);
      if (lookahead == 'O') ADVANCE(263);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'B') ADVANCE(213);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'I') ADVANCE(235);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'M') ADVANCE(150);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'V') ADVANCE(156);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'Z') ADVANCE(274);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'o') ADVANCE(244);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'b') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(200);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(268);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'm') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'm') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'g') ADVANCE(153);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'h') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'o') ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'k') ADVANCE(118);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'k') ADVANCE(119);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == 'x') ADVANCE(287);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'p') ADVANCE(251);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'q') ADVANCE(292);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'x') ADVANCE(283);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == 'z') ADVANCE(159);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__statement_word);
      if (lookahead == '!' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '>') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__expr_content);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead != 0) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '\n') ADVANCE(107);
      if (!sym_yaml_plain_key_character_set_1(lookahead)) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(314);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == ':') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == ':') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == ':') ADVANCE(419);
      if (!sym_yaml_plain_key_character_set_2(lookahead)) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_yaml_plain_key);
      if (!sym_yaml_plain_key_character_set_3(lookahead)) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_yaml_block_scalar);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_yaml_block_scalar);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_yaml_plain_scalar);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == '\'') ADVANCE(426);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '{') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ',' &&
          lookahead != '}') ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(327);
      if (lookahead == ']') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(327);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == ',') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '}') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      if (!sym_yaml_flow_key_character_set_1(lookahead)) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_yaml_flow_sequence_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_yaml_flow_scalar);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(302);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_yaml_flow_key);
      if (!sym_yaml_flow_key_character_set_2(lookahead)) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_cf_tag);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_cf_tag);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == '\n') ADVANCE(106);
      if (!aux_sym_yaml_mixed_token1_character_set_3(lookahead)) ADVANCE(419);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == '4') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == '6') ADVANCE(335);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'A') ADVANCE(386);
      if (lookahead == 'B') ADVANCE(344);
      if (lookahead == 'C') ADVANCE(400);
      if (lookahead == 'E') ADVANCE(403);
      if (lookahead == 'F') ADVANCE(379);
      if (lookahead == 'G') ADVANCE(360);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'J') ADVANCE(395);
      if (lookahead == 'N') ADVANCE(397);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == 'R') ADVANCE(362);
      if (lookahead == 'S') ADVANCE(363);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead == 'O') ADVANCE(405);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'B') ADVANCE(380);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'I') ADVANCE(388);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'M') ADVANCE(345);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'V') ADVANCE(349);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'Z') ADVANCE(408);
      if (lookahead == 't') ADVANCE(410);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(409);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(401);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(352);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(394);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(384);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'a') ADVANCE(414);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'b') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'c') ADVANCE(371);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'c') ADVANCE(410);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'c') ADVANCE(382);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'd') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'd') ADVANCE(340);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'd') ADVANCE(375);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'd') ADVANCE(361);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'd') ADVANCE(377);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(411);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(368);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead == 'p') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(351);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(353);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(354);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'f') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'g') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'g') ADVANCE(347);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'h') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(418);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(387);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(410);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(413);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(396);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(391);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(399);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'o') ADVANCE(406);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'i') ADVANCE(393);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'l') ADVANCE(408);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'l') ADVANCE(416);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'l') ADVANCE(374);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'l') ADVANCE(417);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'l') ADVANCE(365);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(355);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(341);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(339);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(357);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(369);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(356);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(359);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'n') ADVANCE(372);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(373);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(387);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(389);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'o') ADVANCE(390);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'p') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'p') ADVANCE(398);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'q') ADVANCE(415);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'r') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'r') ADVANCE(370);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'r') ADVANCE(366);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'r') ADVANCE(412);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 's') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 's') ADVANCE(364);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 't') ADVANCE(333);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 't') ADVANCE(338);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 't') ADVANCE(342);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 't') ADVANCE(376);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 't') ADVANCE(378);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'u') ADVANCE(348);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'u') ADVANCE(358);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'u') ADVANCE(361);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (lookahead == 'z') ADVANCE(350);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_yaml_mixed_token1);
      if (!aux_sym_yaml_mixed_token1_character_set_2(lookahead)) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_yaml_plain_key_character_set_3(lookahead)) ADVANCE(316);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token1);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token3);
      if (lookahead == '{') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_yaml_quoted_string_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(429);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 102},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 102},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 321},
  [13] = {.lex_state = 321},
  [14] = {.lex_state = 321},
  [15] = {.lex_state = 321},
  [16] = {.lex_state = 321},
  [17] = {.lex_state = 102},
  [18] = {.lex_state = 321},
  [19] = {.lex_state = 321},
  [20] = {.lex_state = 321},
  [21] = {.lex_state = 102},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 322},
  [47] = {.lex_state = 322},
  [48] = {.lex_state = 322},
  [49] = {.lex_state = 322},
  [50] = {.lex_state = 323},
  [51] = {.lex_state = 325},
  [52] = {.lex_state = 322},
  [53] = {.lex_state = 322},
  [54] = {.lex_state = 323},
  [55] = {.lex_state = 323},
  [56] = {.lex_state = 323},
  [57] = {.lex_state = 323},
  [58] = {.lex_state = 323},
  [59] = {.lex_state = 323},
  [60] = {.lex_state = 322},
  [61] = {.lex_state = 325},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 323},
  [64] = {.lex_state = 323},
  [65] = {.lex_state = 323},
  [66] = {.lex_state = 323},
  [67] = {.lex_state = 322},
  [68] = {.lex_state = 322},
  [69] = {.lex_state = 322},
  [70] = {.lex_state = 322},
  [71] = {.lex_state = 325},
  [72] = {.lex_state = 323},
  [73] = {.lex_state = 322},
  [74] = {.lex_state = 322},
  [75] = {.lex_state = 323},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 323},
  [80] = {.lex_state = 325},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 325},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 325},
  [86] = {.lex_state = 322},
  [87] = {.lex_state = 323},
  [88] = {.lex_state = 322},
  [89] = {.lex_state = 323},
  [90] = {.lex_state = 323},
  [91] = {.lex_state = 323},
  [92] = {.lex_state = 323},
  [93] = {.lex_state = 323},
  [94] = {.lex_state = 323},
  [95] = {.lex_state = 323},
  [96] = {.lex_state = 323},
  [97] = {.lex_state = 323},
  [98] = {.lex_state = 323},
  [99] = {.lex_state = 322},
  [100] = {.lex_state = 322},
  [101] = {.lex_state = 322},
  [102] = {.lex_state = 322},
  [103] = {.lex_state = 323},
  [104] = {.lex_state = 322},
  [105] = {.lex_state = 322},
  [106] = {.lex_state = 322},
  [107] = {.lex_state = 322},
  [108] = {.lex_state = 322},
  [109] = {.lex_state = 322},
  [110] = {.lex_state = 322},
  [111] = {.lex_state = 322},
  [112] = {.lex_state = 322},
  [113] = {.lex_state = 323},
  [114] = {.lex_state = 323},
  [115] = {.lex_state = 323},
  [116] = {.lex_state = 323},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 325},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 309},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 102},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 102},
  [139] = {.lex_state = 5},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 102},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 102},
  [160] = {.lex_state = 99},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 102},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 102},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 102},
  [178] = {.lex_state = 102},
  [179] = {.lex_state = 99},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 99},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 99},
  [184] = {.lex_state = 99},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym__statement_word] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_yaml_flow_sequence_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_cf_tag] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(168),
    [sym__line] = STATE(8),
    [sym_nunjucks_statement] = STATE(170),
    [sym_nunjucks_comment] = STATE(170),
    [sym_yaml_pair] = STATE(170),
    [sym_yaml_key] = STATE(167),
    [sym_yaml_list_item] = STATE(170),
    [sym_yaml_quoted_string] = STATE(174),
    [aux_sym_document_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_blank_line] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(9),
    [anon_sym_LBRACE_POUND] = ACTIONS(11),
    [sym_yaml_plain_key] = ACTIONS(13),
    [sym_cf_tag] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(25), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(31), 1,
      sym__statement_word,
    STATE(125), 1,
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
  [43] = 5,
    ACTIONS(31), 1,
      sym__statement_word,
    ACTIONS(33), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(125), 1,
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
  [86] = 5,
    ACTIONS(31), 1,
      sym__statement_word,
    ACTIONS(35), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(125), 1,
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
  [129] = 4,
    ACTIONS(37), 1,
      aux_sym__line_token1,
    STATE(78), 1,
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
  [169] = 4,
    ACTIONS(31), 1,
      sym__statement_word,
    STATE(125), 1,
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
  [209] = 3,
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
  [246] = 15,
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
    STATE(167), 1,
      sym_yaml_key,
    STATE(174), 1,
      sym_yaml_quoted_string,
    STATE(10), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(170), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [296] = 14,
    ACTIONS(13), 1,
      sym_yaml_plain_key,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym_cf_tag,
    ACTIONS(53), 1,
      aux_sym_yaml_mixed_token1,
    STATE(43), 1,
      sym_nunjucks_expression,
    STATE(118), 1,
      sym_yaml_quoted_string,
    STATE(167), 1,
      sym_yaml_key,
    ACTIONS(45), 2,
      sym_yaml_block_scalar,
      sym_yaml_plain_scalar,
    STATE(144), 2,
      sym_yaml_pair,
      sym_yaml_value,
    STATE(127), 4,
      sym_yaml_flow_sequence,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_mixed,
  [344] = 15,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym__line_token1,
    ACTIONS(60), 1,
      sym_blank_line,
    ACTIONS(63), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(66), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(69), 1,
      sym_yaml_plain_key,
    ACTIONS(72), 1,
      sym_cf_tag,
    ACTIONS(75), 1,
      anon_sym_DASH,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      sym_comment,
    STATE(167), 1,
      sym_yaml_key,
    STATE(174), 1,
      sym_yaml_quoted_string,
    STATE(10), 2,
      sym__line,
      aux_sym_document_repeat1,
    STATE(170), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [394] = 11,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      aux_sym_yaml_mixed_token1,
    ACTIONS(87), 1,
      sym_cf_tag,
    STATE(43), 1,
      sym_nunjucks_expression,
    STATE(132), 1,
      sym_yaml_value,
    ACTIONS(45), 2,
      sym_yaml_block_scalar,
      sym_yaml_plain_scalar,
    STATE(127), 5,
      sym_yaml_flow_sequence,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_mixed,
      sym_yaml_quoted_string,
  [433] = 10,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 1,
      sym_yaml_flow_scalar,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(48), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [469] = 10,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      sym_yaml_flow_scalar,
    STATE(49), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [505] = 10,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_yaml_flow_scalar,
    STATE(53), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [541] = 9,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(121), 1,
      sym_yaml_flow_scalar,
    STATE(67), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [574] = 9,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(125), 1,
      sym_yaml_flow_scalar,
    STATE(60), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [607] = 11,
    ACTIONS(9), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(13), 1,
      sym_yaml_plain_key,
    ACTIONS(15), 1,
      sym_cf_tag,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      sym_comment,
    STATE(167), 1,
      sym_yaml_key,
    STATE(174), 1,
      sym_yaml_quoted_string,
    STATE(165), 4,
      sym_nunjucks_statement,
      sym_nunjucks_comment,
      sym_yaml_pair,
      sym_yaml_list_item,
  [644] = 9,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 1,
      sym_yaml_flow_scalar,
    STATE(52), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [677] = 8,
    ACTIONS(133), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      sym_yaml_flow_scalar,
    ACTIONS(139), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_cf_tag,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    STATE(96), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [707] = 8,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      sym_cf_tag,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(147), 1,
      sym_yaml_flow_scalar,
    STATE(86), 6,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__flow_item,
      sym_yaml_flow_mapping,
      sym_cf_intrinsic,
      sym_yaml_quoted_string,
  [737] = 2,
    ACTIONS(151), 3,
      aux_sym__line_token1,
      sym_yaml_plain_key,
      anon_sym_DASH,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [753] = 2,
    ACTIONS(155), 3,
      aux_sym__line_token1,
      sym_yaml_plain_key,
      anon_sym_DASH,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      sym_blank_line,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      sym_cf_tag,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [769] = 6,
    ACTIONS(133), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      sym_yaml_plain_scalar,
    STATE(103), 4,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [791] = 6,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(161), 1,
      sym_yaml_plain_scalar,
    STATE(128), 4,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [813] = 6,
    ACTIONS(89), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      sym_yaml_plain_scalar,
    STATE(106), 4,
      sym_nunjucks_expression,
      sym_yaml_flow_sequence,
      sym__cf_value,
      sym_yaml_quoted_string,
  [835] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(171), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(35), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [852] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      aux_sym_yaml_quoted_string_token3,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [869] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(179), 1,
      aux_sym_yaml_quoted_string_token3,
    ACTIONS(181), 1,
      anon_sym_SQUOTE,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [886] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(185), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(36), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [903] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(187), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      aux_sym_yaml_quoted_string_token3,
    STATE(28), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [920] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(195), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(29), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [937] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(201), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(38), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [954] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(205), 1,
      aux_sym_yaml_quoted_string_token3,
    STATE(39), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [971] = 5,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(207), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(209), 1,
      aux_sym_yaml_quoted_string_token3,
    STATE(27), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [988] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(185), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(36), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [1005] = 5,
    ACTIONS(211), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(219), 1,
      aux_sym_yaml_quoted_string_token2,
    STATE(36), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [1022] = 5,
    ACTIONS(222), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      aux_sym_yaml_quoted_string_token3,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [1039] = 5,
    ACTIONS(165), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(183), 1,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(185), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(36), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat1,
  [1056] = 5,
    ACTIONS(173), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(175), 1,
      aux_sym_yaml_quoted_string_token2,
    ACTIONS(179), 1,
      aux_sym_yaml_quoted_string_token3,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    STATE(37), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_quoted_string_repeat2,
  [1073] = 4,
    ACTIONS(235), 1,
      aux_sym__line_token2,
    ACTIONS(237), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(240), 1,
      aux_sym_yaml_mixed_token1,
    STATE(40), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [1087] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(243), 1,
      aux_sym__line_token2,
    ACTIONS(245), 1,
      aux_sym_yaml_mixed_token1,
    STATE(40), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [1101] = 2,
    ACTIONS(249), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_quoted_string_token1,
    ACTIONS(247), 3,
      aux_sym__line_token2,
      anon_sym_DQUOTE,
      aux_sym_yaml_quoted_string_token2,
  [1111] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(251), 1,
      aux_sym__line_token2,
    ACTIONS(253), 1,
      aux_sym_yaml_mixed_token1,
    STATE(44), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [1125] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(245), 1,
      aux_sym_yaml_mixed_token1,
    ACTIONS(255), 1,
      aux_sym__line_token2,
    STATE(40), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [1139] = 4,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(255), 1,
      aux_sym__line_token2,
    ACTIONS(257), 1,
      aux_sym_yaml_mixed_token1,
    STATE(41), 2,
      sym_nunjucks_expression,
      aux_sym_yaml_mixed_repeat1,
  [1153] = 4,
    ACTIONS(259), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1166] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(265), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1179] = 4,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(269), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(47), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1192] = 4,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(271), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(46), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1205] = 4,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    STATE(66), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1218] = 4,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    STATE(55), 1,
      sym_yaml_flow_pair,
  [1231] = 4,
    ACTIONS(259), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1244] = 4,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(285), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(70), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1257] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    ACTIONS(289), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1270] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(65), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1283] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1296] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(56), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1309] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(59), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1322] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1335] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(265), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1348] = 4,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(50), 1,
      sym_yaml_flow_pair,
  [1361] = 2,
    ACTIONS(247), 2,
      aux_sym_yaml_quoted_string_token2,
      anon_sym_SQUOTE,
    ACTIONS(249), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_yaml_quoted_string_token3,
  [1370] = 4,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(319), 1,
      aux_sym_yaml_flow_sequence_token2,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1383] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(54), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1396] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1409] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1422] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(326), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1435] = 4,
    ACTIONS(330), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(332), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1448] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(337), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1461] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(326), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1474] = 4,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(57), 1,
      sym_yaml_flow_pair,
  [1487] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(75), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1500] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(345), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1513] = 4,
    ACTIONS(261), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(349), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      aux_sym_yaml_flow_sequence_repeat1,
  [1526] = 4,
    ACTIONS(277), 1,
      aux_sym_yaml_flow_sequence_token2,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      aux_sym_yaml_flow_sequence_token1,
    STATE(63), 1,
      aux_sym_yaml_flow_mapping_repeat1,
  [1539] = 3,
    ACTIONS(33), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(357), 1,
      aux_sym__line_token1,
    STATE(84), 1,
      aux_sym__statement_rest,
  [1549] = 2,
    ACTIONS(249), 1,
      aux_sym_yaml_mixed_token1,
    ACTIONS(247), 2,
      aux_sym__line_token2,
      anon_sym_LBRACE_LBRACE,
  [1557] = 3,
    ACTIONS(359), 1,
      aux_sym__line_token1,
    ACTIONS(361), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(82), 1,
      aux_sym__statement_rest,
  [1567] = 2,
    ACTIONS(365), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1575] = 3,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    STATE(58), 1,
      sym_yaml_flow_pair,
  [1585] = 3,
    ACTIONS(25), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(367), 1,
      aux_sym__line_token1,
    STATE(76), 1,
      aux_sym__statement_rest,
  [1595] = 3,
    ACTIONS(25), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(367), 1,
      aux_sym__line_token1,
    STATE(84), 1,
      aux_sym__statement_rest,
  [1605] = 3,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_yaml_flow_pair,
  [1615] = 3,
    ACTIONS(369), 1,
      aux_sym__line_token1,
    ACTIONS(372), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(84), 1,
      aux_sym__statement_rest,
  [1625] = 3,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_yaml_flow_pair,
  [1635] = 2,
    ACTIONS(330), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(335), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1643] = 2,
    ACTIONS(249), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(247), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1651] = 2,
    ACTIONS(249), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(247), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1659] = 2,
    ACTIONS(376), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(374), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1667] = 2,
    ACTIONS(317), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1675] = 2,
    ACTIONS(380), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(378), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1683] = 2,
    ACTIONS(384), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(382), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1691] = 2,
    ACTIONS(388), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(386), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1699] = 2,
    ACTIONS(392), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(390), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1707] = 2,
    ACTIONS(396), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(394), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1715] = 2,
    ACTIONS(400), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(398), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1723] = 2,
    ACTIONS(404), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(402), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1731] = 2,
    ACTIONS(408), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(406), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1739] = 2,
    ACTIONS(410), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(412), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1747] = 2,
    ACTIONS(414), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(416), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1755] = 2,
    ACTIONS(418), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(420), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1763] = 2,
    ACTIONS(422), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(424), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1771] = 2,
    ACTIONS(428), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(426), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1779] = 2,
    ACTIONS(404), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(402), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1787] = 2,
    ACTIONS(408), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(406), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1795] = 2,
    ACTIONS(428), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(426), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1803] = 2,
    ACTIONS(396), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(394), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1811] = 2,
    ACTIONS(392), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(390), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1819] = 2,
    ACTIONS(388), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(386), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1827] = 2,
    ACTIONS(384), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(382), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1835] = 2,
    ACTIONS(380), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(378), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1843] = 2,
    ACTIONS(376), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(374), 2,
      aux_sym_yaml_flow_sequence_token2,
      anon_sym_RBRACK,
  [1851] = 2,
    ACTIONS(410), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1859] = 2,
    ACTIONS(414), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1867] = 2,
    ACTIONS(418), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1875] = 2,
    ACTIONS(422), 1,
      aux_sym_yaml_flow_sequence_token1,
    ACTIONS(424), 2,
      anon_sym_RBRACE,
      aux_sym_yaml_flow_sequence_token2,
  [1883] = 1,
    ACTIONS(412), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [1888] = 2,
    ACTIONS(251), 1,
      aux_sym__line_token2,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [1895] = 2,
    ACTIONS(432), 1,
      aux_sym__line_token1,
    ACTIONS(434), 1,
      aux_sym__line_token2,
  [1902] = 1,
    ACTIONS(436), 2,
      aux_sym__line_token1,
      anon_sym_PERCENT_RBRACE,
  [1907] = 2,
    ACTIONS(283), 1,
      sym_yaml_flow_key,
    STATE(90), 1,
      sym_yaml_flow_pair,
  [1914] = 2,
    ACTIONS(438), 1,
      aux_sym__line_token1,
    ACTIONS(440), 1,
      aux_sym__line_token2,
  [1921] = 2,
    ACTIONS(430), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      aux_sym__line_token1,
  [1928] = 2,
    ACTIONS(43), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 1,
      sym_nunjucks_expression,
  [1935] = 1,
    ACTIONS(372), 2,
      aux_sym__line_token1,
      anon_sym_PERCENT_RBRACE,
  [1940] = 1,
    ACTIONS(416), 2,
      aux_sym__line_token2,
      anon_sym_COLON,
  [1945] = 1,
    ACTIONS(251), 1,
      aux_sym__line_token2,
  [1949] = 1,
    ACTIONS(426), 1,
      aux_sym__line_token2,
  [1953] = 1,
    ACTIONS(402), 1,
      aux_sym__line_token2,
  [1957] = 1,
    ACTIONS(444), 1,
      aux_sym_nunjucks_comment_token1,
  [1961] = 1,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
  [1965] = 1,
    ACTIONS(446), 1,
      aux_sym__line_token2,
  [1969] = 1,
    ACTIONS(448), 1,
      anon_sym_COLON,
  [1973] = 1,
    ACTIONS(390), 1,
      aux_sym__line_token2,
  [1977] = 1,
    ACTIONS(424), 1,
      aux_sym__line_token2,
  [1981] = 1,
    ACTIONS(450), 1,
      aux_sym__line_token1,
  [1985] = 1,
    ACTIONS(420), 1,
      aux_sym__line_token2,
  [1989] = 1,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
  [1993] = 1,
    ACTIONS(394), 1,
      aux_sym__line_token2,
  [1997] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [2001] = 1,
    ACTIONS(454), 1,
      aux_sym__line_token2,
  [2005] = 1,
    ACTIONS(456), 1,
      anon_sym_RBRACE_RBRACE,
  [2009] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
  [2013] = 1,
    ACTIONS(458), 1,
      aux_sym__line_token2,
  [2017] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [2021] = 1,
    ACTIONS(374), 1,
      aux_sym__line_token2,
  [2025] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
  [2029] = 1,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
  [2033] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [2037] = 1,
    ACTIONS(378), 1,
      aux_sym__line_token2,
  [2041] = 1,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
  [2045] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
  [2049] = 1,
    ACTIONS(466), 1,
      aux_sym__line_token2,
  [2053] = 1,
    ACTIONS(468), 1,
      aux_sym__line_token2,
  [2057] = 1,
    ACTIONS(470), 1,
      aux_sym__line_token2,
  [2061] = 1,
    ACTIONS(386), 1,
      aux_sym__line_token2,
  [2065] = 1,
    ACTIONS(382), 1,
      aux_sym__line_token2,
  [2069] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
  [2073] = 1,
    ACTIONS(472), 1,
      anon_sym_RBRACE_RBRACE,
  [2077] = 1,
    ACTIONS(474), 1,
      sym__expr_content,
  [2081] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
  [2085] = 1,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
  [2089] = 1,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
  [2093] = 1,
    ACTIONS(406), 1,
      aux_sym__line_token2,
  [2097] = 1,
    ACTIONS(480), 1,
      aux_sym__line_token2,
  [2101] = 1,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
  [2105] = 1,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [2109] = 1,
    ACTIONS(484), 1,
      ts_builtin_sym_end,
  [2113] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [2117] = 1,
    ACTIONS(486), 1,
      aux_sym__line_token2,
  [2121] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
  [2125] = 1,
    ACTIONS(488), 1,
      aux_sym__line_token2,
  [2129] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
  [2133] = 1,
    ACTIONS(430), 1,
      anon_sym_COLON,
  [2137] = 1,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
  [2141] = 1,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
  [2145] = 1,
    ACTIONS(494), 1,
      anon_sym_RBRACE_RBRACE,
  [2149] = 1,
    ACTIONS(496), 1,
      anon_sym_RBRACE_RBRACE,
  [2153] = 1,
    ACTIONS(498), 1,
      sym__expr_content,
  [2157] = 1,
    ACTIONS(442), 1,
      aux_sym__line_token1,
  [2161] = 1,
    ACTIONS(500), 1,
      sym__expr_content,
  [2165] = 1,
    ACTIONS(502), 1,
      aux_sym__line_token1,
  [2169] = 1,
    ACTIONS(504), 1,
      sym__expr_content,
  [2173] = 1,
    ACTIONS(506), 1,
      sym__expr_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 209,
  [SMALL_STATE(8)] = 246,
  [SMALL_STATE(9)] = 296,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 394,
  [SMALL_STATE(12)] = 433,
  [SMALL_STATE(13)] = 469,
  [SMALL_STATE(14)] = 505,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 574,
  [SMALL_STATE(17)] = 607,
  [SMALL_STATE(18)] = 644,
  [SMALL_STATE(19)] = 677,
  [SMALL_STATE(20)] = 707,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 753,
  [SMALL_STATE(23)] = 769,
  [SMALL_STATE(24)] = 791,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 835,
  [SMALL_STATE(27)] = 852,
  [SMALL_STATE(28)] = 869,
  [SMALL_STATE(29)] = 886,
  [SMALL_STATE(30)] = 903,
  [SMALL_STATE(31)] = 920,
  [SMALL_STATE(32)] = 937,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 971,
  [SMALL_STATE(35)] = 988,
  [SMALL_STATE(36)] = 1005,
  [SMALL_STATE(37)] = 1022,
  [SMALL_STATE(38)] = 1039,
  [SMALL_STATE(39)] = 1056,
  [SMALL_STATE(40)] = 1073,
  [SMALL_STATE(41)] = 1087,
  [SMALL_STATE(42)] = 1101,
  [SMALL_STATE(43)] = 1111,
  [SMALL_STATE(44)] = 1125,
  [SMALL_STATE(45)] = 1139,
  [SMALL_STATE(46)] = 1153,
  [SMALL_STATE(47)] = 1166,
  [SMALL_STATE(48)] = 1179,
  [SMALL_STATE(49)] = 1192,
  [SMALL_STATE(50)] = 1205,
  [SMALL_STATE(51)] = 1218,
  [SMALL_STATE(52)] = 1231,
  [SMALL_STATE(53)] = 1244,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1270,
  [SMALL_STATE(56)] = 1283,
  [SMALL_STATE(57)] = 1296,
  [SMALL_STATE(58)] = 1309,
  [SMALL_STATE(59)] = 1322,
  [SMALL_STATE(60)] = 1335,
  [SMALL_STATE(61)] = 1348,
  [SMALL_STATE(62)] = 1361,
  [SMALL_STATE(63)] = 1370,
  [SMALL_STATE(64)] = 1383,
  [SMALL_STATE(65)] = 1396,
  [SMALL_STATE(66)] = 1409,
  [SMALL_STATE(67)] = 1422,
  [SMALL_STATE(68)] = 1435,
  [SMALL_STATE(69)] = 1448,
  [SMALL_STATE(70)] = 1461,
  [SMALL_STATE(71)] = 1474,
  [SMALL_STATE(72)] = 1487,
  [SMALL_STATE(73)] = 1500,
  [SMALL_STATE(74)] = 1513,
  [SMALL_STATE(75)] = 1526,
  [SMALL_STATE(76)] = 1539,
  [SMALL_STATE(77)] = 1549,
  [SMALL_STATE(78)] = 1557,
  [SMALL_STATE(79)] = 1567,
  [SMALL_STATE(80)] = 1575,
  [SMALL_STATE(81)] = 1585,
  [SMALL_STATE(82)] = 1595,
  [SMALL_STATE(83)] = 1605,
  [SMALL_STATE(84)] = 1615,
  [SMALL_STATE(85)] = 1625,
  [SMALL_STATE(86)] = 1635,
  [SMALL_STATE(87)] = 1643,
  [SMALL_STATE(88)] = 1651,
  [SMALL_STATE(89)] = 1659,
  [SMALL_STATE(90)] = 1667,
  [SMALL_STATE(91)] = 1675,
  [SMALL_STATE(92)] = 1683,
  [SMALL_STATE(93)] = 1691,
  [SMALL_STATE(94)] = 1699,
  [SMALL_STATE(95)] = 1707,
  [SMALL_STATE(96)] = 1715,
  [SMALL_STATE(97)] = 1723,
  [SMALL_STATE(98)] = 1731,
  [SMALL_STATE(99)] = 1739,
  [SMALL_STATE(100)] = 1747,
  [SMALL_STATE(101)] = 1755,
  [SMALL_STATE(102)] = 1763,
  [SMALL_STATE(103)] = 1771,
  [SMALL_STATE(104)] = 1779,
  [SMALL_STATE(105)] = 1787,
  [SMALL_STATE(106)] = 1795,
  [SMALL_STATE(107)] = 1803,
  [SMALL_STATE(108)] = 1811,
  [SMALL_STATE(109)] = 1819,
  [SMALL_STATE(110)] = 1827,
  [SMALL_STATE(111)] = 1835,
  [SMALL_STATE(112)] = 1843,
  [SMALL_STATE(113)] = 1851,
  [SMALL_STATE(114)] = 1859,
  [SMALL_STATE(115)] = 1867,
  [SMALL_STATE(116)] = 1875,
  [SMALL_STATE(117)] = 1883,
  [SMALL_STATE(118)] = 1888,
  [SMALL_STATE(119)] = 1895,
  [SMALL_STATE(120)] = 1902,
  [SMALL_STATE(121)] = 1907,
  [SMALL_STATE(122)] = 1914,
  [SMALL_STATE(123)] = 1921,
  [SMALL_STATE(124)] = 1928,
  [SMALL_STATE(125)] = 1935,
  [SMALL_STATE(126)] = 1940,
  [SMALL_STATE(127)] = 1945,
  [SMALL_STATE(128)] = 1949,
  [SMALL_STATE(129)] = 1953,
  [SMALL_STATE(130)] = 1957,
  [SMALL_STATE(131)] = 1961,
  [SMALL_STATE(132)] = 1965,
  [SMALL_STATE(133)] = 1969,
  [SMALL_STATE(134)] = 1973,
  [SMALL_STATE(135)] = 1977,
  [SMALL_STATE(136)] = 1981,
  [SMALL_STATE(137)] = 1985,
  [SMALL_STATE(138)] = 1989,
  [SMALL_STATE(139)] = 1993,
  [SMALL_STATE(140)] = 1997,
  [SMALL_STATE(141)] = 2001,
  [SMALL_STATE(142)] = 2005,
  [SMALL_STATE(143)] = 2009,
  [SMALL_STATE(144)] = 2013,
  [SMALL_STATE(145)] = 2017,
  [SMALL_STATE(146)] = 2021,
  [SMALL_STATE(147)] = 2025,
  [SMALL_STATE(148)] = 2029,
  [SMALL_STATE(149)] = 2033,
  [SMALL_STATE(150)] = 2037,
  [SMALL_STATE(151)] = 2041,
  [SMALL_STATE(152)] = 2045,
  [SMALL_STATE(153)] = 2049,
  [SMALL_STATE(154)] = 2053,
  [SMALL_STATE(155)] = 2057,
  [SMALL_STATE(156)] = 2061,
  [SMALL_STATE(157)] = 2065,
  [SMALL_STATE(158)] = 2069,
  [SMALL_STATE(159)] = 2073,
  [SMALL_STATE(160)] = 2077,
  [SMALL_STATE(161)] = 2081,
  [SMALL_STATE(162)] = 2085,
  [SMALL_STATE(163)] = 2089,
  [SMALL_STATE(164)] = 2093,
  [SMALL_STATE(165)] = 2097,
  [SMALL_STATE(166)] = 2101,
  [SMALL_STATE(167)] = 2105,
  [SMALL_STATE(168)] = 2109,
  [SMALL_STATE(169)] = 2113,
  [SMALL_STATE(170)] = 2117,
  [SMALL_STATE(171)] = 2121,
  [SMALL_STATE(172)] = 2125,
  [SMALL_STATE(173)] = 2129,
  [SMALL_STATE(174)] = 2133,
  [SMALL_STATE(175)] = 2137,
  [SMALL_STATE(176)] = 2141,
  [SMALL_STATE(177)] = 2145,
  [SMALL_STATE(178)] = 2149,
  [SMALL_STATE(179)] = 2153,
  [SMALL_STATE(180)] = 2157,
  [SMALL_STATE(181)] = 2161,
  [SMALL_STATE(182)] = 2165,
  [SMALL_STATE(183)] = 2169,
  [SMALL_STATE(184)] = 2173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(130),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(174),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(170),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(160),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(179),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(37),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_quoted_string_repeat2, 2), SHIFT_REPEAT(37),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(181),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_yaml_mixed_repeat1, 2), SHIFT_REPEAT(40),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_expression, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_value, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_mixed, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_flow_mapping_repeat1, 2), SHIFT_REPEAT(121),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2), SHIFT_REPEAT(20),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_yaml_flow_sequence_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_pair, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_rest, 2), SHIFT_REPEAT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_rest, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 6),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 6),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 6),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 5),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 5),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 4),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_pair, 4),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_pair, 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_quoted_string, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_quoted_string, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_quoted_string, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_quoted_string, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_sequence, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_sequence, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_yaml_flow_mapping, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_flow_mapping, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cf_intrinsic, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cf_intrinsic, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_key, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_keyword, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_pair, 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yaml_list_item, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [484] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
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
