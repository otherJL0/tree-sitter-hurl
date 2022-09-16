#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  anon_sym_LBRACKQueryStringParams_RBRACK = 13,
  anon_sym_LBRACKFormParams_RBRACK = 14,
  sym_comment = 15,
  sym__sp = 16,
  aux_sym__lt_token1 = 17,
  sym_source_file = 18,
  sym_request = 19,
  sym_method = 20,
  sym_url = 21,
  sym_header = 22,
  sym__key_value = 23,
  sym_value = 24,
  sym_request_section = 25,
  sym_query_string_params_section = 26,
  sym_form_params_section = 27,
  sym__lt = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_request_repeat1 = 30,
  aux_sym_request_repeat2 = 31,
  aux_sym_request_repeat3 = 32,
  aux_sym_query_string_params_section_repeat1 = 33,
  aux_sym__lt_repeat1 = 34,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
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
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_request_repeat3] = "request_repeat3",
  [aux_sym_query_string_params_section_repeat1] = "query_string_params_section_repeat1",
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
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
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_request_repeat3] = aux_sym_request_repeat3,
  [aux_sym_query_string_params_section_repeat1] = aux_sym_query_string_params_section_repeat1,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
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
  [sym_query_string_params_section] = {
    .visible = true,
    .named = true,
  },
  [sym_form_params_section] = {
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
  [aux_sym_query_string_params_section_repeat1] = {
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
  [8] = 4,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 14,
  [20] = 15,
  [21] = 21,
  [22] = 14,
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
  [33] = 15,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 34,
  [41] = 14,
  [42] = 34,
  [43] = 43,
  [44] = 21,
  [45] = 16,
  [46] = 46,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 49,
  [53] = 49,
  [54] = 47,
  [55] = 55,
  [56] = 49,
  [57] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(60);
      if (lookahead == 'Q') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == ']') ADVANCE(121);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(120);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(119);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 128},
  [2] = {.lex_state = 127},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 127},
  [5] = {.lex_state = 128},
  [6] = {.lex_state = 128},
  [7] = {.lex_state = 128},
  [8] = {.lex_state = 128},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 127},
  [15] = {.lex_state = 127},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 128},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 128},
  [20] = {.lex_state = 128},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 128},
  [24] = {.lex_state = 128},
  [25] = {.lex_state = 126},
  [26] = {.lex_state = 126},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 125},
  [29] = {.lex_state = 125},
  [30] = {.lex_state = 125},
  [31] = {.lex_state = 125},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 125},
  [35] = {.lex_state = 125},
  [36] = {.lex_state = 126},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 125},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 125},
  [41] = {.lex_state = 126},
  [42] = {.lex_state = 125},
  [43] = {.lex_state = 125},
  [44] = {.lex_state = 125},
  [45] = {.lex_state = 125},
  [46] = {.lex_state = 128},
  [47] = {.lex_state = 125},
  [48] = {.lex_state = 125},
  [49] = {.lex_state = 125},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 125},
  [52] = {.lex_state = 125},
  [53] = {.lex_state = 125},
  [54] = {.lex_state = 125},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 125},
  [57] = {.lex_state = 2},
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(5),
    [aux_sym__lt_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_request] = STATE(17),
    [sym_method] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(17),
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
    [sym_request_section] = STATE(6),
    [sym_query_string_params_section] = STATE(24),
    [sym_form_params_section] = STATE(24),
    [sym__lt] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym_request_repeat3] = STATE(6),
    [aux_sym__lt_repeat1] = STATE(40),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [sym__sp] = ACTIONS(24),
    [aux_sym__lt_token1] = ACTIONS(27),
  },
  [3] = {
    [sym_request_section] = STATE(5),
    [sym_query_string_params_section] = STATE(24),
    [sym_form_params_section] = STATE(24),
    [sym__lt] = STATE(8),
    [aux_sym_request_repeat1] = STATE(8),
    [aux_sym_request_repeat3] = STATE(5),
    [aux_sym__lt_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_GET] = ACTIONS(30),
    [anon_sym_HEAD] = ACTIONS(30),
    [anon_sym_POST] = ACTIONS(30),
    [anon_sym_PUT] = ACTIONS(30),
    [anon_sym_DELETE] = ACTIONS(30),
    [anon_sym_CONNECT] = ACTIONS(30),
    [anon_sym_OPTIONS] = ACTIONS(30),
    [anon_sym_TRACE] = ACTIONS(30),
    [anon_sym_PATCH] = ACTIONS(30),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(32),
    [sym__sp] = ACTIONS(34),
    [aux_sym__lt_token1] = ACTIONS(36),
  },
  [4] = {
    [sym__lt] = STATE(4),
    [aux_sym_request_repeat1] = STATE(4),
    [aux_sym__lt_repeat1] = STATE(40),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(38),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(38),
    [sym_comment] = ACTIONS(21),
    [sym__sp] = ACTIONS(24),
    [aux_sym__lt_token1] = ACTIONS(27),
  },
  [5] = {
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(24),
    [sym_form_params_section] = STATE(24),
    [aux_sym_request_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(40),
    [anon_sym_GET] = ACTIONS(40),
    [anon_sym_HEAD] = ACTIONS(40),
    [anon_sym_POST] = ACTIONS(40),
    [anon_sym_PUT] = ACTIONS(40),
    [anon_sym_DELETE] = ACTIONS(40),
    [anon_sym_CONNECT] = ACTIONS(40),
    [anon_sym_OPTIONS] = ACTIONS(40),
    [anon_sym_TRACE] = ACTIONS(40),
    [anon_sym_PATCH] = ACTIONS(40),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [6] = {
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(24),
    [sym_form_params_section] = STATE(24),
    [aux_sym_request_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(30),
    [anon_sym_GET] = ACTIONS(30),
    [anon_sym_HEAD] = ACTIONS(30),
    [anon_sym_POST] = ACTIONS(30),
    [anon_sym_PUT] = ACTIONS(30),
    [anon_sym_DELETE] = ACTIONS(30),
    [anon_sym_CONNECT] = ACTIONS(30),
    [anon_sym_OPTIONS] = ACTIONS(30),
    [anon_sym_TRACE] = ACTIONS(30),
    [anon_sym_PATCH] = ACTIONS(30),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [7] = {
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(24),
    [sym_form_params_section] = STATE(24),
    [aux_sym_request_repeat3] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_GET] = ACTIONS(42),
    [anon_sym_HEAD] = ACTIONS(42),
    [anon_sym_POST] = ACTIONS(42),
    [anon_sym_PUT] = ACTIONS(42),
    [anon_sym_DELETE] = ACTIONS(42),
    [anon_sym_CONNECT] = ACTIONS(42),
    [anon_sym_OPTIONS] = ACTIONS(42),
    [anon_sym_TRACE] = ACTIONS(42),
    [anon_sym_PATCH] = ACTIONS(42),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(44),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(3),
  },
  [8] = {
    [sym__lt] = STATE(8),
    [aux_sym_request_repeat1] = STATE(8),
    [aux_sym__lt_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_GET] = ACTIONS(38),
    [anon_sym_HEAD] = ACTIONS(38),
    [anon_sym_POST] = ACTIONS(38),
    [anon_sym_PUT] = ACTIONS(38),
    [anon_sym_DELETE] = ACTIONS(38),
    [anon_sym_CONNECT] = ACTIONS(38),
    [anon_sym_OPTIONS] = ACTIONS(38),
    [anon_sym_TRACE] = ACTIONS(38),
    [anon_sym_PATCH] = ACTIONS(38),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(38),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(38),
    [sym_comment] = ACTIONS(50),
    [sym__sp] = ACTIONS(53),
    [aux_sym__lt_token1] = ACTIONS(56),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(63), 1,
      sym_key,
    STATE(11), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(61), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [30] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(63), 1,
      sym_key,
    STATE(12), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(67), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [60] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(63), 1,
      sym_key,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(71), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [90] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(63), 1,
      sym_key,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(75), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [120] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(81), 1,
      sym_key,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(79), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [150] = 2,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_comment,
    ACTIONS(86), 12,
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
      sym__sp,
      aux_sym__lt_token1,
  [171] = 2,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_comment,
    ACTIONS(90), 12,
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
      sym__sp,
      aux_sym__lt_token1,
  [192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(94), 10,
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
  [216] = 5,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(23), 2,
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
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(90), 10,
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
  [266] = 2,
    ACTIONS(86), 1,
      aux_sym__lt_token1,
    ACTIONS(84), 14,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_comment,
      sym__sp,
  [286] = 2,
    ACTIONS(90), 1,
      aux_sym__lt_token1,
    ACTIONS(88), 14,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      sym_comment,
      sym__sp,
  [306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(100), 10,
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
  [330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(86), 10,
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
  [354] = 5,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(23), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(104), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [380] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    ACTIONS(107), 12,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
  [399] = 8,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_key,
    ACTIONS(111), 1,
      sym__sp,
    ACTIONS(113), 1,
      aux_sym__lt_token1,
    STATE(29), 1,
      sym__key_value,
    STATE(35), 1,
      aux_sym__lt_repeat1,
    STATE(3), 2,
      sym__lt,
      aux_sym_request_repeat1,
    STATE(27), 2,
      sym_header,
      aux_sym_request_repeat2,
  [426] = 8,
    ACTIONS(109), 1,
      sym_key,
    ACTIONS(115), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym__sp,
    ACTIONS(119), 1,
      aux_sym__lt_token1,
    STATE(29), 1,
      sym__key_value,
    STATE(40), 1,
      aux_sym__lt_repeat1,
    STATE(2), 2,
      sym__lt,
      aux_sym_request_repeat1,
    STATE(25), 2,
      sym_header,
      aux_sym_request_repeat2,
  [453] = 5,
    ACTIONS(121), 1,
      sym_key,
    ACTIONS(124), 1,
      sym_comment,
    STATE(29), 1,
      sym__key_value,
    ACTIONS(126), 2,
      sym__sp,
      aux_sym__lt_token1,
    STATE(27), 2,
      sym_header,
      aux_sym_request_repeat2,
  [471] = 5,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__sp,
    ACTIONS(132), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(26), 2,
      sym__lt,
      aux_sym_request_repeat1,
  [488] = 5,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__sp,
    ACTIONS(134), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      sym__lt,
    STATE(42), 1,
      aux_sym__lt_repeat1,
  [504] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__sp,
    ACTIONS(140), 1,
      aux_sym__lt_token1,
    STATE(10), 1,
      sym__lt,
    STATE(34), 1,
      aux_sym__lt_repeat1,
  [520] = 5,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__sp,
    ACTIONS(142), 1,
      aux_sym__lt_token1,
    STATE(9), 1,
      sym__lt,
    STATE(34), 1,
      aux_sym__lt_repeat1,
  [536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(144), 1,
      aux_sym_url_token1,
    STATE(28), 1,
      sym_url,
  [549] = 2,
    ACTIONS(88), 2,
      sym_key,
      sym_comment,
    ACTIONS(90), 2,
      sym__sp,
      aux_sym__lt_token1,
  [558] = 4,
    ACTIONS(146), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym__sp,
    ACTIONS(150), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [571] = 4,
    ACTIONS(148), 1,
      sym__sp,
    ACTIONS(152), 1,
      sym_comment,
    ACTIONS(154), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [584] = 2,
    ACTIONS(156), 2,
      sym_key,
      sym_comment,
    ACTIONS(158), 2,
      sym__sp,
      aux_sym__lt_token1,
  [593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(160), 1,
      aux_sym_url_token1,
    STATE(44), 1,
      sym_value,
  [606] = 4,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__sp,
    ACTIONS(167), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(169), 1,
      aux_sym_url_token1,
    STATE(21), 1,
      sym_value,
  [632] = 4,
    ACTIONS(148), 1,
      sym__sp,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [645] = 2,
    ACTIONS(84), 2,
      sym_key,
      sym_comment,
    ACTIONS(86), 2,
      sym__sp,
      aux_sym__lt_token1,
  [654] = 4,
    ACTIONS(148), 1,
      sym__sp,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(177), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
  [667] = 2,
    ACTIONS(181), 1,
      aux_sym__lt_token1,
    ACTIONS(179), 2,
      sym_comment,
      sym__sp,
  [675] = 2,
    ACTIONS(100), 1,
      aux_sym__lt_token1,
    ACTIONS(98), 2,
      sym_comment,
      sym__sp,
  [683] = 2,
    ACTIONS(94), 1,
      aux_sym__lt_token1,
    ACTIONS(92), 2,
      sym_comment,
      sym__sp,
  [691] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [699] = 2,
    ACTIONS(173), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [707] = 2,
    ACTIONS(177), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [715] = 2,
    ACTIONS(185), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [723] = 2,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [731] = 2,
    ACTIONS(154), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [739] = 2,
    ACTIONS(189), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [747] = 2,
    ACTIONS(191), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [755] = 2,
    ACTIONS(150), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(193), 1,
      aux_sym_url_token1,
  [773] = 2,
    ACTIONS(195), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [781] = 2,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 30,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 120,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 216,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 306,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 380,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 453,
  [SMALL_STATE(28)] = 471,
  [SMALL_STATE(29)] = 488,
  [SMALL_STATE(30)] = 504,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 536,
  [SMALL_STATE(33)] = 549,
  [SMALL_STATE(34)] = 558,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 584,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 619,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 654,
  [SMALL_STATE(43)] = 667,
  [SMALL_STATE(44)] = 675,
  [SMALL_STATE(45)] = 683,
  [SMALL_STATE(46)] = 691,
  [SMALL_STATE(47)] = 699,
  [SMALL_STATE(48)] = 707,
  [SMALL_STATE(49)] = 715,
  [SMALL_STATE(50)] = 723,
  [SMALL_STATE(51)] = 731,
  [SMALL_STATE(52)] = 739,
  [SMALL_STATE(53)] = 747,
  [SMALL_STATE(54)] = 755,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 773,
  [SMALL_STATE(57)] = 781,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(47),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(40),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(31),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat3, 2), SHIFT_REPEAT(30),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(51),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(35),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(57),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(50),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(38),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
