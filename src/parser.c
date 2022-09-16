#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_request_token1 = 1,
  anon_sym_GET = 2,
  anon_sym_HEAD = 3,
  anon_sym_POST = 4,
  anon_sym_PUT = 5,
  anon_sym_DELETE = 6,
  anon_sym_CONNECT = 7,
  anon_sym_OPTIONS = 8,
  anon_sym_TRACE = 9,
  anon_sym_PATCH = 10,
  sym_status = 11,
  sym_comment = 12,
  sym__sp = 13,
  aux_sym__lt_token1 = 14,
  sym_source_file = 15,
  sym_request = 16,
  sym_method = 17,
  sym__lt = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym__lt_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_request_token1] = "request_token1",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [sym_status] = "status",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_method] = "method",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__lt_repeat1] = "_lt_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_request_token1] = aux_sym_request_token1,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [sym_status] = sym_status,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_method] = sym_method,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__lt_repeat1] = aux_sym__lt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_request_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CONNECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OPTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PATCH] = {
    .visible = true,
    .named = false,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__sp] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__lt_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym__lt] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lt_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(35);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('.' <= lookahead && lookahead <= ':') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'U') ADVANCE(30);
      END_STATE();
    case 4:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(2);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == 'C') ADVANCE(21);
      if (lookahead == 'D') ADVANCE(8);
      if (lookahead == 'G') ADVANCE(9);
      if (lookahead == 'H') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'P') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_status);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 34},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 34},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(1),
    [sym_status] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
    [aux_sym__lt_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_request] = STATE(2),
    [sym_method] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [2] = {
    [sym_request] = STATE(3),
    [sym_method] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_GET] = ACTIONS(7),
    [anon_sym_HEAD] = ACTIONS(7),
    [anon_sym_POST] = ACTIONS(7),
    [anon_sym_PUT] = ACTIONS(7),
    [anon_sym_DELETE] = ACTIONS(7),
    [anon_sym_CONNECT] = ACTIONS(7),
    [anon_sym_OPTIONS] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_PATCH] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [3] = {
    [sym_request] = STATE(3),
    [sym_method] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(13),
    [anon_sym_HEAD] = ACTIONS(13),
    [anon_sym_POST] = ACTIONS(13),
    [anon_sym_PUT] = ACTIONS(13),
    [anon_sym_DELETE] = ACTIONS(13),
    [anon_sym_CONNECT] = ACTIONS(13),
    [anon_sym_OPTIONS] = ACTIONS(13),
    [anon_sym_TRACE] = ACTIONS(13),
    [anon_sym_PATCH] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(16),
    [anon_sym_GET] = ACTIONS(16),
    [anon_sym_HEAD] = ACTIONS(16),
    [anon_sym_POST] = ACTIONS(16),
    [anon_sym_PUT] = ACTIONS(16),
    [anon_sym_DELETE] = ACTIONS(16),
    [anon_sym_CONNECT] = ACTIONS(16),
    [anon_sym_OPTIONS] = ACTIONS(16),
    [anon_sym_TRACE] = ACTIONS(16),
    [anon_sym_PATCH] = ACTIONS(16),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(18),
    [anon_sym_GET] = ACTIONS(18),
    [anon_sym_HEAD] = ACTIONS(18),
    [anon_sym_POST] = ACTIONS(18),
    [anon_sym_PUT] = ACTIONS(18),
    [anon_sym_DELETE] = ACTIONS(18),
    [anon_sym_CONNECT] = ACTIONS(18),
    [anon_sym_OPTIONS] = ACTIONS(18),
    [anon_sym_TRACE] = ACTIONS(18),
    [anon_sym_PATCH] = ACTIONS(18),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(20),
    [anon_sym_GET] = ACTIONS(20),
    [anon_sym_HEAD] = ACTIONS(20),
    [anon_sym_POST] = ACTIONS(20),
    [anon_sym_PUT] = ACTIONS(20),
    [anon_sym_DELETE] = ACTIONS(20),
    [anon_sym_CONNECT] = ACTIONS(20),
    [anon_sym_OPTIONS] = ACTIONS(20),
    [anon_sym_TRACE] = ACTIONS(20),
    [anon_sym_PATCH] = ACTIONS(20),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(22), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym__sp,
    ACTIONS(26), 1,
      aux_sym__lt_token1,
    STATE(4), 1,
      sym__lt,
    STATE(8), 1,
      aux_sym__lt_repeat1,
  [16] = 4,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym__sp,
    ACTIONS(32), 1,
      aux_sym__lt_token1,
    STATE(9), 1,
      aux_sym__lt_repeat1,
  [29] = 4,
    ACTIONS(34), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym__sp,
    ACTIONS(39), 1,
      aux_sym__lt_token1,
    STATE(9), 1,
      aux_sym__lt_repeat1,
  [42] = 2,
    ACTIONS(41), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [50] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [58] = 2,
    ACTIONS(45), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [66] = 2,
    ACTIONS(32), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [74] = 2,
    ACTIONS(47), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 16,
  [SMALL_STATE(9)] = 29,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 50,
  [SMALL_STATE(12)] = 58,
  [SMALL_STATE(13)] = 66,
  [SMALL_STATE(14)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hurl(void) {
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
