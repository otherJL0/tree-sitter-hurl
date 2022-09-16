#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  anon_sym_COLON = 11,
  sym_key = 12,
  sym_value = 13,
  anon_sym_LBRACK = 14,
  aux_sym_request_section_token1 = 15,
  anon_sym_RBRACK = 16,
  sym_comment = 17,
  sym__sp = 18,
  aux_sym__lt_token1 = 19,
  sym_source_file = 20,
  sym_request = 21,
  sym_method = 22,
  sym_header = 23,
  sym__key_value = 24,
  sym_request_section = 25,
  sym__lt = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_request_repeat1 = 28,
  aux_sym_request_repeat2 = 29,
  aux_sym_header_repeat1 = 30,
  aux_sym_request_section_repeat1 = 31,
  aux_sym__lt_repeat1 = 32,
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
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
  [anon_sym_LBRACK] = "[",
  [aux_sym_request_section_token1] = "request_section_token1",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_method] = "method",
  [sym_header] = "header",
  [sym__key_value] = "_key_value",
  [sym_request_section] = "request_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_request_section_repeat1] = "request_section_repeat1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_request_section_token1] = aux_sym_request_section_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_method] = sym_method,
  [sym_header] = sym_header,
  [sym__key_value] = sym__key_value,
  [sym_request_section] = sym_request_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_request_section_repeat1] = aux_sym_request_section_repeat1,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_request_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value] = {
    .visible = false,
    .named = true,
  },
  [sym_request_section] = {
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
  [aux_sym_request_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_request_section_repeat1] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 21,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 16,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 16,
  [37] = 14,
  [38] = 16,
  [39] = 33,
  [40] = 14,
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
  [51] = 48,
  [52] = 17,
  [53] = 53,
  [54] = 54,
  [55] = 48,
  [56] = 53,
  [57] = 53,
  [58] = 48,
  [59] = 54,
  [60] = 53,
  [61] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == ':') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == ']') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'U') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'H') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'R') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_request_section_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(80);
      if (lookahead == 'P') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 104},
  [2] = {.lex_state = 103},
  [3] = {.lex_state = 103},
  [4] = {.lex_state = 103},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 103},
  [9] = {.lex_state = 103},
  [10] = {.lex_state = 103},
  [11] = {.lex_state = 103},
  [12] = {.lex_state = 103},
  [13] = {.lex_state = 104},
  [14] = {.lex_state = 103},
  [15] = {.lex_state = 103},
  [16] = {.lex_state = 103},
  [17] = {.lex_state = 103},
  [18] = {.lex_state = 104},
  [19] = {.lex_state = 103},
  [20] = {.lex_state = 99},
  [21] = {.lex_state = 99},
  [22] = {.lex_state = 102},
  [23] = {.lex_state = 100},
  [24] = {.lex_state = 102},
  [25] = {.lex_state = 100},
  [26] = {.lex_state = 99},
  [27] = {.lex_state = 101},
  [28] = {.lex_state = 101},
  [29] = {.lex_state = 101},
  [30] = {.lex_state = 99},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 101},
  [34] = {.lex_state = 101},
  [35] = {.lex_state = 101},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 102},
  [38] = {.lex_state = 100},
  [39] = {.lex_state = 101},
  [40] = {.lex_state = 100},
  [41] = {.lex_state = 101},
  [42] = {.lex_state = 104},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 101},
  [52] = {.lex_state = 101},
  [53] = {.lex_state = 101},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 101},
  [56] = {.lex_state = 101},
  [57] = {.lex_state = 101},
  [58] = {.lex_state = 101},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 101},
  [61] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_CONNECT] = ACTIONS(1),
    [anon_sym_OPTIONS] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_PATCH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(5),
    [aux_sym__lt_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_request] = STATE(18),
    [sym_method] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_GET] = ACTIONS(9),
    [anon_sym_HEAD] = ACTIONS(9),
    [anon_sym_POST] = ACTIONS(9),
    [anon_sym_PUT] = ACTIONS(9),
    [anon_sym_DELETE] = ACTIONS(9),
    [anon_sym_CONNECT] = ACTIONS(9),
    [anon_sym_OPTIONS] = ACTIONS(9),
    [anon_sym_TRACE] = ACTIONS(9),
    [anon_sym_PATCH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [2] = {
    [sym_header] = STATE(4),
    [sym__key_value] = STATE(28),
    [sym_request_section] = STATE(5),
    [sym__lt] = STATE(20),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat2] = STATE(5),
    [aux_sym_header_repeat1] = STATE(20),
    [aux_sym__lt_repeat1] = STATE(35),
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
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__sp] = ACTIONS(21),
    [aux_sym__lt_token1] = ACTIONS(23),
  },
  [3] = {
    [sym_header] = STATE(2),
    [sym__key_value] = STATE(28),
    [sym_request_section] = STATE(7),
    [sym__lt] = STATE(20),
    [aux_sym_request_repeat1] = STATE(2),
    [aux_sym_request_repeat2] = STATE(7),
    [aux_sym_header_repeat1] = STATE(20),
    [aux_sym__lt_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_GET] = ACTIONS(27),
    [anon_sym_HEAD] = ACTIONS(27),
    [anon_sym_POST] = ACTIONS(27),
    [anon_sym_PUT] = ACTIONS(27),
    [anon_sym_DELETE] = ACTIONS(27),
    [anon_sym_CONNECT] = ACTIONS(27),
    [anon_sym_OPTIONS] = ACTIONS(27),
    [anon_sym_TRACE] = ACTIONS(27),
    [anon_sym_PATCH] = ACTIONS(27),
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [sym__sp] = ACTIONS(21),
    [aux_sym__lt_token1] = ACTIONS(23),
  },
  [4] = {
    [sym_header] = STATE(4),
    [sym__key_value] = STATE(28),
    [sym__lt] = STATE(22),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_header_repeat1] = STATE(22),
    [aux_sym__lt_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GET] = ACTIONS(31),
    [anon_sym_HEAD] = ACTIONS(31),
    [anon_sym_POST] = ACTIONS(31),
    [anon_sym_PUT] = ACTIONS(31),
    [anon_sym_DELETE] = ACTIONS(31),
    [anon_sym_CONNECT] = ACTIONS(31),
    [anon_sym_OPTIONS] = ACTIONS(31),
    [anon_sym_TRACE] = ACTIONS(31),
    [anon_sym_PATCH] = ACTIONS(31),
    [sym_key] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(36),
    [sym__sp] = ACTIONS(39),
    [aux_sym__lt_token1] = ACTIONS(42),
  },
  [5] = {
    [sym_request_section] = STATE(6),
    [sym__lt] = STATE(23),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(23),
    [aux_sym__lt_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_GET] = ACTIONS(45),
    [anon_sym_HEAD] = ACTIONS(45),
    [anon_sym_POST] = ACTIONS(45),
    [anon_sym_PUT] = ACTIONS(45),
    [anon_sym_DELETE] = ACTIONS(45),
    [anon_sym_CONNECT] = ACTIONS(45),
    [anon_sym_OPTIONS] = ACTIONS(45),
    [anon_sym_TRACE] = ACTIONS(45),
    [anon_sym_PATCH] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [sym__sp] = ACTIONS(51),
    [aux_sym__lt_token1] = ACTIONS(53),
  },
  [6] = {
    [sym_request_section] = STATE(6),
    [sym__lt] = STATE(23),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(23),
    [aux_sym__lt_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_GET] = ACTIONS(55),
    [anon_sym_HEAD] = ACTIONS(55),
    [anon_sym_POST] = ACTIONS(55),
    [anon_sym_PUT] = ACTIONS(55),
    [anon_sym_DELETE] = ACTIONS(55),
    [anon_sym_CONNECT] = ACTIONS(55),
    [anon_sym_OPTIONS] = ACTIONS(55),
    [anon_sym_TRACE] = ACTIONS(55),
    [anon_sym_PATCH] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(57),
    [sym_comment] = ACTIONS(60),
    [sym__sp] = ACTIONS(63),
    [aux_sym__lt_token1] = ACTIONS(66),
  },
  [7] = {
    [sym_request_section] = STATE(6),
    [sym__lt] = STATE(23),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(23),
    [aux_sym__lt_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_GET] = ACTIONS(11),
    [anon_sym_HEAD] = ACTIONS(11),
    [anon_sym_POST] = ACTIONS(11),
    [anon_sym_PUT] = ACTIONS(11),
    [anon_sym_DELETE] = ACTIONS(11),
    [anon_sym_CONNECT] = ACTIONS(11),
    [anon_sym_OPTIONS] = ACTIONS(11),
    [anon_sym_TRACE] = ACTIONS(11),
    [anon_sym_PATCH] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(47),
    [sym_comment] = ACTIONS(49),
    [sym__sp] = ACTIONS(51),
    [aux_sym__lt_token1] = ACTIONS(53),
  },
  [8] = {
    [sym__key_value] = STATE(9),
    [aux_sym_request_section_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_GET] = ACTIONS(71),
    [anon_sym_HEAD] = ACTIONS(71),
    [anon_sym_POST] = ACTIONS(71),
    [anon_sym_PUT] = ACTIONS(71),
    [anon_sym_DELETE] = ACTIONS(71),
    [anon_sym_CONNECT] = ACTIONS(71),
    [anon_sym_OPTIONS] = ACTIONS(71),
    [anon_sym_TRACE] = ACTIONS(71),
    [anon_sym_PATCH] = ACTIONS(71),
    [sym_key] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_comment] = ACTIONS(69),
    [sym__sp] = ACTIONS(71),
    [aux_sym__lt_token1] = ACTIONS(71),
  },
  [9] = {
    [sym__key_value] = STATE(11),
    [aux_sym_request_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_GET] = ACTIONS(77),
    [anon_sym_HEAD] = ACTIONS(77),
    [anon_sym_POST] = ACTIONS(77),
    [anon_sym_PUT] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_CONNECT] = ACTIONS(77),
    [anon_sym_OPTIONS] = ACTIONS(77),
    [anon_sym_TRACE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [sym_key] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_comment] = ACTIONS(75),
    [sym__sp] = ACTIONS(77),
    [aux_sym__lt_token1] = ACTIONS(77),
  },
  [10] = {
    [sym__key_value] = STATE(12),
    [aux_sym_request_section_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_GET] = ACTIONS(77),
    [anon_sym_HEAD] = ACTIONS(77),
    [anon_sym_POST] = ACTIONS(77),
    [anon_sym_PUT] = ACTIONS(77),
    [anon_sym_DELETE] = ACTIONS(77),
    [anon_sym_CONNECT] = ACTIONS(77),
    [anon_sym_OPTIONS] = ACTIONS(77),
    [anon_sym_TRACE] = ACTIONS(77),
    [anon_sym_PATCH] = ACTIONS(77),
    [sym_key] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(77),
    [sym_comment] = ACTIONS(75),
    [sym__sp] = ACTIONS(77),
    [aux_sym__lt_token1] = ACTIONS(77),
  },
  [11] = {
    [sym__key_value] = STATE(11),
    [aux_sym_request_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_GET] = ACTIONS(81),
    [anon_sym_HEAD] = ACTIONS(81),
    [anon_sym_POST] = ACTIONS(81),
    [anon_sym_PUT] = ACTIONS(81),
    [anon_sym_DELETE] = ACTIONS(81),
    [anon_sym_CONNECT] = ACTIONS(81),
    [anon_sym_OPTIONS] = ACTIONS(81),
    [anon_sym_TRACE] = ACTIONS(81),
    [anon_sym_PATCH] = ACTIONS(81),
    [sym_key] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym_comment] = ACTIONS(79),
    [sym__sp] = ACTIONS(81),
    [aux_sym__lt_token1] = ACTIONS(81),
  },
  [12] = {
    [sym__key_value] = STATE(11),
    [aux_sym_request_section_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_GET] = ACTIONS(88),
    [anon_sym_HEAD] = ACTIONS(88),
    [anon_sym_POST] = ACTIONS(88),
    [anon_sym_PUT] = ACTIONS(88),
    [anon_sym_DELETE] = ACTIONS(88),
    [anon_sym_CONNECT] = ACTIONS(88),
    [anon_sym_OPTIONS] = ACTIONS(88),
    [anon_sym_TRACE] = ACTIONS(88),
    [anon_sym_PATCH] = ACTIONS(88),
    [sym_key] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(88),
    [sym_comment] = ACTIONS(86),
    [sym__sp] = ACTIONS(88),
    [aux_sym__lt_token1] = ACTIONS(88),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(13), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(92), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [26] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(97), 13,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [46] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(101), 13,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [66] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(105), 13,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [86] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(109), 13,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [106] = 5,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(13), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(9), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [132] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(115), 13,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [152] = 8,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__sp,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      aux_sym__lt_token1,
    STATE(27), 1,
      sym__key_value,
    STATE(35), 1,
      aux_sym__lt_repeat1,
    STATE(21), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [178] = 6,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym__sp,
    ACTIONS(129), 1,
      aux_sym__lt_token1,
    STATE(35), 1,
      aux_sym__lt_repeat1,
    ACTIONS(121), 2,
      sym_key,
      anon_sym_LBRACK,
    STATE(21), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [199] = 7,
    ACTIONS(132), 1,
      sym_key,
    ACTIONS(134), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym__sp,
    ACTIONS(138), 1,
      aux_sym__lt_token1,
    STATE(27), 1,
      sym__key_value,
    STATE(33), 1,
      aux_sym__lt_repeat1,
    STATE(24), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [222] = 6,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym__sp,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(142), 1,
      aux_sym__lt_token1,
    STATE(34), 1,
      aux_sym__lt_repeat1,
    STATE(25), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [242] = 6,
    ACTIONS(144), 1,
      sym_key,
    ACTIONS(146), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym__sp,
    ACTIONS(152), 1,
      aux_sym__lt_token1,
    STATE(33), 1,
      aux_sym__lt_repeat1,
    STATE(24), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [262] = 6,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__sp,
    ACTIONS(161), 1,
      aux_sym__lt_token1,
    STATE(34), 1,
      aux_sym__lt_repeat1,
    STATE(25), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [282] = 2,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(97), 4,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [292] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__sp,
    ACTIONS(168), 1,
      aux_sym__lt_token1,
    STATE(15), 1,
      sym__lt,
    STATE(39), 1,
      aux_sym__lt_repeat1,
  [308] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__sp,
    ACTIONS(170), 1,
      aux_sym__lt_token1,
    STATE(19), 1,
      sym__lt,
    STATE(39), 1,
      aux_sym__lt_repeat1,
  [324] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__sp,
    ACTIONS(172), 1,
      aux_sym__lt_token1,
    STATE(8), 1,
      sym__lt,
    STATE(39), 1,
      aux_sym__lt_repeat1,
  [340] = 2,
    ACTIONS(103), 1,
      sym_comment,
    ACTIONS(105), 4,
      sym_key,
      anon_sym_LBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [350] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__sp,
    ACTIONS(174), 1,
      aux_sym__lt_token1,
    STATE(10), 1,
      sym__lt,
    STATE(39), 1,
      aux_sym__lt_repeat1,
  [366] = 5,
    ACTIONS(164), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__sp,
    ACTIONS(176), 1,
      aux_sym__lt_token1,
    STATE(3), 1,
      sym__lt,
    STATE(39), 1,
      aux_sym__lt_repeat1,
  [382] = 4,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__sp,
    ACTIONS(182), 1,
      aux_sym__lt_token1,
    STATE(41), 1,
      aux_sym__lt_repeat1,
  [395] = 4,
    ACTIONS(180), 1,
      sym__sp,
    ACTIONS(184), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym__lt_token1,
    STATE(41), 1,
      aux_sym__lt_repeat1,
  [408] = 4,
    ACTIONS(180), 1,
      sym__sp,
    ACTIONS(188), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym__lt_token1,
    STATE(41), 1,
      aux_sym__lt_repeat1,
  [421] = 2,
    ACTIONS(103), 2,
      sym_key,
      sym_comment,
    ACTIONS(105), 2,
      sym__sp,
      aux_sym__lt_token1,
  [430] = 2,
    ACTIONS(95), 2,
      sym_key,
      sym_comment,
    ACTIONS(97), 2,
      sym__sp,
      aux_sym__lt_token1,
  [439] = 2,
    ACTIONS(105), 1,
      aux_sym__lt_token1,
    ACTIONS(103), 3,
      anon_sym_LBRACK,
      sym_comment,
      sym__sp,
  [448] = 4,
    ACTIONS(180), 1,
      sym__sp,
    ACTIONS(192), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym__lt_token1,
    STATE(41), 1,
      aux_sym__lt_repeat1,
  [461] = 2,
    ACTIONS(97), 1,
      aux_sym__lt_token1,
    ACTIONS(95), 3,
      anon_sym_LBRACK,
      sym_comment,
      sym__sp,
  [470] = 4,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym__sp,
    ACTIONS(201), 1,
      aux_sym__lt_token1,
    STATE(41), 1,
      aux_sym__lt_repeat1,
  [483] = 2,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [491] = 2,
    ACTIONS(205), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [499] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [507] = 2,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [515] = 2,
    ACTIONS(211), 1,
      aux_sym_request_section_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [523] = 2,
    ACTIONS(213), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [531] = 2,
    ACTIONS(194), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [539] = 2,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [547] = 2,
    ACTIONS(217), 1,
      aux_sym_request_section_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [555] = 2,
    ACTIONS(190), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [563] = 2,
    ACTIONS(109), 1,
      aux_sym__lt_token1,
    ACTIONS(107), 2,
      sym_comment,
      sym__sp,
  [571] = 2,
    ACTIONS(219), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(221), 1,
      sym_value,
  [589] = 2,
    ACTIONS(186), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [597] = 2,
    ACTIONS(223), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [605] = 2,
    ACTIONS(225), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [613] = 2,
    ACTIONS(182), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(227), 1,
      sym_value,
  [631] = 2,
    ACTIONS(229), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [639] = 2,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 46,
  [SMALL_STATE(16)] = 66,
  [SMALL_STATE(17)] = 86,
  [SMALL_STATE(18)] = 106,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 152,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 199,
  [SMALL_STATE(23)] = 222,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 262,
  [SMALL_STATE(26)] = 282,
  [SMALL_STATE(27)] = 292,
  [SMALL_STATE(28)] = 308,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 340,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 366,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 395,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 421,
  [SMALL_STATE(37)] = 430,
  [SMALL_STATE(38)] = 439,
  [SMALL_STATE(39)] = 448,
  [SMALL_STATE(40)] = 461,
  [SMALL_STATE(41)] = 470,
  [SMALL_STATE(42)] = 483,
  [SMALL_STATE(43)] = 491,
  [SMALL_STATE(44)] = 499,
  [SMALL_STATE(45)] = 507,
  [SMALL_STATE(46)] = 515,
  [SMALL_STATE(47)] = 523,
  [SMALL_STATE(48)] = 531,
  [SMALL_STATE(49)] = 539,
  [SMALL_STATE(50)] = 547,
  [SMALL_STATE(51)] = 555,
  [SMALL_STATE(52)] = 563,
  [SMALL_STATE(53)] = 571,
  [SMALL_STATE(54)] = 579,
  [SMALL_STATE(55)] = 589,
  [SMALL_STATE(56)] = 597,
  [SMALL_STATE(57)] = 605,
  [SMALL_STATE(58)] = 613,
  [SMALL_STATE(59)] = 621,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 639,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(49),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(58),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(33),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(50),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(55),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(34),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2), SHIFT_REPEAT(61),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 6),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(51),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(35),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(58),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(33),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(24),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(55),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(34),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(25),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(41),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
