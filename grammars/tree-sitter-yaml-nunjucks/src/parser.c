#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 153
#define EXTERNAL_TOKEN_COUNT 113
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE_PERCENT = 1,
  aux_sym_nunjucks_statement_token1 = 2,
  aux_sym_nunjucks_statement_token2 = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_if = 5,
  anon_sym_elif = 6,
  anon_sym_else = 7,
  anon_sym_endif = 8,
  anon_sym_for = 9,
  anon_sym_in = 10,
  anon_sym_endfor = 11,
  anon_sym_set = 12,
  anon_sym_block = 13,
  anon_sym_endblock = 14,
  anon_sym_macro = 15,
  anon_sym_endmacro = 16,
  anon_sym_call = 17,
  anon_sym_endcall = 18,
  anon_sym_filter = 19,
  anon_sym_endfilter = 20,
  anon_sym_raw = 21,
  anon_sym_endraw = 22,
  anon_sym_extends = 23,
  anon_sym_include = 24,
  anon_sym_import = 25,
  anon_sym_from = 26,
  anon_sym_with = 27,
  anon_sym_without = 28,
  anon_sym_context = 29,
  anon_sym_not = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_is = 33,
  anon_sym_LBRACE_LBRACE = 34,
  aux_sym_nunjucks_expression_token1 = 35,
  anon_sym_RBRACE_RBRACE = 36,
  anon_sym_LBRACE_POUND = 37,
  aux_sym_nunjucks_comment_token1 = 38,
  anon_sym_POUND_RBRACE = 39,
  sym__eof = 40,
  sym__s_dir_yml_bgn = 41,
  sym__r_dir_yml_ver = 42,
  sym__s_dir_tag_bgn = 43,
  sym__r_dir_tag_hdl = 44,
  sym__r_dir_tag_pfx = 45,
  sym__s_dir_rsv_bgn = 46,
  sym__r_dir_rsv_prm = 47,
  sym__s_drs_end = 48,
  sym__s_doc_end = 49,
  sym__r_blk_seq_bgn = 50,
  sym__br_blk_seq_bgn = 51,
  sym__b_blk_seq_bgn = 52,
  sym__r_blk_key_bgn = 53,
  sym__br_blk_key_bgn = 54,
  sym__b_blk_key_bgn = 55,
  sym__r_blk_val_bgn = 56,
  sym__br_blk_val_bgn = 57,
  sym__b_blk_val_bgn = 58,
  sym__r_blk_imp_bgn = 59,
  sym__r_blk_lit_bgn = 60,
  sym__br_blk_lit_bgn = 61,
  sym__r_blk_fld_bgn = 62,
  sym__br_blk_fld_bgn = 63,
  sym__br_blk_str_ctn = 64,
  sym__r_flw_seq_bgn = 65,
  sym__br_flw_seq_bgn = 66,
  sym__b_flw_seq_bgn = 67,
  sym__r_flw_seq_end = 68,
  sym__br_flw_seq_end = 69,
  sym__b_flw_seq_end = 70,
  sym__r_flw_map_bgn = 71,
  sym__br_flw_map_bgn = 72,
  sym__b_flw_map_bgn = 73,
  sym__r_flw_map_end = 74,
  sym__br_flw_map_end = 75,
  sym__b_flw_map_end = 76,
  sym__r_flw_sep_bgn = 77,
  sym__br_flw_sep_bgn = 78,
  sym__r_flw_key_bgn = 79,
  sym__br_flw_key_bgn = 80,
  sym__r_flw_jsv_bgn = 81,
  sym__br_flw_jsv_bgn = 82,
  sym__r_flw_njv_bgn = 83,
  sym__br_flw_njv_bgn = 84,
  sym__r_dqt_str_bgn = 85,
  sym__br_dqt_str_bgn = 86,
  sym__b_dqt_str_bgn = 87,
  sym__r_dqt_str_ctn = 88,
  sym__br_dqt_str_ctn = 89,
  sym__r_dqt_esc_nwl = 90,
  sym__br_dqt_esc_nwl = 91,
  sym__r_dqt_esc_seq = 92,
  sym__br_dqt_esc_seq = 93,
  sym__r_dqt_str_end = 94,
  sym__br_dqt_str_end = 95,
  sym__r_sqt_str_bgn = 96,
  sym__br_sqt_str_bgn = 97,
  sym__b_sqt_str_bgn = 98,
  sym__r_sqt_str_ctn = 99,
  sym__br_sqt_str_ctn = 100,
  sym__r_sqt_esc_sqt = 101,
  sym__br_sqt_esc_sqt = 102,
  sym__r_sqt_str_end = 103,
  sym__br_sqt_str_end = 104,
  sym__r_sgl_pln_nul_blk = 105,
  sym__br_sgl_pln_nul_blk = 106,
  sym__b_sgl_pln_nul_blk = 107,
  sym__r_sgl_pln_nul_flw = 108,
  sym__br_sgl_pln_nul_flw = 109,
  sym__r_sgl_pln_bol_blk = 110,
  sym__br_sgl_pln_bol_blk = 111,
  sym__b_sgl_pln_bol_blk = 112,
  sym__r_sgl_pln_bol_flw = 113,
  sym__br_sgl_pln_bol_flw = 114,
  sym__r_sgl_pln_int_blk = 115,
  sym__br_sgl_pln_int_blk = 116,
  sym__b_sgl_pln_int_blk = 117,
  sym__r_sgl_pln_int_flw = 118,
  sym__br_sgl_pln_int_flw = 119,
  sym__r_sgl_pln_flt_blk = 120,
  sym__br_sgl_pln_flt_blk = 121,
  sym__b_sgl_pln_flt_blk = 122,
  sym__r_sgl_pln_flt_flw = 123,
  sym__br_sgl_pln_flt_flw = 124,
  sym__r_sgl_pln_tms_blk = 125,
  sym__br_sgl_pln_tms_blk = 126,
  sym__b_sgl_pln_tms_blk = 127,
  sym__r_sgl_pln_tms_flw = 128,
  sym__br_sgl_pln_tms_flw = 129,
  sym__r_sgl_pln_str_blk = 130,
  sym__br_sgl_pln_str_blk = 131,
  sym__b_sgl_pln_str_blk = 132,
  sym__r_sgl_pln_str_flw = 133,
  sym__br_sgl_pln_str_flw = 134,
  sym__r_mtl_pln_str_blk = 135,
  sym__br_mtl_pln_str_blk = 136,
  sym__r_mtl_pln_str_flw = 137,
  sym__br_mtl_pln_str_flw = 138,
  sym__r_tag = 139,
  sym__br_tag = 140,
  sym__b_tag = 141,
  sym__r_acr_bgn = 142,
  sym__br_acr_bgn = 143,
  sym__b_acr_bgn = 144,
  sym__r_acr_ctn = 145,
  sym__r_als_bgn = 146,
  sym__br_als_bgn = 147,
  sym__b_als_bgn = 148,
  sym__r_als_ctn = 149,
  sym__bl = 150,
  sym_comment = 151,
  sym__err_rec = 152,
  sym_nunjucks_statement = 153,
  sym_nunjucks_keyword = 154,
  sym_nunjucks_expression = 155,
  sym_nunjucks_comment = 156,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [aux_sym_nunjucks_statement_token1] = "nunjucks_statement_token1",
  [aux_sym_nunjucks_statement_token2] = "nunjucks_statement_token2",
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
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_nunjucks_expression_token1] = "nunjucks_expression_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_nunjucks_comment_token1] = "nunjucks_comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [sym__eof] = "_eof",
  [sym__s_dir_yml_bgn] = "_s_dir_yml_bgn",
  [sym__r_dir_yml_ver] = "yaml_version",
  [sym__s_dir_tag_bgn] = "_s_dir_tag_bgn",
  [sym__r_dir_tag_hdl] = "tag_handle",
  [sym__r_dir_tag_pfx] = "tag_prefix",
  [sym__s_dir_rsv_bgn] = "directive_name",
  [sym__r_dir_rsv_prm] = "directive_parameter",
  [sym__s_drs_end] = "---",
  [sym__s_doc_end] = "...",
  [sym__r_blk_seq_bgn] = "-",
  [sym__br_blk_seq_bgn] = "-",
  [sym__b_blk_seq_bgn] = "-",
  [sym__r_blk_key_bgn] = "\?",
  [sym__br_blk_key_bgn] = "\?",
  [sym__b_blk_key_bgn] = "\?",
  [sym__r_blk_val_bgn] = ":",
  [sym__br_blk_val_bgn] = ":",
  [sym__b_blk_val_bgn] = ":",
  [sym__r_blk_imp_bgn] = ":",
  [sym__r_blk_lit_bgn] = "|",
  [sym__br_blk_lit_bgn] = "|",
  [sym__r_blk_fld_bgn] = ">",
  [sym__br_blk_fld_bgn] = ">",
  [sym__br_blk_str_ctn] = "_br_blk_str_ctn",
  [sym__r_flw_seq_bgn] = "[",
  [sym__br_flw_seq_bgn] = "[",
  [sym__b_flw_seq_bgn] = "[",
  [sym__r_flw_seq_end] = "]",
  [sym__br_flw_seq_end] = "]",
  [sym__b_flw_seq_end] = "]",
  [sym__r_flw_map_bgn] = "{",
  [sym__br_flw_map_bgn] = "{",
  [sym__b_flw_map_bgn] = "{",
  [sym__r_flw_map_end] = "}",
  [sym__br_flw_map_end] = "}",
  [sym__b_flw_map_end] = "}",
  [sym__r_flw_sep_bgn] = ",",
  [sym__br_flw_sep_bgn] = ",",
  [sym__r_flw_key_bgn] = "\?",
  [sym__br_flw_key_bgn] = "\?",
  [sym__r_flw_jsv_bgn] = ":",
  [sym__br_flw_jsv_bgn] = ":",
  [sym__r_flw_njv_bgn] = ":",
  [sym__br_flw_njv_bgn] = ":",
  [sym__r_dqt_str_bgn] = "\"",
  [sym__br_dqt_str_bgn] = "\"",
  [sym__b_dqt_str_bgn] = "\"",
  [sym__r_dqt_str_ctn] = "_r_dqt_str_ctn",
  [sym__br_dqt_str_ctn] = "_br_dqt_str_ctn",
  [sym__r_dqt_esc_nwl] = "escape_sequence",
  [sym__br_dqt_esc_nwl] = "escape_sequence",
  [sym__r_dqt_esc_seq] = "escape_sequence",
  [sym__br_dqt_esc_seq] = "escape_sequence",
  [sym__r_dqt_str_end] = "\"",
  [sym__br_dqt_str_end] = "\"",
  [sym__r_sqt_str_bgn] = "'",
  [sym__br_sqt_str_bgn] = "'",
  [sym__b_sqt_str_bgn] = "'",
  [sym__r_sqt_str_ctn] = "_r_sqt_str_ctn",
  [sym__br_sqt_str_ctn] = "_br_sqt_str_ctn",
  [sym__r_sqt_esc_sqt] = "escape_sequence",
  [sym__br_sqt_esc_sqt] = "escape_sequence",
  [sym__r_sqt_str_end] = "'",
  [sym__br_sqt_str_end] = "'",
  [sym__r_sgl_pln_nul_blk] = "null_scalar",
  [sym__br_sgl_pln_nul_blk] = "null_scalar",
  [sym__b_sgl_pln_nul_blk] = "null_scalar",
  [sym__r_sgl_pln_nul_flw] = "null_scalar",
  [sym__br_sgl_pln_nul_flw] = "null_scalar",
  [sym__r_sgl_pln_bol_blk] = "boolean_scalar",
  [sym__br_sgl_pln_bol_blk] = "boolean_scalar",
  [sym__b_sgl_pln_bol_blk] = "boolean_scalar",
  [sym__r_sgl_pln_bol_flw] = "boolean_scalar",
  [sym__br_sgl_pln_bol_flw] = "boolean_scalar",
  [sym__r_sgl_pln_int_blk] = "integer_scalar",
  [sym__br_sgl_pln_int_blk] = "integer_scalar",
  [sym__b_sgl_pln_int_blk] = "integer_scalar",
  [sym__r_sgl_pln_int_flw] = "integer_scalar",
  [sym__br_sgl_pln_int_flw] = "integer_scalar",
  [sym__r_sgl_pln_flt_blk] = "float_scalar",
  [sym__br_sgl_pln_flt_blk] = "float_scalar",
  [sym__b_sgl_pln_flt_blk] = "float_scalar",
  [sym__r_sgl_pln_flt_flw] = "float_scalar",
  [sym__br_sgl_pln_flt_flw] = "float_scalar",
  [sym__r_sgl_pln_tms_blk] = "timestamp_scalar",
  [sym__br_sgl_pln_tms_blk] = "timestamp_scalar",
  [sym__b_sgl_pln_tms_blk] = "timestamp_scalar",
  [sym__r_sgl_pln_tms_flw] = "timestamp_scalar",
  [sym__br_sgl_pln_tms_flw] = "timestamp_scalar",
  [sym__r_sgl_pln_str_blk] = "string_scalar",
  [sym__br_sgl_pln_str_blk] = "string_scalar",
  [sym__b_sgl_pln_str_blk] = "string_scalar",
  [sym__r_sgl_pln_str_flw] = "string_scalar",
  [sym__br_sgl_pln_str_flw] = "string_scalar",
  [sym__r_mtl_pln_str_blk] = "string_scalar",
  [sym__br_mtl_pln_str_blk] = "string_scalar",
  [sym__r_mtl_pln_str_flw] = "string_scalar",
  [sym__br_mtl_pln_str_flw] = "string_scalar",
  [sym__r_tag] = "tag",
  [sym__br_tag] = "tag",
  [sym__b_tag] = "tag",
  [sym__r_acr_bgn] = "&",
  [sym__br_acr_bgn] = "&",
  [sym__b_acr_bgn] = "&",
  [sym__r_acr_ctn] = "anchor_name",
  [sym__r_als_bgn] = "*",
  [sym__br_als_bgn] = "*",
  [sym__b_als_bgn] = "*",
  [sym__r_als_ctn] = "alias_name",
  [sym__bl] = "_bl",
  [sym_comment] = "comment",
  [sym__err_rec] = "_err_rec",
  [sym_nunjucks_statement] = "nunjucks_statement",
  [sym_nunjucks_keyword] = "nunjucks_keyword",
  [sym_nunjucks_expression] = "nunjucks_expression",
  [sym_nunjucks_comment] = "nunjucks_comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [aux_sym_nunjucks_statement_token1] = aux_sym_nunjucks_statement_token1,
  [aux_sym_nunjucks_statement_token2] = aux_sym_nunjucks_statement_token2,
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
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_nunjucks_expression_token1] = aux_sym_nunjucks_expression_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_nunjucks_comment_token1] = aux_sym_nunjucks_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [sym__eof] = sym__eof,
  [sym__s_dir_yml_bgn] = sym__s_dir_yml_bgn,
  [sym__r_dir_yml_ver] = sym__r_dir_yml_ver,
  [sym__s_dir_tag_bgn] = sym__s_dir_tag_bgn,
  [sym__r_dir_tag_hdl] = sym__r_dir_tag_hdl,
  [sym__r_dir_tag_pfx] = sym__r_dir_tag_pfx,
  [sym__s_dir_rsv_bgn] = sym__s_dir_rsv_bgn,
  [sym__r_dir_rsv_prm] = sym__r_dir_rsv_prm,
  [sym__s_drs_end] = sym__s_drs_end,
  [sym__s_doc_end] = sym__s_doc_end,
  [sym__r_blk_seq_bgn] = sym__r_blk_seq_bgn,
  [sym__br_blk_seq_bgn] = sym__r_blk_seq_bgn,
  [sym__b_blk_seq_bgn] = sym__r_blk_seq_bgn,
  [sym__r_blk_key_bgn] = sym__r_blk_key_bgn,
  [sym__br_blk_key_bgn] = sym__r_blk_key_bgn,
  [sym__b_blk_key_bgn] = sym__r_blk_key_bgn,
  [sym__r_blk_val_bgn] = sym__r_blk_val_bgn,
  [sym__br_blk_val_bgn] = sym__r_blk_val_bgn,
  [sym__b_blk_val_bgn] = sym__r_blk_val_bgn,
  [sym__r_blk_imp_bgn] = sym__r_blk_val_bgn,
  [sym__r_blk_lit_bgn] = sym__r_blk_lit_bgn,
  [sym__br_blk_lit_bgn] = sym__r_blk_lit_bgn,
  [sym__r_blk_fld_bgn] = sym__r_blk_fld_bgn,
  [sym__br_blk_fld_bgn] = sym__r_blk_fld_bgn,
  [sym__br_blk_str_ctn] = sym__br_blk_str_ctn,
  [sym__r_flw_seq_bgn] = sym__r_flw_seq_bgn,
  [sym__br_flw_seq_bgn] = sym__r_flw_seq_bgn,
  [sym__b_flw_seq_bgn] = sym__r_flw_seq_bgn,
  [sym__r_flw_seq_end] = sym__r_flw_seq_end,
  [sym__br_flw_seq_end] = sym__r_flw_seq_end,
  [sym__b_flw_seq_end] = sym__r_flw_seq_end,
  [sym__r_flw_map_bgn] = sym__r_flw_map_bgn,
  [sym__br_flw_map_bgn] = sym__r_flw_map_bgn,
  [sym__b_flw_map_bgn] = sym__r_flw_map_bgn,
  [sym__r_flw_map_end] = sym__r_flw_map_end,
  [sym__br_flw_map_end] = sym__r_flw_map_end,
  [sym__b_flw_map_end] = sym__r_flw_map_end,
  [sym__r_flw_sep_bgn] = sym__r_flw_sep_bgn,
  [sym__br_flw_sep_bgn] = sym__r_flw_sep_bgn,
  [sym__r_flw_key_bgn] = sym__r_blk_key_bgn,
  [sym__br_flw_key_bgn] = sym__r_blk_key_bgn,
  [sym__r_flw_jsv_bgn] = sym__r_blk_val_bgn,
  [sym__br_flw_jsv_bgn] = sym__r_blk_val_bgn,
  [sym__r_flw_njv_bgn] = sym__r_blk_val_bgn,
  [sym__br_flw_njv_bgn] = sym__r_blk_val_bgn,
  [sym__r_dqt_str_bgn] = sym__r_dqt_str_bgn,
  [sym__br_dqt_str_bgn] = sym__r_dqt_str_bgn,
  [sym__b_dqt_str_bgn] = sym__r_dqt_str_bgn,
  [sym__r_dqt_str_ctn] = sym__r_dqt_str_ctn,
  [sym__br_dqt_str_ctn] = sym__br_dqt_str_ctn,
  [sym__r_dqt_esc_nwl] = sym__r_dqt_esc_nwl,
  [sym__br_dqt_esc_nwl] = sym__r_dqt_esc_nwl,
  [sym__r_dqt_esc_seq] = sym__r_dqt_esc_nwl,
  [sym__br_dqt_esc_seq] = sym__r_dqt_esc_nwl,
  [sym__r_dqt_str_end] = sym__r_dqt_str_bgn,
  [sym__br_dqt_str_end] = sym__r_dqt_str_bgn,
  [sym__r_sqt_str_bgn] = sym__r_sqt_str_bgn,
  [sym__br_sqt_str_bgn] = sym__r_sqt_str_bgn,
  [sym__b_sqt_str_bgn] = sym__r_sqt_str_bgn,
  [sym__r_sqt_str_ctn] = sym__r_sqt_str_ctn,
  [sym__br_sqt_str_ctn] = sym__br_sqt_str_ctn,
  [sym__r_sqt_esc_sqt] = sym__r_dqt_esc_nwl,
  [sym__br_sqt_esc_sqt] = sym__r_dqt_esc_nwl,
  [sym__r_sqt_str_end] = sym__r_sqt_str_bgn,
  [sym__br_sqt_str_end] = sym__r_sqt_str_bgn,
  [sym__r_sgl_pln_nul_blk] = sym__r_sgl_pln_nul_blk,
  [sym__br_sgl_pln_nul_blk] = sym__r_sgl_pln_nul_blk,
  [sym__b_sgl_pln_nul_blk] = sym__r_sgl_pln_nul_blk,
  [sym__r_sgl_pln_nul_flw] = sym__r_sgl_pln_nul_blk,
  [sym__br_sgl_pln_nul_flw] = sym__r_sgl_pln_nul_blk,
  [sym__r_sgl_pln_bol_blk] = sym__r_sgl_pln_bol_blk,
  [sym__br_sgl_pln_bol_blk] = sym__r_sgl_pln_bol_blk,
  [sym__b_sgl_pln_bol_blk] = sym__r_sgl_pln_bol_blk,
  [sym__r_sgl_pln_bol_flw] = sym__r_sgl_pln_bol_blk,
  [sym__br_sgl_pln_bol_flw] = sym__r_sgl_pln_bol_blk,
  [sym__r_sgl_pln_int_blk] = sym__r_sgl_pln_int_blk,
  [sym__br_sgl_pln_int_blk] = sym__r_sgl_pln_int_blk,
  [sym__b_sgl_pln_int_blk] = sym__r_sgl_pln_int_blk,
  [sym__r_sgl_pln_int_flw] = sym__r_sgl_pln_int_blk,
  [sym__br_sgl_pln_int_flw] = sym__r_sgl_pln_int_blk,
  [sym__r_sgl_pln_flt_blk] = sym__r_sgl_pln_flt_blk,
  [sym__br_sgl_pln_flt_blk] = sym__r_sgl_pln_flt_blk,
  [sym__b_sgl_pln_flt_blk] = sym__r_sgl_pln_flt_blk,
  [sym__r_sgl_pln_flt_flw] = sym__r_sgl_pln_flt_blk,
  [sym__br_sgl_pln_flt_flw] = sym__r_sgl_pln_flt_blk,
  [sym__r_sgl_pln_tms_blk] = sym__r_sgl_pln_tms_blk,
  [sym__br_sgl_pln_tms_blk] = sym__r_sgl_pln_tms_blk,
  [sym__b_sgl_pln_tms_blk] = sym__r_sgl_pln_tms_blk,
  [sym__r_sgl_pln_tms_flw] = sym__r_sgl_pln_tms_blk,
  [sym__br_sgl_pln_tms_flw] = sym__r_sgl_pln_tms_blk,
  [sym__r_sgl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [sym__br_sgl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [sym__b_sgl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [sym__r_sgl_pln_str_flw] = sym__r_sgl_pln_str_blk,
  [sym__br_sgl_pln_str_flw] = sym__r_sgl_pln_str_blk,
  [sym__r_mtl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [sym__br_mtl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [sym__r_mtl_pln_str_flw] = sym__r_sgl_pln_str_blk,
  [sym__br_mtl_pln_str_flw] = sym__r_sgl_pln_str_blk,
  [sym__r_tag] = sym__r_tag,
  [sym__br_tag] = sym__r_tag,
  [sym__b_tag] = sym__r_tag,
  [sym__r_acr_bgn] = sym__r_acr_bgn,
  [sym__br_acr_bgn] = sym__r_acr_bgn,
  [sym__b_acr_bgn] = sym__r_acr_bgn,
  [sym__r_acr_ctn] = sym__r_acr_ctn,
  [sym__r_als_bgn] = sym__r_als_bgn,
  [sym__br_als_bgn] = sym__r_als_bgn,
  [sym__b_als_bgn] = sym__r_als_bgn,
  [sym__r_als_ctn] = sym__r_als_ctn,
  [sym__bl] = sym__bl,
  [sym_comment] = sym_comment,
  [sym__err_rec] = sym__err_rec,
  [sym_nunjucks_statement] = sym_nunjucks_statement,
  [sym_nunjucks_keyword] = sym_nunjucks_keyword,
  [sym_nunjucks_expression] = sym_nunjucks_expression,
  [sym_nunjucks_comment] = sym_nunjucks_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_nunjucks_statement_token2] = {
    .visible = false,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nunjucks_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_nunjucks_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__s_dir_yml_bgn] = {
    .visible = false,
    .named = true,
  },
  [sym__r_dir_yml_ver] = {
    .visible = true,
    .named = true,
  },
  [sym__s_dir_tag_bgn] = {
    .visible = false,
    .named = true,
  },
  [sym__r_dir_tag_hdl] = {
    .visible = true,
    .named = true,
  },
  [sym__r_dir_tag_pfx] = {
    .visible = true,
    .named = true,
  },
  [sym__s_dir_rsv_bgn] = {
    .visible = true,
    .named = true,
  },
  [sym__r_dir_rsv_prm] = {
    .visible = true,
    .named = true,
  },
  [sym__s_drs_end] = {
    .visible = true,
    .named = false,
  },
  [sym__s_doc_end] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_blk_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_key_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_key_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_blk_key_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_val_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_val_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_blk_val_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_imp_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_lit_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_lit_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_blk_fld_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_fld_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_blk_str_ctn] = {
    .visible = false,
    .named = true,
  },
  [sym__r_flw_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_flw_seq_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_seq_end] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_seq_end] = {
    .visible = true,
    .named = false,
  },
  [sym__b_flw_seq_end] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_map_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_map_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_flw_map_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_map_end] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_map_end] = {
    .visible = true,
    .named = false,
  },
  [sym__b_flw_map_end] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_sep_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_sep_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_key_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_key_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_jsv_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_jsv_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_flw_njv_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_flw_njv_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_dqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_dqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_dqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_dqt_str_ctn] = {
    .visible = false,
    .named = true,
  },
  [sym__br_dqt_str_ctn] = {
    .visible = false,
    .named = true,
  },
  [sym__r_dqt_esc_nwl] = {
    .visible = true,
    .named = true,
  },
  [sym__br_dqt_esc_nwl] = {
    .visible = true,
    .named = true,
  },
  [sym__r_dqt_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__br_dqt_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__r_dqt_str_end] = {
    .visible = true,
    .named = false,
  },
  [sym__br_dqt_str_end] = {
    .visible = true,
    .named = false,
  },
  [sym__r_sqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_sqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_sqt_str_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_sqt_str_ctn] = {
    .visible = false,
    .named = true,
  },
  [sym__br_sqt_str_ctn] = {
    .visible = false,
    .named = true,
  },
  [sym__r_sqt_esc_sqt] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sqt_esc_sqt] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sqt_str_end] = {
    .visible = true,
    .named = false,
  },
  [sym__br_sqt_str_end] = {
    .visible = true,
    .named = false,
  },
  [sym__r_sgl_pln_nul_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_nul_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_nul_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_nul_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_nul_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_bol_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_bol_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_bol_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_bol_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_bol_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_int_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_int_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_int_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_int_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_int_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_flt_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_flt_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_flt_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_flt_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_flt_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_tms_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_tms_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_tms_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_tms_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_tms_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_str_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_str_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__b_sgl_pln_str_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_sgl_pln_str_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_sgl_pln_str_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_mtl_pln_str_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__br_mtl_pln_str_blk] = {
    .visible = true,
    .named = true,
  },
  [sym__r_mtl_pln_str_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__br_mtl_pln_str_flw] = {
    .visible = true,
    .named = true,
  },
  [sym__r_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__br_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__b_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__r_acr_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_acr_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_acr_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_acr_ctn] = {
    .visible = true,
    .named = true,
  },
  [sym__r_als_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__br_als_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__b_als_bgn] = {
    .visible = true,
    .named = false,
  },
  [sym__r_als_ctn] = {
    .visible = true,
    .named = true,
  },
  [sym__bl] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__err_rec] = {
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
  [sym_nunjucks_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_nunjucks_comment] = {
    .visible = true,
    .named = true,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 7,
  [16] = 12,
  [17] = 17,
  [18] = 11,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 13,
  [24] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (eof) ADVANCE(87);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '{') ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(107);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(72);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(115);
      END_STATE();
    case 80:
      if (lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 82:
      if (lookahead == '}') ADVANCE(139);
      END_STATE();
    case 83:
      if (lookahead == '}') ADVANCE(132);
      END_STATE();
    case 84:
      if (lookahead == '}') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '}') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_nunjucks_statement_token2);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_with);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_without);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_context);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_nunjucks_expression_token1);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_nunjucks_expression_token1);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '{') ADVANCE(138);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_nunjucks_comment_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '%') ADVANCE(89);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 91, .external_lex_state = 2},
  [5] = {.lex_state = 91, .external_lex_state = 2},
  [6] = {.lex_state = 91, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 136, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 92, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 92, .external_lex_state = 2},
  [18] = {.lex_state = 92, .external_lex_state = 2},
  [19] = {.lex_state = 81, .external_lex_state = 2},
  [20] = {.lex_state = 92, .external_lex_state = 2},
  [21] = {(TSStateId)(-1)},
  [22] = {(TSStateId)(-1)},
  [23] = {(TSStateId)(-1)},
  [24] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__eof = 0,
  ts_external_token__s_dir_yml_bgn = 1,
  ts_external_token__r_dir_yml_ver = 2,
  ts_external_token__s_dir_tag_bgn = 3,
  ts_external_token__r_dir_tag_hdl = 4,
  ts_external_token__r_dir_tag_pfx = 5,
  ts_external_token__s_dir_rsv_bgn = 6,
  ts_external_token__r_dir_rsv_prm = 7,
  ts_external_token__s_drs_end = 8,
  ts_external_token__s_doc_end = 9,
  ts_external_token__r_blk_seq_bgn = 10,
  ts_external_token__br_blk_seq_bgn = 11,
  ts_external_token__b_blk_seq_bgn = 12,
  ts_external_token__r_blk_key_bgn = 13,
  ts_external_token__br_blk_key_bgn = 14,
  ts_external_token__b_blk_key_bgn = 15,
  ts_external_token__r_blk_val_bgn = 16,
  ts_external_token__br_blk_val_bgn = 17,
  ts_external_token__b_blk_val_bgn = 18,
  ts_external_token__r_blk_imp_bgn = 19,
  ts_external_token__r_blk_lit_bgn = 20,
  ts_external_token__br_blk_lit_bgn = 21,
  ts_external_token__r_blk_fld_bgn = 22,
  ts_external_token__br_blk_fld_bgn = 23,
  ts_external_token__br_blk_str_ctn = 24,
  ts_external_token__r_flw_seq_bgn = 25,
  ts_external_token__br_flw_seq_bgn = 26,
  ts_external_token__b_flw_seq_bgn = 27,
  ts_external_token__r_flw_seq_end = 28,
  ts_external_token__br_flw_seq_end = 29,
  ts_external_token__b_flw_seq_end = 30,
  ts_external_token__r_flw_map_bgn = 31,
  ts_external_token__br_flw_map_bgn = 32,
  ts_external_token__b_flw_map_bgn = 33,
  ts_external_token__r_flw_map_end = 34,
  ts_external_token__br_flw_map_end = 35,
  ts_external_token__b_flw_map_end = 36,
  ts_external_token__r_flw_sep_bgn = 37,
  ts_external_token__br_flw_sep_bgn = 38,
  ts_external_token__r_flw_key_bgn = 39,
  ts_external_token__br_flw_key_bgn = 40,
  ts_external_token__r_flw_jsv_bgn = 41,
  ts_external_token__br_flw_jsv_bgn = 42,
  ts_external_token__r_flw_njv_bgn = 43,
  ts_external_token__br_flw_njv_bgn = 44,
  ts_external_token__r_dqt_str_bgn = 45,
  ts_external_token__br_dqt_str_bgn = 46,
  ts_external_token__b_dqt_str_bgn = 47,
  ts_external_token__r_dqt_str_ctn = 48,
  ts_external_token__br_dqt_str_ctn = 49,
  ts_external_token__r_dqt_esc_nwl = 50,
  ts_external_token__br_dqt_esc_nwl = 51,
  ts_external_token__r_dqt_esc_seq = 52,
  ts_external_token__br_dqt_esc_seq = 53,
  ts_external_token__r_dqt_str_end = 54,
  ts_external_token__br_dqt_str_end = 55,
  ts_external_token__r_sqt_str_bgn = 56,
  ts_external_token__br_sqt_str_bgn = 57,
  ts_external_token__b_sqt_str_bgn = 58,
  ts_external_token__r_sqt_str_ctn = 59,
  ts_external_token__br_sqt_str_ctn = 60,
  ts_external_token__r_sqt_esc_sqt = 61,
  ts_external_token__br_sqt_esc_sqt = 62,
  ts_external_token__r_sqt_str_end = 63,
  ts_external_token__br_sqt_str_end = 64,
  ts_external_token__r_sgl_pln_nul_blk = 65,
  ts_external_token__br_sgl_pln_nul_blk = 66,
  ts_external_token__b_sgl_pln_nul_blk = 67,
  ts_external_token__r_sgl_pln_nul_flw = 68,
  ts_external_token__br_sgl_pln_nul_flw = 69,
  ts_external_token__r_sgl_pln_bol_blk = 70,
  ts_external_token__br_sgl_pln_bol_blk = 71,
  ts_external_token__b_sgl_pln_bol_blk = 72,
  ts_external_token__r_sgl_pln_bol_flw = 73,
  ts_external_token__br_sgl_pln_bol_flw = 74,
  ts_external_token__r_sgl_pln_int_blk = 75,
  ts_external_token__br_sgl_pln_int_blk = 76,
  ts_external_token__b_sgl_pln_int_blk = 77,
  ts_external_token__r_sgl_pln_int_flw = 78,
  ts_external_token__br_sgl_pln_int_flw = 79,
  ts_external_token__r_sgl_pln_flt_blk = 80,
  ts_external_token__br_sgl_pln_flt_blk = 81,
  ts_external_token__b_sgl_pln_flt_blk = 82,
  ts_external_token__r_sgl_pln_flt_flw = 83,
  ts_external_token__br_sgl_pln_flt_flw = 84,
  ts_external_token__r_sgl_pln_tms_blk = 85,
  ts_external_token__br_sgl_pln_tms_blk = 86,
  ts_external_token__b_sgl_pln_tms_blk = 87,
  ts_external_token__r_sgl_pln_tms_flw = 88,
  ts_external_token__br_sgl_pln_tms_flw = 89,
  ts_external_token__r_sgl_pln_str_blk = 90,
  ts_external_token__br_sgl_pln_str_blk = 91,
  ts_external_token__b_sgl_pln_str_blk = 92,
  ts_external_token__r_sgl_pln_str_flw = 93,
  ts_external_token__br_sgl_pln_str_flw = 94,
  ts_external_token__r_mtl_pln_str_blk = 95,
  ts_external_token__br_mtl_pln_str_blk = 96,
  ts_external_token__r_mtl_pln_str_flw = 97,
  ts_external_token__br_mtl_pln_str_flw = 98,
  ts_external_token__r_tag = 99,
  ts_external_token__br_tag = 100,
  ts_external_token__b_tag = 101,
  ts_external_token__r_acr_bgn = 102,
  ts_external_token__br_acr_bgn = 103,
  ts_external_token__b_acr_bgn = 104,
  ts_external_token__r_acr_ctn = 105,
  ts_external_token__r_als_bgn = 106,
  ts_external_token__br_als_bgn = 107,
  ts_external_token__b_als_bgn = 108,
  ts_external_token__r_als_ctn = 109,
  ts_external_token__bl = 110,
  ts_external_token_comment = 111,
  ts_external_token__err_rec = 112,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__s_dir_yml_bgn] = sym__s_dir_yml_bgn,
  [ts_external_token__r_dir_yml_ver] = sym__r_dir_yml_ver,
  [ts_external_token__s_dir_tag_bgn] = sym__s_dir_tag_bgn,
  [ts_external_token__r_dir_tag_hdl] = sym__r_dir_tag_hdl,
  [ts_external_token__r_dir_tag_pfx] = sym__r_dir_tag_pfx,
  [ts_external_token__s_dir_rsv_bgn] = sym__s_dir_rsv_bgn,
  [ts_external_token__r_dir_rsv_prm] = sym__r_dir_rsv_prm,
  [ts_external_token__s_drs_end] = sym__s_drs_end,
  [ts_external_token__s_doc_end] = sym__s_doc_end,
  [ts_external_token__r_blk_seq_bgn] = sym__r_blk_seq_bgn,
  [ts_external_token__br_blk_seq_bgn] = sym__br_blk_seq_bgn,
  [ts_external_token__b_blk_seq_bgn] = sym__b_blk_seq_bgn,
  [ts_external_token__r_blk_key_bgn] = sym__r_blk_key_bgn,
  [ts_external_token__br_blk_key_bgn] = sym__br_blk_key_bgn,
  [ts_external_token__b_blk_key_bgn] = sym__b_blk_key_bgn,
  [ts_external_token__r_blk_val_bgn] = sym__r_blk_val_bgn,
  [ts_external_token__br_blk_val_bgn] = sym__br_blk_val_bgn,
  [ts_external_token__b_blk_val_bgn] = sym__b_blk_val_bgn,
  [ts_external_token__r_blk_imp_bgn] = sym__r_blk_imp_bgn,
  [ts_external_token__r_blk_lit_bgn] = sym__r_blk_lit_bgn,
  [ts_external_token__br_blk_lit_bgn] = sym__br_blk_lit_bgn,
  [ts_external_token__r_blk_fld_bgn] = sym__r_blk_fld_bgn,
  [ts_external_token__br_blk_fld_bgn] = sym__br_blk_fld_bgn,
  [ts_external_token__br_blk_str_ctn] = sym__br_blk_str_ctn,
  [ts_external_token__r_flw_seq_bgn] = sym__r_flw_seq_bgn,
  [ts_external_token__br_flw_seq_bgn] = sym__br_flw_seq_bgn,
  [ts_external_token__b_flw_seq_bgn] = sym__b_flw_seq_bgn,
  [ts_external_token__r_flw_seq_end] = sym__r_flw_seq_end,
  [ts_external_token__br_flw_seq_end] = sym__br_flw_seq_end,
  [ts_external_token__b_flw_seq_end] = sym__b_flw_seq_end,
  [ts_external_token__r_flw_map_bgn] = sym__r_flw_map_bgn,
  [ts_external_token__br_flw_map_bgn] = sym__br_flw_map_bgn,
  [ts_external_token__b_flw_map_bgn] = sym__b_flw_map_bgn,
  [ts_external_token__r_flw_map_end] = sym__r_flw_map_end,
  [ts_external_token__br_flw_map_end] = sym__br_flw_map_end,
  [ts_external_token__b_flw_map_end] = sym__b_flw_map_end,
  [ts_external_token__r_flw_sep_bgn] = sym__r_flw_sep_bgn,
  [ts_external_token__br_flw_sep_bgn] = sym__br_flw_sep_bgn,
  [ts_external_token__r_flw_key_bgn] = sym__r_flw_key_bgn,
  [ts_external_token__br_flw_key_bgn] = sym__br_flw_key_bgn,
  [ts_external_token__r_flw_jsv_bgn] = sym__r_flw_jsv_bgn,
  [ts_external_token__br_flw_jsv_bgn] = sym__br_flw_jsv_bgn,
  [ts_external_token__r_flw_njv_bgn] = sym__r_flw_njv_bgn,
  [ts_external_token__br_flw_njv_bgn] = sym__br_flw_njv_bgn,
  [ts_external_token__r_dqt_str_bgn] = sym__r_dqt_str_bgn,
  [ts_external_token__br_dqt_str_bgn] = sym__br_dqt_str_bgn,
  [ts_external_token__b_dqt_str_bgn] = sym__b_dqt_str_bgn,
  [ts_external_token__r_dqt_str_ctn] = sym__r_dqt_str_ctn,
  [ts_external_token__br_dqt_str_ctn] = sym__br_dqt_str_ctn,
  [ts_external_token__r_dqt_esc_nwl] = sym__r_dqt_esc_nwl,
  [ts_external_token__br_dqt_esc_nwl] = sym__br_dqt_esc_nwl,
  [ts_external_token__r_dqt_esc_seq] = sym__r_dqt_esc_seq,
  [ts_external_token__br_dqt_esc_seq] = sym__br_dqt_esc_seq,
  [ts_external_token__r_dqt_str_end] = sym__r_dqt_str_end,
  [ts_external_token__br_dqt_str_end] = sym__br_dqt_str_end,
  [ts_external_token__r_sqt_str_bgn] = sym__r_sqt_str_bgn,
  [ts_external_token__br_sqt_str_bgn] = sym__br_sqt_str_bgn,
  [ts_external_token__b_sqt_str_bgn] = sym__b_sqt_str_bgn,
  [ts_external_token__r_sqt_str_ctn] = sym__r_sqt_str_ctn,
  [ts_external_token__br_sqt_str_ctn] = sym__br_sqt_str_ctn,
  [ts_external_token__r_sqt_esc_sqt] = sym__r_sqt_esc_sqt,
  [ts_external_token__br_sqt_esc_sqt] = sym__br_sqt_esc_sqt,
  [ts_external_token__r_sqt_str_end] = sym__r_sqt_str_end,
  [ts_external_token__br_sqt_str_end] = sym__br_sqt_str_end,
  [ts_external_token__r_sgl_pln_nul_blk] = sym__r_sgl_pln_nul_blk,
  [ts_external_token__br_sgl_pln_nul_blk] = sym__br_sgl_pln_nul_blk,
  [ts_external_token__b_sgl_pln_nul_blk] = sym__b_sgl_pln_nul_blk,
  [ts_external_token__r_sgl_pln_nul_flw] = sym__r_sgl_pln_nul_flw,
  [ts_external_token__br_sgl_pln_nul_flw] = sym__br_sgl_pln_nul_flw,
  [ts_external_token__r_sgl_pln_bol_blk] = sym__r_sgl_pln_bol_blk,
  [ts_external_token__br_sgl_pln_bol_blk] = sym__br_sgl_pln_bol_blk,
  [ts_external_token__b_sgl_pln_bol_blk] = sym__b_sgl_pln_bol_blk,
  [ts_external_token__r_sgl_pln_bol_flw] = sym__r_sgl_pln_bol_flw,
  [ts_external_token__br_sgl_pln_bol_flw] = sym__br_sgl_pln_bol_flw,
  [ts_external_token__r_sgl_pln_int_blk] = sym__r_sgl_pln_int_blk,
  [ts_external_token__br_sgl_pln_int_blk] = sym__br_sgl_pln_int_blk,
  [ts_external_token__b_sgl_pln_int_blk] = sym__b_sgl_pln_int_blk,
  [ts_external_token__r_sgl_pln_int_flw] = sym__r_sgl_pln_int_flw,
  [ts_external_token__br_sgl_pln_int_flw] = sym__br_sgl_pln_int_flw,
  [ts_external_token__r_sgl_pln_flt_blk] = sym__r_sgl_pln_flt_blk,
  [ts_external_token__br_sgl_pln_flt_blk] = sym__br_sgl_pln_flt_blk,
  [ts_external_token__b_sgl_pln_flt_blk] = sym__b_sgl_pln_flt_blk,
  [ts_external_token__r_sgl_pln_flt_flw] = sym__r_sgl_pln_flt_flw,
  [ts_external_token__br_sgl_pln_flt_flw] = sym__br_sgl_pln_flt_flw,
  [ts_external_token__r_sgl_pln_tms_blk] = sym__r_sgl_pln_tms_blk,
  [ts_external_token__br_sgl_pln_tms_blk] = sym__br_sgl_pln_tms_blk,
  [ts_external_token__b_sgl_pln_tms_blk] = sym__b_sgl_pln_tms_blk,
  [ts_external_token__r_sgl_pln_tms_flw] = sym__r_sgl_pln_tms_flw,
  [ts_external_token__br_sgl_pln_tms_flw] = sym__br_sgl_pln_tms_flw,
  [ts_external_token__r_sgl_pln_str_blk] = sym__r_sgl_pln_str_blk,
  [ts_external_token__br_sgl_pln_str_blk] = sym__br_sgl_pln_str_blk,
  [ts_external_token__b_sgl_pln_str_blk] = sym__b_sgl_pln_str_blk,
  [ts_external_token__r_sgl_pln_str_flw] = sym__r_sgl_pln_str_flw,
  [ts_external_token__br_sgl_pln_str_flw] = sym__br_sgl_pln_str_flw,
  [ts_external_token__r_mtl_pln_str_blk] = sym__r_mtl_pln_str_blk,
  [ts_external_token__br_mtl_pln_str_blk] = sym__br_mtl_pln_str_blk,
  [ts_external_token__r_mtl_pln_str_flw] = sym__r_mtl_pln_str_flw,
  [ts_external_token__br_mtl_pln_str_flw] = sym__br_mtl_pln_str_flw,
  [ts_external_token__r_tag] = sym__r_tag,
  [ts_external_token__br_tag] = sym__br_tag,
  [ts_external_token__b_tag] = sym__b_tag,
  [ts_external_token__r_acr_bgn] = sym__r_acr_bgn,
  [ts_external_token__br_acr_bgn] = sym__br_acr_bgn,
  [ts_external_token__b_acr_bgn] = sym__b_acr_bgn,
  [ts_external_token__r_acr_ctn] = sym__r_acr_ctn,
  [ts_external_token__r_als_bgn] = sym__r_als_bgn,
  [ts_external_token__br_als_bgn] = sym__br_als_bgn,
  [ts_external_token__b_als_bgn] = sym__b_als_bgn,
  [ts_external_token__r_als_ctn] = sym__r_als_ctn,
  [ts_external_token__bl] = sym__bl,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token__err_rec] = sym__err_rec,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
    [ts_external_token__s_dir_yml_bgn] = true,
    [ts_external_token__r_dir_yml_ver] = true,
    [ts_external_token__s_dir_tag_bgn] = true,
    [ts_external_token__r_dir_tag_hdl] = true,
    [ts_external_token__r_dir_tag_pfx] = true,
    [ts_external_token__s_dir_rsv_bgn] = true,
    [ts_external_token__r_dir_rsv_prm] = true,
    [ts_external_token__s_drs_end] = true,
    [ts_external_token__s_doc_end] = true,
    [ts_external_token__r_blk_seq_bgn] = true,
    [ts_external_token__br_blk_seq_bgn] = true,
    [ts_external_token__b_blk_seq_bgn] = true,
    [ts_external_token__r_blk_key_bgn] = true,
    [ts_external_token__br_blk_key_bgn] = true,
    [ts_external_token__b_blk_key_bgn] = true,
    [ts_external_token__r_blk_val_bgn] = true,
    [ts_external_token__br_blk_val_bgn] = true,
    [ts_external_token__b_blk_val_bgn] = true,
    [ts_external_token__r_blk_imp_bgn] = true,
    [ts_external_token__r_blk_lit_bgn] = true,
    [ts_external_token__br_blk_lit_bgn] = true,
    [ts_external_token__r_blk_fld_bgn] = true,
    [ts_external_token__br_blk_fld_bgn] = true,
    [ts_external_token__br_blk_str_ctn] = true,
    [ts_external_token__r_flw_seq_bgn] = true,
    [ts_external_token__br_flw_seq_bgn] = true,
    [ts_external_token__b_flw_seq_bgn] = true,
    [ts_external_token__r_flw_seq_end] = true,
    [ts_external_token__br_flw_seq_end] = true,
    [ts_external_token__b_flw_seq_end] = true,
    [ts_external_token__r_flw_map_bgn] = true,
    [ts_external_token__br_flw_map_bgn] = true,
    [ts_external_token__b_flw_map_bgn] = true,
    [ts_external_token__r_flw_map_end] = true,
    [ts_external_token__br_flw_map_end] = true,
    [ts_external_token__b_flw_map_end] = true,
    [ts_external_token__r_flw_sep_bgn] = true,
    [ts_external_token__br_flw_sep_bgn] = true,
    [ts_external_token__r_flw_key_bgn] = true,
    [ts_external_token__br_flw_key_bgn] = true,
    [ts_external_token__r_flw_jsv_bgn] = true,
    [ts_external_token__br_flw_jsv_bgn] = true,
    [ts_external_token__r_flw_njv_bgn] = true,
    [ts_external_token__br_flw_njv_bgn] = true,
    [ts_external_token__r_dqt_str_bgn] = true,
    [ts_external_token__br_dqt_str_bgn] = true,
    [ts_external_token__b_dqt_str_bgn] = true,
    [ts_external_token__r_dqt_str_ctn] = true,
    [ts_external_token__br_dqt_str_ctn] = true,
    [ts_external_token__r_dqt_esc_nwl] = true,
    [ts_external_token__br_dqt_esc_nwl] = true,
    [ts_external_token__r_dqt_esc_seq] = true,
    [ts_external_token__br_dqt_esc_seq] = true,
    [ts_external_token__r_dqt_str_end] = true,
    [ts_external_token__br_dqt_str_end] = true,
    [ts_external_token__r_sqt_str_bgn] = true,
    [ts_external_token__br_sqt_str_bgn] = true,
    [ts_external_token__b_sqt_str_bgn] = true,
    [ts_external_token__r_sqt_str_ctn] = true,
    [ts_external_token__br_sqt_str_ctn] = true,
    [ts_external_token__r_sqt_esc_sqt] = true,
    [ts_external_token__br_sqt_esc_sqt] = true,
    [ts_external_token__r_sqt_str_end] = true,
    [ts_external_token__br_sqt_str_end] = true,
    [ts_external_token__r_sgl_pln_nul_blk] = true,
    [ts_external_token__br_sgl_pln_nul_blk] = true,
    [ts_external_token__b_sgl_pln_nul_blk] = true,
    [ts_external_token__r_sgl_pln_nul_flw] = true,
    [ts_external_token__br_sgl_pln_nul_flw] = true,
    [ts_external_token__r_sgl_pln_bol_blk] = true,
    [ts_external_token__br_sgl_pln_bol_blk] = true,
    [ts_external_token__b_sgl_pln_bol_blk] = true,
    [ts_external_token__r_sgl_pln_bol_flw] = true,
    [ts_external_token__br_sgl_pln_bol_flw] = true,
    [ts_external_token__r_sgl_pln_int_blk] = true,
    [ts_external_token__br_sgl_pln_int_blk] = true,
    [ts_external_token__b_sgl_pln_int_blk] = true,
    [ts_external_token__r_sgl_pln_int_flw] = true,
    [ts_external_token__br_sgl_pln_int_flw] = true,
    [ts_external_token__r_sgl_pln_flt_blk] = true,
    [ts_external_token__br_sgl_pln_flt_blk] = true,
    [ts_external_token__b_sgl_pln_flt_blk] = true,
    [ts_external_token__r_sgl_pln_flt_flw] = true,
    [ts_external_token__br_sgl_pln_flt_flw] = true,
    [ts_external_token__r_sgl_pln_tms_blk] = true,
    [ts_external_token__br_sgl_pln_tms_blk] = true,
    [ts_external_token__b_sgl_pln_tms_blk] = true,
    [ts_external_token__r_sgl_pln_tms_flw] = true,
    [ts_external_token__br_sgl_pln_tms_flw] = true,
    [ts_external_token__r_sgl_pln_str_blk] = true,
    [ts_external_token__br_sgl_pln_str_blk] = true,
    [ts_external_token__b_sgl_pln_str_blk] = true,
    [ts_external_token__r_sgl_pln_str_flw] = true,
    [ts_external_token__br_sgl_pln_str_flw] = true,
    [ts_external_token__r_mtl_pln_str_blk] = true,
    [ts_external_token__br_mtl_pln_str_blk] = true,
    [ts_external_token__r_mtl_pln_str_flw] = true,
    [ts_external_token__br_mtl_pln_str_flw] = true,
    [ts_external_token__r_tag] = true,
    [ts_external_token__br_tag] = true,
    [ts_external_token__b_tag] = true,
    [ts_external_token__r_acr_bgn] = true,
    [ts_external_token__br_acr_bgn] = true,
    [ts_external_token__b_acr_bgn] = true,
    [ts_external_token__r_acr_ctn] = true,
    [ts_external_token__r_als_bgn] = true,
    [ts_external_token__br_als_bgn] = true,
    [ts_external_token__b_als_bgn] = true,
    [ts_external_token__r_als_ctn] = true,
    [ts_external_token__bl] = true,
    [ts_external_token_comment] = true,
    [ts_external_token__err_rec] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_nunjucks_statement] = STATE(0),
    [sym_nunjucks_expression] = STATE(0),
    [sym_nunjucks_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(3),
    [aux_sym_nunjucks_statement_token1] = ACTIONS(1),
    [aux_sym_nunjucks_statement_token2] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(7),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__s_dir_yml_bgn] = ACTIONS(1),
    [sym__r_dir_yml_ver] = ACTIONS(1),
    [sym__s_dir_tag_bgn] = ACTIONS(1),
    [sym__r_dir_tag_hdl] = ACTIONS(1),
    [sym__r_dir_tag_pfx] = ACTIONS(1),
    [sym__s_dir_rsv_bgn] = ACTIONS(1),
    [sym__r_dir_rsv_prm] = ACTIONS(1),
    [sym__s_drs_end] = ACTIONS(1),
    [sym__s_doc_end] = ACTIONS(1),
    [sym__r_blk_seq_bgn] = ACTIONS(1),
    [sym__br_blk_seq_bgn] = ACTIONS(1),
    [sym__b_blk_seq_bgn] = ACTIONS(1),
    [sym__r_blk_key_bgn] = ACTIONS(1),
    [sym__br_blk_key_bgn] = ACTIONS(1),
    [sym__b_blk_key_bgn] = ACTIONS(1),
    [sym__r_blk_val_bgn] = ACTIONS(1),
    [sym__br_blk_val_bgn] = ACTIONS(1),
    [sym__b_blk_val_bgn] = ACTIONS(1),
    [sym__r_blk_imp_bgn] = ACTIONS(1),
    [sym__r_blk_lit_bgn] = ACTIONS(1),
    [sym__br_blk_lit_bgn] = ACTIONS(1),
    [sym__r_blk_fld_bgn] = ACTIONS(1),
    [sym__br_blk_fld_bgn] = ACTIONS(1),
    [sym__br_blk_str_ctn] = ACTIONS(1),
    [sym__r_flw_seq_bgn] = ACTIONS(1),
    [sym__br_flw_seq_bgn] = ACTIONS(1),
    [sym__b_flw_seq_bgn] = ACTIONS(1),
    [sym__r_flw_seq_end] = ACTIONS(1),
    [sym__br_flw_seq_end] = ACTIONS(1),
    [sym__b_flw_seq_end] = ACTIONS(1),
    [sym__r_flw_map_bgn] = ACTIONS(1),
    [sym__br_flw_map_bgn] = ACTIONS(1),
    [sym__b_flw_map_bgn] = ACTIONS(1),
    [sym__r_flw_map_end] = ACTIONS(1),
    [sym__br_flw_map_end] = ACTIONS(1),
    [sym__b_flw_map_end] = ACTIONS(1),
    [sym__r_flw_sep_bgn] = ACTIONS(1),
    [sym__br_flw_sep_bgn] = ACTIONS(1),
    [sym__r_flw_key_bgn] = ACTIONS(1),
    [sym__br_flw_key_bgn] = ACTIONS(1),
    [sym__r_flw_jsv_bgn] = ACTIONS(1),
    [sym__br_flw_jsv_bgn] = ACTIONS(1),
    [sym__r_flw_njv_bgn] = ACTIONS(1),
    [sym__br_flw_njv_bgn] = ACTIONS(1),
    [sym__r_dqt_str_bgn] = ACTIONS(1),
    [sym__br_dqt_str_bgn] = ACTIONS(1),
    [sym__b_dqt_str_bgn] = ACTIONS(1),
    [sym__r_dqt_str_ctn] = ACTIONS(1),
    [sym__br_dqt_str_ctn] = ACTIONS(1),
    [sym__r_dqt_esc_nwl] = ACTIONS(1),
    [sym__br_dqt_esc_nwl] = ACTIONS(1),
    [sym__r_dqt_esc_seq] = ACTIONS(1),
    [sym__br_dqt_esc_seq] = ACTIONS(1),
    [sym__r_dqt_str_end] = ACTIONS(1),
    [sym__br_dqt_str_end] = ACTIONS(1),
    [sym__r_sqt_str_bgn] = ACTIONS(1),
    [sym__br_sqt_str_bgn] = ACTIONS(1),
    [sym__b_sqt_str_bgn] = ACTIONS(1),
    [sym__r_sqt_str_ctn] = ACTIONS(1),
    [sym__br_sqt_str_ctn] = ACTIONS(1),
    [sym__r_sqt_esc_sqt] = ACTIONS(1),
    [sym__br_sqt_esc_sqt] = ACTIONS(1),
    [sym__r_sqt_str_end] = ACTIONS(1),
    [sym__br_sqt_str_end] = ACTIONS(1),
    [sym__r_sgl_pln_nul_blk] = ACTIONS(1),
    [sym__br_sgl_pln_nul_blk] = ACTIONS(1),
    [sym__b_sgl_pln_nul_blk] = ACTIONS(1),
    [sym__r_sgl_pln_nul_flw] = ACTIONS(1),
    [sym__br_sgl_pln_nul_flw] = ACTIONS(1),
    [sym__r_sgl_pln_bol_blk] = ACTIONS(1),
    [sym__br_sgl_pln_bol_blk] = ACTIONS(1),
    [sym__b_sgl_pln_bol_blk] = ACTIONS(1),
    [sym__r_sgl_pln_bol_flw] = ACTIONS(1),
    [sym__br_sgl_pln_bol_flw] = ACTIONS(1),
    [sym__r_sgl_pln_int_blk] = ACTIONS(1),
    [sym__br_sgl_pln_int_blk] = ACTIONS(1),
    [sym__b_sgl_pln_int_blk] = ACTIONS(1),
    [sym__r_sgl_pln_int_flw] = ACTIONS(1),
    [sym__br_sgl_pln_int_flw] = ACTIONS(1),
    [sym__r_sgl_pln_flt_blk] = ACTIONS(1),
    [sym__br_sgl_pln_flt_blk] = ACTIONS(1),
    [sym__b_sgl_pln_flt_blk] = ACTIONS(1),
    [sym__r_sgl_pln_flt_flw] = ACTIONS(1),
    [sym__br_sgl_pln_flt_flw] = ACTIONS(1),
    [sym__r_sgl_pln_tms_blk] = ACTIONS(1),
    [sym__br_sgl_pln_tms_blk] = ACTIONS(1),
    [sym__b_sgl_pln_tms_blk] = ACTIONS(1),
    [sym__r_sgl_pln_tms_flw] = ACTIONS(1),
    [sym__br_sgl_pln_tms_flw] = ACTIONS(1),
    [sym__r_sgl_pln_str_blk] = ACTIONS(1),
    [sym__br_sgl_pln_str_blk] = ACTIONS(1),
    [sym__b_sgl_pln_str_blk] = ACTIONS(1),
    [sym__r_sgl_pln_str_flw] = ACTIONS(1),
    [sym__br_sgl_pln_str_flw] = ACTIONS(1),
    [sym__r_mtl_pln_str_blk] = ACTIONS(1),
    [sym__br_mtl_pln_str_blk] = ACTIONS(1),
    [sym__r_mtl_pln_str_flw] = ACTIONS(1),
    [sym__br_mtl_pln_str_flw] = ACTIONS(1),
    [sym__r_tag] = ACTIONS(1),
    [sym__br_tag] = ACTIONS(1),
    [sym__b_tag] = ACTIONS(1),
    [sym__r_acr_bgn] = ACTIONS(1),
    [sym__br_acr_bgn] = ACTIONS(1),
    [sym__b_acr_bgn] = ACTIONS(1),
    [sym__r_acr_ctn] = ACTIONS(1),
    [sym__r_als_bgn] = ACTIONS(1),
    [sym__br_als_bgn] = ACTIONS(1),
    [sym__b_als_bgn] = ACTIONS(1),
    [sym__r_als_ctn] = ACTIONS(1),
    [sym__bl] = ACTIONS(1),
    [sym_comment] = ACTIONS(9),
    [sym__err_rec] = ACTIONS(1),
  },
  [1] = {
    [sym_nunjucks_statement] = STATE(1),
    [sym_nunjucks_expression] = STATE(1),
    [sym_nunjucks_comment] = STATE(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_POUND] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    STATE(4), 1,
      sym_nunjucks_keyword,
    ACTIONS(15), 2,
      anon_sym_in,
      anon_sym_with,
    STATE(2), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
    ACTIONS(13), 27,
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
  [54] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    STATE(6), 1,
      sym_nunjucks_keyword,
    ACTIONS(15), 2,
      anon_sym_in,
      anon_sym_with,
    STATE(3), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
    ACTIONS(13), 27,
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
  [108] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_nunjucks_statement_token1,
    ACTIONS(19), 1,
      aux_sym_nunjucks_statement_token2,
    STATE(4), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [132] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 2,
      aux_sym_nunjucks_statement_token1,
      aux_sym_nunjucks_statement_token2,
    STATE(5), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [154] = 7,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_nunjucks_statement_token1,
    ACTIONS(25), 1,
      aux_sym_nunjucks_statement_token2,
    STATE(6), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [178] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(7), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [199] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(35), 1,
      aux_sym_nunjucks_comment_token1,
    STATE(8), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [220] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(9), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [241] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_POUND_RBRACE,
    STATE(10), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [262] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_nunjucks_statement_token1,
    STATE(11), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [283] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(12), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [304] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [325] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(14), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [346] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(15), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [367] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(16), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [388] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_nunjucks_statement_token1,
    STATE(17), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [409] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_nunjucks_statement_token1,
    STATE(18), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [430] = 6,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(31), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(57), 1,
      aux_sym_nunjucks_expression_token1,
    STATE(19), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [451] = 6,
    ACTIONS(3), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_nunjucks_statement_token1,
    STATE(20), 3,
      sym_nunjucks_statement,
      sym_nunjucks_expression,
      sym_nunjucks_comment,
  [472] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [476] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [480] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [484] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 199,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 325,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 367,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 451,
  [SMALL_STATE(21)] = 472,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 480,
  [SMALL_STATE(24)] = 484,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nunjucks_keyword, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_statement, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_expression, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nunjucks_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_yaml_nunjucks_external_scanner_create(void);
void tree_sitter_yaml_nunjucks_external_scanner_destroy(void *);
bool tree_sitter_yaml_nunjucks_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_yaml_nunjucks_external_scanner_serialize(void *, char *);
void tree_sitter_yaml_nunjucks_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_yaml_nunjucks_external_scanner_create,
      tree_sitter_yaml_nunjucks_external_scanner_destroy,
      tree_sitter_yaml_nunjucks_external_scanner_scan,
      tree_sitter_yaml_nunjucks_external_scanner_serialize,
      tree_sitter_yaml_nunjucks_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
