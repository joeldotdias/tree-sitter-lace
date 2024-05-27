#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  anon_sym_BANG = 5,
  anon_sym_DASH = 6,
  anon_sym_EQ_EQ = 7,
  anon_sym_BANG_EQ = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  anon_sym_LT_EQ = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_PLUS = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PERCENT = 16,
  sym_integer = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_char_token1 = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_SLASH_SLASH = 24,
  anon_sym_CARET_DOT_STAR_LF_STAR = 25,
  sym_program = 26,
  sym__statement = 27,
  sym_assignment = 28,
  sym_expression_statement = 29,
  sym__expression = 30,
  sym_unary_expression = 31,
  sym_binary_expression = 32,
  sym_string = 33,
  sym_char = 34,
  sym_boolean = 35,
  sym_line_comment = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_string_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_CARET_DOT_STAR_LF_STAR] = "^.*\n*",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_boolean] = "boolean",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_CARET_DOT_STAR_LF_STAR] = anon_sym_CARET_DOT_STAR_LF_STAR,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_boolean] = sym_boolean,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_DOT_STAR_LF_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
    {field_right, 1},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_left, 1},
    {field_right, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '!', 24,
        '"', 41,
        '%', 35,
        '\'', 45,
        '*', 33,
        '+', 32,
        '-', 25,
        '/', 34,
        ';', 19,
        '<', 28,
        '=', 22,
        '>', 29,
        '^', 6,
        'f', 37,
        'l', 38,
        't', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 23,
        '"', 41,
        '\'', 45,
        '-', 25,
        '/', 7,
        '=', 21,
        'f', 37,
        't', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '/') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '!', 24,
        '"', 41,
        '%', 35,
        '\'', 45,
        '*', 33,
        '+', 32,
        '-', 25,
        '/', 34,
        ';', 19,
        '<', 28,
        '=', 10,
        '>', 29,
        'f', 37,
        'l', 38,
        't', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_CARET_DOT_STAR_LF_STAR);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 8},
  [35] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_CARET_DOT_STAR_LF_STAR] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(32),
    [sym__statement] = STATE(24),
    [sym_assignment] = STATE(22),
    [sym_expression_statement] = STATE(22),
    [sym__expression] = STATE(11),
    [sym_unary_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_char] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_line_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [2] = {
    [sym_line_comment] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [sym_integer] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [3] = {
    [sym_line_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(31),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(31),
    [anon_sym_PERCENT] = ACTIONS(29),
    [sym_integer] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [4] = {
    [sym_line_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_let] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_EQ_EQ] = ACTIONS(33),
    [anon_sym_BANG_EQ] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(33),
    [anon_sym_GT_EQ] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(35),
    [anon_sym_PERCENT] = ACTIONS(33),
    [sym_integer] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [5] = {
    [sym_line_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(37),
    [anon_sym_let] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_EQ_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_LT] = ACTIONS(39),
    [anon_sym_GT] = ACTIONS(39),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(37),
    [sym_integer] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [sym_integer] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [7] = {
    [sym_line_comment] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_let] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_EQ_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_LT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(45),
    [anon_sym_PERCENT] = ACTIONS(43),
    [sym_integer] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [8] = {
    [sym_line_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [sym_integer] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_let] = ACTIONS(51),
    [anon_sym_BANG] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(51),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_BANG_EQ] = ACTIONS(51),
    [anon_sym_LT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_LT_EQ] = ACTIONS(51),
    [anon_sym_GT_EQ] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(51),
    [sym_integer] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(55),
    [anon_sym_let] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(55),
    [anon_sym_EQ_EQ] = ACTIONS(55),
    [anon_sym_BANG_EQ] = ACTIONS(55),
    [anon_sym_LT] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(55),
    [anon_sym_GT_EQ] = ACTIONS(55),
    [anon_sym_PLUS] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(55),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(55),
    [sym_integer] = ACTIONS(55),
    [anon_sym_DQUOTE] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(59),
    [anon_sym_let] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [sym_integer] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [12] = {
    [sym_line_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_let] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(21),
    [anon_sym_BANG_EQ] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(21),
    [sym_integer] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [13] = {
    [sym_line_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(65),
    [anon_sym_let] = ACTIONS(65),
    [anon_sym_BANG] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(41),
    [anon_sym_EQ_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(49),
    [anon_sym_PLUS] = ACTIONS(41),
    [anon_sym_STAR] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(25),
    [sym_integer] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [14] = {
    [sym__statement] = STATE(24),
    [sym_assignment] = STATE(22),
    [sym_expression_statement] = STATE(22),
    [sym__expression] = STATE(11),
    [sym_unary_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_char] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_line_comment] = STATE(14),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_let] = ACTIONS(74),
    [anon_sym_BANG] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [sym_integer] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
  [15] = {
    [sym__statement] = STATE(24),
    [sym_assignment] = STATE(22),
    [sym_expression_statement] = STATE(22),
    [sym__expression] = STATE(11),
    [sym_unary_expression] = STATE(5),
    [sym_binary_expression] = STATE(5),
    [sym_string] = STATE(5),
    [sym_char] = STATE(5),
    [sym_boolean] = STATE(5),
    [sym_line_comment] = STATE(15),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym__expression,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [37] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym__expression,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [74] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym__expression,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [111] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym__expression,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [148] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym__expression,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [185] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      sym__expression,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(11), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_string,
      sym_char,
      sym_boolean,
  [222] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
  [246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
  [267] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(24), 1,
      sym_line_comment,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_BANG,
      anon_sym_DASH,
      sym_integer,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
  [288] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      aux_sym_string_token1,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_line_comment,
    STATE(26), 1,
      aux_sym_string_repeat1,
  [304] = 4,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_string_token1,
    STATE(26), 2,
      sym_line_comment,
      aux_sym_string_repeat1,
  [318] = 5,
    ACTIONS(110), 1,
      aux_sym_string_token1,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
    STATE(27), 1,
      sym_line_comment,
  [334] = 3,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(121), 2,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
  [345] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(123), 1,
      anon_sym_SQUOTE,
    STATE(29), 1,
      sym_line_comment,
  [355] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(125), 1,
      anon_sym_CARET_DOT_STAR_LF_STAR,
    STATE(30), 1,
      sym_line_comment,
  [365] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(127), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_line_comment,
  [375] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_line_comment,
  [385] = 3,
    ACTIONS(112), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(131), 1,
      aux_sym_char_token1,
    STATE(33), 1,
      sym_line_comment,
  [395] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(34), 1,
      sym_line_comment,
  [405] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 37,
  [SMALL_STATE(18)] = 74,
  [SMALL_STATE(19)] = 111,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 185,
  [SMALL_STATE(22)] = 222,
  [SMALL_STATE(23)] = 246,
  [SMALL_STATE(24)] = 267,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 318,
  [SMALL_STATE(28)] = 334,
  [SMALL_STATE(29)] = 345,
  [SMALL_STATE(30)] = 355,
  [SMALL_STATE(31)] = 365,
  [SMALL_STATE(32)] = 375,
  [SMALL_STATE(33)] = 385,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 405,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_lace(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
