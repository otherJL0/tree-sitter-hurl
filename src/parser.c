#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_GET = 1,
  anon_sym_HEAD = 2,
  anon_sym_POST = 3,
  anon_sym_PUT = 4,
  anon_sym_DELETE = 5,
  anon_sym_CONNECT = 6,
  anon_sym_OPTIONS = 7,
  anon_sym_TRACE = 8,
  anon_sym_PATCH = 9,
  aux_sym_url_token1 = 10,
  anon_sym_COLON = 11,
  sym_key = 12,
  anon_sym_LBRACK = 13,
  aux_sym_request_section_token1 = 14,
  anon_sym_RBRACK = 15,
  sym_comment = 16,
  sym__sp = 17,
  aux_sym__lt_token1 = 18,
  sym_source_file = 19,
  sym_request = 20,
  sym_method = 21,
  sym_url = 22,
  sym_header = 23,
  sym__key_value = 24,
  sym_value = 25,
  sym_request_section = 26,
  sym__lt = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_request_repeat1 = 29,
  aux_sym_request_repeat2 = 30,
  aux_sym_request_repeat3 = 31,
  aux_sym_request_section_repeat1 = 32,
  aux_sym__lt_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GET] = "GET",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_CONNECT] = "CONNECT",
  [anon_sym_OPTIONS] = "OPTIONS",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_PATCH] = "PATCH",
  [aux_sym_url_token1] = "url_token1",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [anon_sym_LBRACK] = "[",
  [aux_sym_request_section_token1] = "request_section_token1",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym__key_value] = "_key_value",
  [sym_value] = "value",
  [sym_request_section] = "request_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_request_section_repeat1] = "request_section_repeat1",
  [aux_sym__lt_repeat1] = "_lt_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_CONNECT] = anon_sym_CONNECT,
  [anon_sym_OPTIONS] = anon_sym_OPTIONS,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_PATCH] = anon_sym_PATCH,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_request_section_token1] = aux_sym_request_section_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym__key_value] = sym__key_value,
  [sym_value] = sym_value,
  [sym_request_section] = sym_request_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_request_section_repeat1] = aux_sym_request_section_repeat1,
  [aux_sym__lt_repeat1] = aux_sym__lt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_url_token1] = {
    .visible = false,
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
  [sym_url] = {
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
  [sym_value] = {
    .visible = true,
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
  [aux_sym_request_repeat3] = {
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
  [5] = 4,
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
  [17] = 9,
  [18] = 18,
  [19] = 12,
  [20] = 9,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 12,
  [30] = 9,
  [31] = 31,
  [32] = 31,
  [33] = 31,
  [34] = 34,
  [35] = 28,
  [36] = 36,
  [37] = 37,
  [38] = 31,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 46,
  [48] = 16,
  [49] = 40,
  [50] = 50,
  [51] = 46,
  [52] = 40,
  [53] = 18,
  [54] = 46,
  [55] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(65);
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'U') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'H') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(82);
      if (lookahead == 'U') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'P') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_request_section_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(65);
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(79);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead == '[') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(90);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'G') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(26);
      if (lookahead == '[') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 100},
  [2] = {.lex_state = 99},
  [3] = {.lex_state = 100},
  [4] = {.lex_state = 99},
  [5] = {.lex_state = 100},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 100},
  [11] = {.lex_state = 100},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 100},
  [14] = {.lex_state = 100},
  [15] = {.lex_state = 100},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 100},
  [20] = {.lex_state = 100},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 97},
  [26] = {.lex_state = 97},
  [27] = {.lex_state = 97},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 97},
  [32] = {.lex_state = 97},
  [33] = {.lex_state = 97},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 97},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 97},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 97},
  [41] = {.lex_state = 97},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 100},
  [45] = {.lex_state = 97},
  [46] = {.lex_state = 97},
  [47] = {.lex_state = 97},
  [48] = {.lex_state = 97},
  [49] = {.lex_state = 97},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 97},
  [52] = {.lex_state = 97},
  [53] = {.lex_state = 97},
  [54] = {.lex_state = 97},
  [55] = {.lex_state = 2},
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
    [sym_source_file] = STATE(44),
    [sym_request] = STATE(13),
    [sym_method] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(13),
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
    [sym_request_section] = STATE(15),
    [sym__lt] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat3] = STATE(15),
    [aux_sym__lt_repeat1] = STATE(33),
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
    [sym__sp] = ACTIONS(22),
    [aux_sym__lt_token1] = ACTIONS(25),
  },
  [3] = {
    [sym_request_section] = STATE(14),
    [sym__lt] = STATE(5),
    [aux_sym_request_repeat1] = STATE(5),
    [aux_sym_request_repeat3] = STATE(14),
    [aux_sym__lt_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_GET] = ACTIONS(28),
    [anon_sym_HEAD] = ACTIONS(28),
    [anon_sym_POST] = ACTIONS(28),
    [anon_sym_PUT] = ACTIONS(28),
    [anon_sym_DELETE] = ACTIONS(28),
    [anon_sym_CONNECT] = ACTIONS(28),
    [anon_sym_OPTIONS] = ACTIONS(28),
    [anon_sym_TRACE] = ACTIONS(28),
    [anon_sym_PATCH] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(30),
    [sym_comment] = ACTIONS(32),
    [sym__sp] = ACTIONS(34),
    [aux_sym__lt_token1] = ACTIONS(36),
  },
  [4] = {
    [sym__lt] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym__lt_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_HEAD] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_CONNECT] = ACTIONS(15),
    [anon_sym_OPTIONS] = ACTIONS(15),
    [anon_sym_TRACE] = ACTIONS(15),
    [anon_sym_PATCH] = ACTIONS(15),
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [sym_comment] = ACTIONS(19),
    [sym__sp] = ACTIONS(22),
    [aux_sym__lt_token1] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__sp,
    ACTIONS(46), 1,
      aux_sym__lt_token1,
    STATE(32), 1,
      aux_sym__lt_repeat1,
    STATE(5), 2,
      sym__lt,
      aux_sym_request_repeat1,
    ACTIONS(38), 11,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
  [30] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_key,
    STATE(7), 2,
      sym__key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(51), 10,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
  [59] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(53), 1,
      sym_key,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(57), 10,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
  [88] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_key,
    STATE(8), 2,
      sym__key_value,
      aux_sym_request_section_repeat1,
    ACTIONS(61), 10,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
  [117] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(68), 13,
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
  [137] = 4,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(10), 2,
      sym_request_section,
      aux_sym_request_repeat3,
    ACTIONS(70), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [161] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(11), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(77), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [187] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(82), 13,
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
  [207] = 5,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(11), 2,
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
  [233] = 4,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(10), 2,
      sym_request_section,
      aux_sym_request_repeat3,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [257] = 4,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(10), 2,
      sym_request_section,
      aux_sym_request_repeat3,
    ACTIONS(28), 10,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 11,
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
  [304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 11,
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
  [327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 11,
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
  [350] = 2,
    ACTIONS(82), 1,
      aux_sym__lt_token1,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
      sym_comment,
      sym__sp,
  [369] = 2,
    ACTIONS(68), 1,
      aux_sym__lt_token1,
    ACTIONS(66), 13,
      ts_builtin_sym_end,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
      anon_sym_LBRACK,
      sym_comment,
      sym__sp,
  [388] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 11,
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
  [411] = 8,
    ACTIONS(96), 1,
      sym_key,
    ACTIONS(98), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__sp,
    ACTIONS(102), 1,
      aux_sym__lt_token1,
    STATE(26), 1,
      sym__key_value,
    STATE(33), 1,
      aux_sym__lt_repeat1,
    STATE(2), 2,
      sym__lt,
      aux_sym_request_repeat1,
    STATE(23), 2,
      sym_header,
      aux_sym_request_repeat2,
  [438] = 8,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_key,
    ACTIONS(104), 1,
      sym__sp,
    ACTIONS(106), 1,
      aux_sym__lt_token1,
    STATE(26), 1,
      sym__key_value,
    STATE(32), 1,
      aux_sym__lt_repeat1,
    STATE(3), 2,
      sym__lt,
      aux_sym_request_repeat1,
    STATE(24), 2,
      sym_header,
      aux_sym_request_repeat2,
  [465] = 5,
    ACTIONS(108), 1,
      sym_key,
    ACTIONS(111), 1,
      sym_comment,
    STATE(26), 1,
      sym__key_value,
    ACTIONS(113), 2,
      sym__sp,
      aux_sym__lt_token1,
    STATE(24), 2,
      sym_header,
      aux_sym_request_repeat2,
  [483] = 5,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__sp,
    ACTIONS(119), 1,
      aux_sym__lt_token1,
    STATE(31), 1,
      aux_sym__lt_repeat1,
    STATE(22), 2,
      sym__lt,
      aux_sym_request_repeat1,
  [500] = 5,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__sp,
    ACTIONS(121), 1,
      aux_sym__lt_token1,
    STATE(31), 1,
      aux_sym__lt_repeat1,
    STATE(34), 1,
      sym__lt,
  [516] = 5,
    ACTIONS(123), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym__sp,
    ACTIONS(127), 1,
      aux_sym__lt_token1,
    STATE(6), 1,
      sym__lt,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(129), 1,
      aux_sym_url_token1,
    STATE(18), 1,
      sym_value,
  [545] = 2,
    ACTIONS(80), 2,
      sym_key,
      sym_comment,
    ACTIONS(82), 2,
      sym__sp,
      aux_sym__lt_token1,
  [554] = 2,
    ACTIONS(66), 2,
      sym_key,
      sym_comment,
    ACTIONS(68), 2,
      sym__sp,
      aux_sym__lt_token1,
  [563] = 4,
    ACTIONS(131), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym__sp,
    ACTIONS(135), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [576] = 4,
    ACTIONS(133), 1,
      sym__sp,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [589] = 4,
    ACTIONS(133), 1,
      sym__sp,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [602] = 2,
    ACTIONS(145), 2,
      sym_key,
      sym_comment,
    ACTIONS(147), 2,
      sym__sp,
      aux_sym__lt_token1,
  [611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(149), 1,
      aux_sym_url_token1,
    STATE(53), 1,
      sym_value,
  [624] = 4,
    ACTIONS(151), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym__sp,
    ACTIONS(156), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(158), 1,
      aux_sym_url_token1,
    STATE(25), 1,
      sym_url,
  [650] = 4,
    ACTIONS(133), 1,
      sym__sp,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [663] = 2,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [671] = 2,
    ACTIONS(135), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [679] = 2,
    ACTIONS(168), 1,
      aux_sym__lt_token1,
    ACTIONS(166), 2,
      sym_comment,
      sym__sp,
  [687] = 2,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(172), 1,
      aux_sym_url_token1,
  [705] = 2,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [713] = 2,
    ACTIONS(143), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [721] = 2,
    ACTIONS(176), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [729] = 2,
    ACTIONS(178), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [737] = 2,
    ACTIONS(90), 1,
      aux_sym__lt_token1,
    ACTIONS(88), 2,
      sym_comment,
      sym__sp,
  [745] = 2,
    ACTIONS(139), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [753] = 2,
    ACTIONS(180), 1,
      aux_sym_request_section_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [761] = 2,
    ACTIONS(182), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [769] = 2,
    ACTIONS(162), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [777] = 2,
    ACTIONS(94), 1,
      aux_sym__lt_token1,
    ACTIONS(92), 2,
      sym_comment,
      sym__sp,
  [785] = 2,
    ACTIONS(184), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [793] = 2,
    ACTIONS(186), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 187,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 257,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 304,
  [SMALL_STATE(18)] = 327,
  [SMALL_STATE(19)] = 350,
  [SMALL_STATE(20)] = 369,
  [SMALL_STATE(21)] = 388,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 438,
  [SMALL_STATE(24)] = 465,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 500,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 532,
  [SMALL_STATE(29)] = 545,
  [SMALL_STATE(30)] = 554,
  [SMALL_STATE(31)] = 563,
  [SMALL_STATE(32)] = 576,
  [SMALL_STATE(33)] = 589,
  [SMALL_STATE(34)] = 602,
  [SMALL_STATE(35)] = 611,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 637,
  [SMALL_STATE(38)] = 650,
  [SMALL_STATE(39)] = 663,
  [SMALL_STATE(40)] = 671,
  [SMALL_STATE(41)] = 679,
  [SMALL_STATE(42)] = 687,
  [SMALL_STATE(43)] = 695,
  [SMALL_STATE(44)] = 705,
  [SMALL_STATE(45)] = 713,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 729,
  [SMALL_STATE(48)] = 737,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 753,
  [SMALL_STATE(51)] = 761,
  [SMALL_STATE(52)] = 769,
  [SMALL_STATE(53)] = 777,
  [SMALL_STATE(54)] = 785,
  [SMALL_STATE(55)] = 793,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(45),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(33),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(49),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(32),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_section_repeat1, 2), SHIFT_REPEAT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(50),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(39),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(36),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
