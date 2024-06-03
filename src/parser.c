#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_label = 6,
  anon_sym_const = 7,
  anon_sym_byte = 8,
  anon_sym_word = 9,
  anon_sym_dword = 10,
  anon_sym_qword = 11,
  anon_sym_ptr = 12,
  anon_sym_LBRACK = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_RBRACK = 16,
  anon_sym_STAR = 17,
  anon_sym_rel = 18,
  anon_sym_BANG = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_PIPE = 22,
  anon_sym_CARET = 23,
  anon_sym_AMP = 24,
  anon_sym_POUND = 25,
  aux_sym_int_token1 = 26,
  aux_sym_int_token2 = 27,
  sym_float = 28,
  sym_string = 29,
  sym_word = 30,
  sym__reg = 31,
  sym_address = 32,
  sym_meta_ident = 33,
  sym__ident = 34,
  aux_sym_line_comment_token1 = 35,
  anon_sym_AT = 36,
  aux_sym_line_comment_token2 = 37,
  anon_sym_SEMI = 38,
  aux_sym_line_comment_token3 = 39,
  sym_block_comment = 40,
  sym_program = 41,
  sym__item = 42,
  sym_meta = 43,
  sym_label = 44,
  sym_const = 45,
  sym_instruction = 46,
  sym__expr = 47,
  sym_ptr = 48,
  sym__tc_expr = 49,
  sym_tc_infix = 50,
  sym_int = 51,
  sym_reg = 52,
  sym_ident = 53,
  sym_line_comment = 54,
  aux_sym_program_repeat1 = 55,
  aux_sym_program_repeat2 = 56,
  aux_sym_meta_repeat1 = 57,
  aux_sym_meta_repeat2 = 58,
  aux_sym_meta_repeat3 = 59,
  aux_sym_instruction_repeat1 = 60,
  aux_sym_instruction_repeat2 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_label] = "label",
  [anon_sym_const] = "const",
  [anon_sym_byte] = "byte",
  [anon_sym_word] = "word",
  [anon_sym_dword] = "dword",
  [anon_sym_qword] = "qword",
  [anon_sym_ptr] = "ptr",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_rel] = "rel",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_POUND] = "#",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_word] = "word",
  [sym__reg] = "_reg",
  [sym_address] = "address",
  [sym_meta_ident] = "meta_ident",
  [sym__ident] = "_ident",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_AT] = "@",
  [aux_sym_line_comment_token2] = "line_comment_token2",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token3] = "line_comment_token3",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym__item] = "_item",
  [sym_meta] = "meta",
  [sym_label] = "label",
  [sym_const] = "const",
  [sym_instruction] = "instruction",
  [sym__expr] = "_expr",
  [sym_ptr] = "ptr",
  [sym__tc_expr] = "_tc_expr",
  [sym_tc_infix] = "tc_infix",
  [sym_int] = "int",
  [sym_reg] = "reg",
  [sym_ident] = "ident",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_meta_repeat1] = "meta_repeat1",
  [aux_sym_meta_repeat2] = "meta_repeat2",
  [aux_sym_meta_repeat3] = "meta_repeat3",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
  [aux_sym_instruction_repeat2] = "instruction_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_word] = anon_sym_word,
  [anon_sym_dword] = anon_sym_dword,
  [anon_sym_qword] = anon_sym_qword,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_rel] = anon_sym_rel,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_word] = sym_word,
  [sym__reg] = sym__reg,
  [sym_address] = sym_address,
  [sym_meta_ident] = sym_meta_ident,
  [sym__ident] = sym__ident,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_line_comment_token2] = aux_sym_line_comment_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_line_comment_token3] = aux_sym_line_comment_token3,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym__item] = sym__item,
  [sym_meta] = sym_meta,
  [sym_label] = sym_label,
  [sym_const] = sym_const,
  [sym_instruction] = sym_instruction,
  [sym__expr] = sym__expr,
  [sym_ptr] = sym_ptr,
  [sym__tc_expr] = sym__tc_expr,
  [sym_tc_infix] = sym_tc_infix,
  [sym_int] = sym_int,
  [sym_reg] = sym_reg,
  [sym_ident] = sym_ident,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_meta_repeat1] = aux_sym_meta_repeat1,
  [aux_sym_meta_repeat2] = aux_sym_meta_repeat2,
  [aux_sym_meta_repeat3] = aux_sym_meta_repeat3,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
  [aux_sym_instruction_repeat2] = aux_sym_instruction_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym__reg] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_ptr] = {
    .visible = true,
    .named = true,
  },
  [sym__tc_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_tc_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_kind = 1,
  field_lhs = 2,
  field_name = 3,
  field_op = 4,
  field_rhs = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_ident,
  },
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
  [23] = 11,
  [24] = 24,
  [25] = 7,
  [26] = 8,
  [27] = 10,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 34,
  [37] = 31,
  [38] = 38,
  [39] = 30,
  [40] = 13,
  [41] = 14,
  [42] = 18,
  [43] = 43,
  [44] = 17,
  [45] = 12,
  [46] = 16,
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
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
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
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 100,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '!', 55,
        '"', 3,
        '#', 62,
        '$', 21,
        '%', 57,
        '&', 61,
        '(', 33,
        ')', 34,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 142,
        '/', 56,
        '0', 72,
        ':', 32,
        ';', 162,
        '=', 24,
        '@', 149,
        '[', 47,
        ']', 51,
        '^', 60,
        'b', 130,
        'c', 106,
        'd', 125,
        'l', 91,
        'p', 121,
        'q', 126,
        'r', 99,
        'w', 108,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(159);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(157);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(90);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 62,
        '$', 21,
        '-', 9,
        '/', 12,
        '0', 82,
        ';', 162,
        '@', 149,
        'p', 18,
        'r', 15,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '.') ADVANCE(142);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(162);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 3,
        '#', 62,
        '$', 21,
        '%', 23,
        '(', 33,
        '*', 52,
        '-', 10,
        '.', 142,
        '/', 12,
        '0', 77,
        ':', 32,
        ';', 162,
        '=', 24,
        '@', 149,
        '[', 47,
        'b', 129,
        'd', 127,
        'q', 128,
        'w', 107,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 3,
        '#', 62,
        '$', 21,
        '%', 23,
        '-', 10,
        '.', 142,
        '/', 12,
        '0', 77,
        ':', 32,
        ';', 162,
        '=', 24,
        '@', 149,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '"', 3,
        '#', 62,
        '$', 21,
        '%', 58,
        '&', 61,
        '(', 33,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 50,
        '.', 142,
        '/', 56,
        '0', 69,
        ';', 162,
        '=', 24,
        '@', 149,
        '^', 60,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      ADVANCE_MAP(
        '\n', 30,
        '#', 62,
        '%', 57,
        '&', 61,
        '(', 33,
        ')', 34,
        '*', 52,
        '+', 48,
        ',', 31,
        '-', 49,
        '.', 142,
        '/', 56,
        ';', 162,
        '@', 149,
        ']', 51,
        '^', 60,
        'c', 106,
        'l', 91,
        '|', 59,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_label);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_byte);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_dword);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_qword);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_rel);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_rel);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('G' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(88);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 't') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'y') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__reg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_meta_ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(64);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(163);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      ADVANCE_MAP(
        '#', 63,
        '/', 156,
        ';', 161,
        '@', 150,
        '\\', 1,
        '\t', 155,
        '\r', 155,
        ' ', 155,
      );
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_line_comment_token2);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_line_comment_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 28},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 28},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 146},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 25},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 155},
  [119] = {(TSStateId)(-1)},
  [120] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_word] = ACTIONS(1),
    [anon_sym_dword] = ACTIONS(1),
    [anon_sym_qword] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_rel] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [aux_sym_int_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_meta_ident] = ACTIONS(1),
    [sym__ident] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [aux_sym_line_comment_token3] = ACTIONS(7),
    [sym_block_comment] = ACTIONS(9),
  },
  [1] = {
    [sym_program] = STATE(114),
    [sym__item] = STATE(57),
    [sym_meta] = STATE(91),
    [sym_label] = STATE(91),
    [sym_const] = STATE(91),
    [sym_instruction] = STATE(91),
    [sym_line_comment] = STATE(1),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_label] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_word] = ACTIONS(17),
    [sym_meta_ident] = ACTIONS(19),
    [sym__ident] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [aux_sym_line_comment_token3] = ACTIONS(7),
    [sym_block_comment] = ACTIONS(9),
  },
  [2] = {
    [sym__expr] = STATE(64),
    [sym_ptr] = STATE(82),
    [sym__tc_expr] = STATE(15),
    [sym_tc_infix] = STATE(14),
    [sym_int] = STATE(6),
    [sym_reg] = STATE(11),
    [sym_ident] = STATE(9),
    [sym_line_comment] = STATE(2),
    [aux_sym_instruction_repeat2] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(29),
    [anon_sym_word] = ACTIONS(29),
    [anon_sym_dword] = ACTIONS(29),
    [anon_sym_qword] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [aux_sym_int_token2] = ACTIONS(37),
    [sym_float] = ACTIONS(39),
    [sym_string] = ACTIONS(41),
    [sym_word] = ACTIONS(43),
    [sym__reg] = ACTIONS(43),
    [sym_address] = ACTIONS(45),
    [sym_meta_ident] = ACTIONS(47),
    [sym__ident] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [aux_sym_line_comment_token3] = ACTIONS(7),
    [sym_block_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(59), 1,
      sym_address,
    STATE(3), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(80), 1,
      sym__expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [69] = 20,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(59), 1,
      sym_address,
    STATE(4), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(80), 1,
      sym__expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [138] = 19,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      sym_float,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(55), 1,
      sym_string,
    ACTIONS(59), 1,
      sym_address,
    STATE(5), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(75), 1,
      sym_int,
    STATE(80), 1,
      sym__expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(82), 2,
      sym_ptr,
      sym_ident,
    ACTIONS(29), 4,
      anon_sym_byte,
      anon_sym_word,
      anon_sym_dword,
      anon_sym_qword,
  [203] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(72), 8,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(74), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [247] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(78), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [285] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(82), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [323] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(72), 8,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(74), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [364] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(86), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(84), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [401] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(90), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(88), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [438] = 8,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_CARET,
    ACTIONS(98), 1,
      anon_sym_AMP,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(94), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [478] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(94), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [514] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(74), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [550] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_CARET,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(108), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(112), 5,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [600] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_AMP,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(94), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_POUND,
      sym_string,
      sym_address,
  [638] = 9,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_CARET,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(94), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [680] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(96), 1,
      anon_sym_CARET,
    ACTIONS(98), 1,
      anon_sym_AMP,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(108), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_POUND,
      sym_string,
      sym_address,
    ACTIONS(94), 6,
      anon_sym_DASH,
      aux_sym_int_token2,
      sym_word,
      sym__reg,
      sym_meta_ident,
      sym__ident,
  [726] = 15,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(15), 1,
      sym__tc_expr,
    STATE(19), 1,
      sym_line_comment,
    STATE(20), 1,
      aux_sym_instruction_repeat2,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [778] = 14,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(120), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      aux_sym_int_token2,
    ACTIONS(126), 1,
      sym_string,
    ACTIONS(132), 1,
      sym_address,
    STATE(11), 1,
      sym_reg,
    STATE(15), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(129), 2,
      sym_word,
      sym__reg,
    ACTIONS(135), 2,
      sym_meta_ident,
      sym__ident,
    STATE(20), 2,
      sym_line_comment,
      aux_sym_instruction_repeat2,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [828] = 16,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(142), 1,
      sym_float,
    ACTIONS(144), 1,
      sym_string,
    STATE(21), 1,
      sym_line_comment,
    STATE(23), 1,
      sym_reg,
    STATE(74), 1,
      sym_int,
    STATE(97), 1,
      sym_ident,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [881] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_label,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(19), 1,
      sym_meta_ident,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(22), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(96), 1,
      sym__item,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    STATE(91), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [931] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [965] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_label,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(19), 1,
      sym_meta_ident,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(96), 1,
      sym__item,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    STATE(91), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1015] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1049] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(82), 1,
      anon_sym_SLASH,
    STATE(26), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1083] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(86), 1,
      anon_sym_SLASH,
    STATE(27), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1117] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(12), 1,
      sym__tc_expr,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1162] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(29), 1,
      sym_line_comment,
    STATE(43), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1207] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(30), 1,
      sym_line_comment,
    STATE(42), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1252] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(31), 1,
      sym_line_comment,
    STATE(44), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1297] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(32), 1,
      sym_line_comment,
    STATE(45), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1342] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(33), 1,
      sym_line_comment,
    STATE(46), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1387] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    ACTIONS(152), 1,
      sym_string,
    STATE(23), 1,
      sym_reg,
    STATE(34), 1,
      sym_line_comment,
    STATE(40), 1,
      sym__tc_expr,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(41), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1432] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(16), 1,
      sym__tc_expr,
    STATE(35), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1477] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(13), 1,
      sym__tc_expr,
    STATE(36), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1522] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(17), 1,
      sym__tc_expr,
    STATE(37), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1567] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_label,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      sym_word,
    ACTIONS(19), 1,
      sym_meta_ident,
    ACTIONS(21), 1,
      sym__ident,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_line_comment,
    STATE(49), 1,
      aux_sym_program_repeat1,
    STATE(96), 1,
      sym__item,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    STATE(91), 4,
      sym_meta,
      sym_label,
      sym_const,
      sym_instruction,
  [1614] = 13,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_int_token2,
    ACTIONS(45), 1,
      sym_address,
    ACTIONS(116), 1,
      sym_string,
    STATE(11), 1,
      sym_reg,
    STATE(18), 1,
      sym__tc_expr,
    STATE(39), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(43), 2,
      sym_word,
      sym__reg,
    ACTIONS(47), 2,
      sym_meta_ident,
      sym__ident,
    STATE(14), 3,
      sym_tc_infix,
      sym_int,
      sym_ident,
  [1659] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    STATE(40), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1690] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    STATE(41), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
  [1721] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_CARET,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(42), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(154), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(92), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1760] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(156), 1,
      anon_sym_SLASH,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_CARET,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(43), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(154), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(166), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1801] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(158), 1,
      anon_sym_PIPE,
    ACTIONS(160), 1,
      anon_sym_CARET,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(44), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1838] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(160), 1,
      anon_sym_CARET,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(45), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
  [1873] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(46), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
  [1906] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(47), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(99), 2,
      sym_int,
      sym_ident,
  [1944] = 11,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_int_token2,
    ACTIONS(59), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(48), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
    STATE(102), 2,
      sym_int,
      sym_ident,
  [1982] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      anon_sym_LF,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    STATE(49), 2,
      sym_line_comment,
      aux_sym_program_repeat1,
    ACTIONS(173), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2013] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(50), 1,
      sym_line_comment,
    STATE(104), 1,
      sym_ident,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
  [2047] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(177), 5,
      anon_sym_label,
      anon_sym_const,
      sym_word,
      sym_meta_ident,
      sym__ident,
  [2075] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      sym_address,
    STATE(23), 1,
      sym_reg,
    STATE(52), 1,
      sym_line_comment,
    STATE(112), 1,
      sym_ident,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(57), 2,
      sym_word,
      sym__reg,
    ACTIONS(61), 2,
      sym_meta_ident,
      sym__ident,
  [2109] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(53), 2,
      sym_line_comment,
      aux_sym_meta_repeat1,
  [2134] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      sym_line_comment,
    STATE(60), 1,
      aux_sym_meta_repeat3,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2161] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_line_comment,
    STATE(70), 1,
      aux_sym_instruction_repeat1,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2188] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym__reg,
    STATE(56), 1,
      sym_line_comment,
    STATE(109), 1,
      sym_reg,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(59), 2,
      sym_word,
      sym_address,
  [2215] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      aux_sym_program_repeat1,
    STATE(57), 1,
      sym_line_comment,
    STATE(71), 1,
      aux_sym_program_repeat2,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [2244] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      sym_line_comment,
    STATE(68), 1,
      aux_sym_meta_repeat2,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2271] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym__reg,
    STATE(59), 1,
      sym_line_comment,
    STATE(98), 1,
      sym_reg,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(59), 2,
      sym_word,
      sym_address,
  [2298] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_line_comment,
    STATE(67), 1,
      aux_sym_meta_repeat3,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2325] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym__reg,
    STATE(61), 1,
      sym_line_comment,
    STATE(65), 1,
      sym_reg,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(59), 2,
      sym_word,
      sym_address,
  [2352] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_meta_repeat1,
    STATE(62), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2379] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_BANG,
    STATE(63), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2404] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_instruction_repeat1,
    STATE(64), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2431] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(206), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2458] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LF,
    STATE(38), 1,
      aux_sym_program_repeat1,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    STATE(66), 2,
      sym_line_comment,
      aux_sym_program_repeat2,
  [2485] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(67), 2,
      sym_line_comment,
      aux_sym_meta_repeat3,
  [2510] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(68), 2,
      sym_line_comment,
      aux_sym_meta_repeat2,
  [2535] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      sym__reg,
    STATE(69), 1,
      sym_line_comment,
    STATE(86), 1,
      sym_reg,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(59), 2,
      sym_word,
      sym_address,
  [2562] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    STATE(70), 2,
      sym_line_comment,
      aux_sym_instruction_repeat1,
  [2587] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      anon_sym_LF,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(66), 1,
      aux_sym_program_repeat2,
    STATE(71), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [2616] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_BANG,
    STATE(72), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2641] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_meta_repeat2,
    STATE(73), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2668] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_meta_repeat1,
    STATE(74), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2695] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2720] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(234), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2742] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2764] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2788] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(240), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2810] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2832] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(198), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2854] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(242), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2898] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(246), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [2922] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2944] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(248), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2968] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [2990] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_COMMA,
  [3012] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3033] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3054] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3075] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      aux_sym_int_token2,
    STATE(92), 1,
      sym_line_comment,
    STATE(110), 1,
      sym_int,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3098] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3119] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      aux_sym_int_token2,
    STATE(94), 1,
      sym_line_comment,
    STATE(99), 1,
      sym_int,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3142] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      aux_sym_int_token2,
    STATE(77), 1,
      sym_int,
    STATE(95), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3165] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3186] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [3207] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3227] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3247] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(264), 1,
      aux_sym_int_token1,
    STATE(100), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3267] = 6,
    ACTIONS(266), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_line_comment_token1,
    ACTIONS(270), 1,
      anon_sym_AT,
    ACTIONS(272), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3287] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3307] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3327] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3347] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(280), 1,
      anon_sym_rel,
    STATE(105), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3367] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(282), 1,
      sym_float,
    STATE(106), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3387] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(284), 1,
      anon_sym_ptr,
    STATE(107), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3407] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3427] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3447] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3467] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      aux_sym_int_token1,
    STATE(111), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3487] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3507] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      sym_string,
    STATE(113), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3527] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3547] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(115), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3567] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(298), 1,
      sym_word,
    STATE(116), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3587] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      sym_block_comment,
    ACTIONS(300), 1,
      sym_word,
    STATE(117), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3607] = 6,
    ACTIONS(266), 1,
      anon_sym_POUND,
    ACTIONS(268), 1,
      aux_sym_line_comment_token2,
    ACTIONS(270), 1,
      anon_sym_AT,
    ACTIONS(272), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_line_comment,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      aux_sym_line_comment_token3,
  [3627] = 1,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
  [3631] = 1,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 203,
  [SMALL_STATE(7)] = 247,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 364,
  [SMALL_STATE(11)] = 401,
  [SMALL_STATE(12)] = 438,
  [SMALL_STATE(13)] = 478,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 550,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 638,
  [SMALL_STATE(18)] = 680,
  [SMALL_STATE(19)] = 726,
  [SMALL_STATE(20)] = 778,
  [SMALL_STATE(21)] = 828,
  [SMALL_STATE(22)] = 881,
  [SMALL_STATE(23)] = 931,
  [SMALL_STATE(24)] = 965,
  [SMALL_STATE(25)] = 1015,
  [SMALL_STATE(26)] = 1049,
  [SMALL_STATE(27)] = 1083,
  [SMALL_STATE(28)] = 1117,
  [SMALL_STATE(29)] = 1162,
  [SMALL_STATE(30)] = 1207,
  [SMALL_STATE(31)] = 1252,
  [SMALL_STATE(32)] = 1297,
  [SMALL_STATE(33)] = 1342,
  [SMALL_STATE(34)] = 1387,
  [SMALL_STATE(35)] = 1432,
  [SMALL_STATE(36)] = 1477,
  [SMALL_STATE(37)] = 1522,
  [SMALL_STATE(38)] = 1567,
  [SMALL_STATE(39)] = 1614,
  [SMALL_STATE(40)] = 1659,
  [SMALL_STATE(41)] = 1690,
  [SMALL_STATE(42)] = 1721,
  [SMALL_STATE(43)] = 1760,
  [SMALL_STATE(44)] = 1801,
  [SMALL_STATE(45)] = 1838,
  [SMALL_STATE(46)] = 1873,
  [SMALL_STATE(47)] = 1906,
  [SMALL_STATE(48)] = 1944,
  [SMALL_STATE(49)] = 1982,
  [SMALL_STATE(50)] = 2013,
  [SMALL_STATE(51)] = 2047,
  [SMALL_STATE(52)] = 2075,
  [SMALL_STATE(53)] = 2109,
  [SMALL_STATE(54)] = 2134,
  [SMALL_STATE(55)] = 2161,
  [SMALL_STATE(56)] = 2188,
  [SMALL_STATE(57)] = 2215,
  [SMALL_STATE(58)] = 2244,
  [SMALL_STATE(59)] = 2271,
  [SMALL_STATE(60)] = 2298,
  [SMALL_STATE(61)] = 2325,
  [SMALL_STATE(62)] = 2352,
  [SMALL_STATE(63)] = 2379,
  [SMALL_STATE(64)] = 2404,
  [SMALL_STATE(65)] = 2431,
  [SMALL_STATE(66)] = 2458,
  [SMALL_STATE(67)] = 2485,
  [SMALL_STATE(68)] = 2510,
  [SMALL_STATE(69)] = 2535,
  [SMALL_STATE(70)] = 2562,
  [SMALL_STATE(71)] = 2587,
  [SMALL_STATE(72)] = 2616,
  [SMALL_STATE(73)] = 2641,
  [SMALL_STATE(74)] = 2668,
  [SMALL_STATE(75)] = 2695,
  [SMALL_STATE(76)] = 2720,
  [SMALL_STATE(77)] = 2742,
  [SMALL_STATE(78)] = 2764,
  [SMALL_STATE(79)] = 2788,
  [SMALL_STATE(80)] = 2810,
  [SMALL_STATE(81)] = 2832,
  [SMALL_STATE(82)] = 2854,
  [SMALL_STATE(83)] = 2876,
  [SMALL_STATE(84)] = 2898,
  [SMALL_STATE(85)] = 2922,
  [SMALL_STATE(86)] = 2944,
  [SMALL_STATE(87)] = 2968,
  [SMALL_STATE(88)] = 2990,
  [SMALL_STATE(89)] = 3012,
  [SMALL_STATE(90)] = 3033,
  [SMALL_STATE(91)] = 3054,
  [SMALL_STATE(92)] = 3075,
  [SMALL_STATE(93)] = 3098,
  [SMALL_STATE(94)] = 3119,
  [SMALL_STATE(95)] = 3142,
  [SMALL_STATE(96)] = 3165,
  [SMALL_STATE(97)] = 3186,
  [SMALL_STATE(98)] = 3207,
  [SMALL_STATE(99)] = 3227,
  [SMALL_STATE(100)] = 3247,
  [SMALL_STATE(101)] = 3267,
  [SMALL_STATE(102)] = 3287,
  [SMALL_STATE(103)] = 3307,
  [SMALL_STATE(104)] = 3327,
  [SMALL_STATE(105)] = 3347,
  [SMALL_STATE(106)] = 3367,
  [SMALL_STATE(107)] = 3387,
  [SMALL_STATE(108)] = 3407,
  [SMALL_STATE(109)] = 3427,
  [SMALL_STATE(110)] = 3447,
  [SMALL_STATE(111)] = 3467,
  [SMALL_STATE(112)] = 3487,
  [SMALL_STATE(113)] = 3507,
  [SMALL_STATE(114)] = 3527,
  [SMALL_STATE(115)] = 3547,
  [SMALL_STATE(116)] = 3567,
  [SMALL_STATE(117)] = 3587,
  [SMALL_STATE(118)] = 3607,
  [SMALL_STATE(119)] = 3627,
  [SMALL_STATE(120)] = 3631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 4, 0, 1),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0), REDUCE(sym__tc_expr, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tc_expr, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tc_infix, 3, 0, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(100),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(10),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 1, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3, 0, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2, 0, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 3, 0, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat3, 2, 0, 0), SHIFT_REPEAT(113),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_repeat2, 2, 0, 0), SHIFT_REPEAT(106),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 6, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 7, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ptr, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__item, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5, 0, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_asm(void) {
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
