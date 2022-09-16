#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_LBRACKQueryStringParams_RBRACK = 14,
  anon_sym_LBRACKFormParams_RBRACK = 15,
  anon_sym_LBRACKCookies_RBRACK = 16,
  sym_comment = 17,
  sym__sp = 18,
  aux_sym__lt_token1 = 19,
  sym_source_file = 20,
  sym_request = 21,
  sym_method = 22,
  sym_header = 23,
  sym_key_value = 24,
  sym_request_section = 25,
  sym_query_string_params_section = 26,
  sym_form_params_section = 27,
  sym_cookies_section = 28,
  sym__lt = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_request_repeat1 = 31,
  aux_sym_request_repeat2 = 32,
  aux_sym_header_repeat1 = 33,
  aux_sym__lt_repeat1 = 34,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = "[QueryStringParams]",
  [anon_sym_LBRACKFormParams_RBRACK] = "[FormParams]",
  [anon_sym_LBRACKCookies_RBRACK] = "[Cookies]",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_method] = "method",
  [sym_header] = "header",
  [sym_key_value] = "key_value",
  [sym_request_section] = "request_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_cookies_section] = "cookies_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym_header_repeat1] = "header_repeat1",
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = anon_sym_LBRACKQueryStringParams_RBRACK,
  [anon_sym_LBRACKFormParams_RBRACK] = anon_sym_LBRACKFormParams_RBRACK,
  [anon_sym_LBRACKCookies_RBRACK] = anon_sym_LBRACKCookies_RBRACK,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_method] = sym_method,
  [sym_header] = sym_header,
  [sym_key_value] = sym_key_value,
  [sym_request_section] = sym_request_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_cookies_section] = sym_cookies_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
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
  [anon_sym_LBRACKQueryStringParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKFormParams_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKCookies_RBRACK] = {
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
  [sym_key_value] = {
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
  [sym_cookies_section] = {
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
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 8,
  [29] = 11,
  [30] = 8,
  [31] = 11,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 8,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 42,
  [47] = 42,
  [48] = 42,
  [49] = 49,
  [50] = 42,
  [51] = 11,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 8,
  [57] = 11,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 15,
  [63] = 59,
  [64] = 60,
  [65] = 61,
  [66] = 66,
  [67] = 59,
  [68] = 61,
  [69] = 69,
  [70] = 59,
  [71] = 61,
  [72] = 61,
  [73] = 59,
  [74] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(101);
      if (lookahead == 'G') ADVANCE(102);
      if (lookahead == 'H') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == 'P') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'Q') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'H') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == 'I') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == ']') ADVANCE(167);
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(163);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == 'U') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(147);
      if (lookahead == 'Q') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'P') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'P') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'R') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == ']') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'y') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACKQueryStringParams_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LBRACKFormParams_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACKCookies_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(101);
      if (lookahead == 'G') ADVANCE(102);
      if (lookahead == 'H') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == 'P') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(72);
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == 'C') ADVANCE(25);
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'G') ADVANCE(13);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 176},
  [2] = {.lex_state = 175},
  [3] = {.lex_state = 175},
  [4] = {.lex_state = 176},
  [5] = {.lex_state = 176},
  [6] = {.lex_state = 176},
  [7] = {.lex_state = 175},
  [8] = {.lex_state = 175},
  [9] = {.lex_state = 175},
  [10] = {.lex_state = 175},
  [11] = {.lex_state = 175},
  [12] = {.lex_state = 176},
  [13] = {.lex_state = 176},
  [14] = {.lex_state = 176},
  [15] = {.lex_state = 176},
  [16] = {.lex_state = 176},
  [17] = {.lex_state = 176},
  [18] = {.lex_state = 176},
  [19] = {.lex_state = 176},
  [20] = {.lex_state = 176},
  [21] = {.lex_state = 176},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 172},
  [25] = {.lex_state = 172},
  [26] = {.lex_state = 174},
  [27] = {.lex_state = 174},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 172},
  [31] = {.lex_state = 172},
  [32] = {.lex_state = 173},
  [33] = {.lex_state = 173},
  [34] = {.lex_state = 173},
  [35] = {.lex_state = 173},
  [36] = {.lex_state = 173},
  [37] = {.lex_state = 173},
  [38] = {.lex_state = 173},
  [39] = {.lex_state = 173},
  [40] = {.lex_state = 173},
  [41] = {.lex_state = 174},
  [42] = {.lex_state = 173},
  [43] = {.lex_state = 174},
  [44] = {.lex_state = 174},
  [45] = {.lex_state = 174},
  [46] = {.lex_state = 173},
  [47] = {.lex_state = 173},
  [48] = {.lex_state = 173},
  [49] = {.lex_state = 174},
  [50] = {.lex_state = 173},
  [51] = {.lex_state = 174},
  [52] = {.lex_state = 173},
  [53] = {.lex_state = 174},
  [54] = {.lex_state = 174},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 174},
  [57] = {.lex_state = 174},
  [58] = {.lex_state = 176},
  [59] = {.lex_state = 173},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 173},
  [62] = {.lex_state = 173},
  [63] = {.lex_state = 173},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 173},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 173},
  [68] = {.lex_state = 173},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 173},
  [71] = {.lex_state = 173},
  [72] = {.lex_state = 173},
  [73] = {.lex_state = 173},
  [74] = {.lex_state = 2},
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
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(5),
    [aux_sym__lt_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_request] = STATE(21),
    [sym_method] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(21),
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
    [sym_header] = STATE(7),
    [sym_key_value] = STATE(36),
    [sym_request_section] = STATE(4),
    [sym_query_string_params_section] = STATE(16),
    [sym_form_params_section] = STATE(16),
    [sym_cookies_section] = STATE(16),
    [sym__lt] = STATE(22),
    [aux_sym_request_repeat1] = STATE(7),
    [aux_sym_request_repeat2] = STATE(4),
    [aux_sym_header_repeat1] = STATE(22),
    [aux_sym__lt_repeat1] = STATE(50),
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
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym__sp] = ACTIONS(25),
    [aux_sym__lt_token1] = ACTIONS(27),
  },
  [3] = {
    [sym_header] = STATE(2),
    [sym_key_value] = STATE(36),
    [sym_request_section] = STATE(5),
    [sym_query_string_params_section] = STATE(16),
    [sym_form_params_section] = STATE(16),
    [sym_cookies_section] = STATE(16),
    [sym__lt] = STATE(22),
    [aux_sym_request_repeat1] = STATE(2),
    [aux_sym_request_repeat2] = STATE(5),
    [aux_sym_header_repeat1] = STATE(22),
    [aux_sym__lt_repeat1] = STATE(50),
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
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(19),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [sym__sp] = ACTIONS(25),
    [aux_sym__lt_token1] = ACTIONS(27),
  },
  [4] = {
    [sym_request_section] = STATE(6),
    [sym_query_string_params_section] = STATE(16),
    [sym_form_params_section] = STATE(16),
    [sym_cookies_section] = STATE(16),
    [sym__lt] = STATE(25),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(25),
    [aux_sym__lt_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_GET] = ACTIONS(33),
    [anon_sym_HEAD] = ACTIONS(33),
    [anon_sym_POST] = ACTIONS(33),
    [anon_sym_PUT] = ACTIONS(33),
    [anon_sym_DELETE] = ACTIONS(33),
    [anon_sym_CONNECT] = ACTIONS(33),
    [anon_sym_OPTIONS] = ACTIONS(33),
    [anon_sym_TRACE] = ACTIONS(33),
    [anon_sym_PATCH] = ACTIONS(33),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [sym__sp] = ACTIONS(43),
    [aux_sym__lt_token1] = ACTIONS(45),
  },
  [5] = {
    [sym_request_section] = STATE(6),
    [sym_query_string_params_section] = STATE(16),
    [sym_form_params_section] = STATE(16),
    [sym_cookies_section] = STATE(16),
    [sym__lt] = STATE(25),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(25),
    [aux_sym__lt_repeat1] = STATE(48),
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
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(35),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(37),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
    [sym__sp] = ACTIONS(43),
    [aux_sym__lt_token1] = ACTIONS(45),
  },
  [6] = {
    [sym_request_section] = STATE(6),
    [sym_query_string_params_section] = STATE(16),
    [sym_form_params_section] = STATE(16),
    [sym_cookies_section] = STATE(16),
    [sym__lt] = STATE(25),
    [aux_sym_request_repeat2] = STATE(6),
    [aux_sym_header_repeat1] = STATE(25),
    [aux_sym__lt_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_GET] = ACTIONS(47),
    [anon_sym_HEAD] = ACTIONS(47),
    [anon_sym_POST] = ACTIONS(47),
    [anon_sym_PUT] = ACTIONS(47),
    [anon_sym_DELETE] = ACTIONS(47),
    [anon_sym_CONNECT] = ACTIONS(47),
    [anon_sym_OPTIONS] = ACTIONS(47),
    [anon_sym_TRACE] = ACTIONS(47),
    [anon_sym_PATCH] = ACTIONS(47),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(49),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(52),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(55),
    [sym_comment] = ACTIONS(58),
    [sym__sp] = ACTIONS(61),
    [aux_sym__lt_token1] = ACTIONS(64),
  },
  [7] = {
    [sym_header] = STATE(7),
    [sym_key_value] = STATE(36),
    [sym__lt] = STATE(26),
    [aux_sym_request_repeat1] = STATE(7),
    [aux_sym_header_repeat1] = STATE(26),
    [aux_sym__lt_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_GET] = ACTIONS(69),
    [anon_sym_HEAD] = ACTIONS(69),
    [anon_sym_POST] = ACTIONS(69),
    [anon_sym_PUT] = ACTIONS(69),
    [anon_sym_DELETE] = ACTIONS(69),
    [anon_sym_CONNECT] = ACTIONS(69),
    [anon_sym_OPTIONS] = ACTIONS(69),
    [anon_sym_TRACE] = ACTIONS(69),
    [anon_sym_PATCH] = ACTIONS(69),
    [sym_key] = ACTIONS(71),
    [anon_sym_LBRACKQueryStringParams_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKFormParams_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKCookies_RBRACK] = ACTIONS(69),
    [sym_comment] = ACTIONS(74),
    [sym__sp] = ACTIONS(77),
    [aux_sym__lt_token1] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(85), 15,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [22] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(89), 15,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [44] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(93), 15,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [66] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(97), 15,
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
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [88] = 2,
    ACTIONS(101), 1,
      aux_sym__lt_token1,
    ACTIONS(99), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [109] = 2,
    ACTIONS(105), 1,
      aux_sym__lt_token1,
    ACTIONS(103), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [130] = 2,
    ACTIONS(109), 1,
      aux_sym__lt_token1,
    ACTIONS(107), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [151] = 2,
    ACTIONS(113), 1,
      aux_sym__lt_token1,
    ACTIONS(111), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [172] = 2,
    ACTIONS(117), 1,
      aux_sym__lt_token1,
    ACTIONS(115), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [193] = 2,
    ACTIONS(121), 1,
      aux_sym__lt_token1,
    ACTIONS(119), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [214] = 2,
    ACTIONS(125), 1,
      aux_sym__lt_token1,
    ACTIONS(123), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [235] = 2,
    ACTIONS(129), 1,
      aux_sym__lt_token1,
    ACTIONS(127), 15,
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
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [256] = 5,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(20), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(133), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [282] = 5,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(20), 2,
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
  [308] = 10,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__sp,
    ACTIONS(138), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(140), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(142), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(144), 1,
      aux_sym__lt_token1,
    STATE(35), 1,
      sym_key_value,
    STATE(50), 1,
      aux_sym__lt_repeat1,
    STATE(23), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [340] = 6,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__sp,
    ACTIONS(154), 1,
      aux_sym__lt_token1,
    STATE(50), 1,
      aux_sym__lt_repeat1,
    STATE(23), 2,
      sym__lt,
      aux_sym_header_repeat1,
    ACTIONS(146), 4,
      sym_key,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
  [363] = 6,
    ACTIONS(159), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym__sp,
    ACTIONS(165), 1,
      aux_sym__lt_token1,
    STATE(48), 1,
      aux_sym__lt_repeat1,
    STATE(24), 2,
      sym__lt,
      aux_sym_header_repeat1,
    ACTIONS(157), 3,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
  [385] = 8,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym__sp,
    ACTIONS(168), 1,
      anon_sym_LBRACKQueryStringParams_RBRACK,
    ACTIONS(170), 1,
      anon_sym_LBRACKFormParams_RBRACK,
    ACTIONS(172), 1,
      anon_sym_LBRACKCookies_RBRACK,
    ACTIONS(174), 1,
      aux_sym__lt_token1,
    STATE(48), 1,
      aux_sym__lt_repeat1,
    STATE(24), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [411] = 7,
    ACTIONS(176), 1,
      sym_key,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym__sp,
    ACTIONS(182), 1,
      aux_sym__lt_token1,
    STATE(35), 1,
      sym_key_value,
    STATE(47), 1,
      aux_sym__lt_repeat1,
    STATE(27), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [434] = 6,
    ACTIONS(157), 1,
      sym_key,
    ACTIONS(184), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym__sp,
    ACTIONS(190), 1,
      aux_sym__lt_token1,
    STATE(47), 1,
      aux_sym__lt_repeat1,
    STATE(27), 2,
      sym__lt,
      aux_sym_header_repeat1,
  [454] = 2,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(85), 6,
      sym_key,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [466] = 2,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(97), 6,
      sym_key,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym__sp,
      aux_sym__lt_token1,
  [478] = 2,
    ACTIONS(85), 1,
      aux_sym__lt_token1,
    ACTIONS(83), 5,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [489] = 2,
    ACTIONS(97), 1,
      aux_sym__lt_token1,
    ACTIONS(95), 5,
      anon_sym_LBRACKQueryStringParams_RBRACK,
      anon_sym_LBRACKFormParams_RBRACK,
      anon_sym_LBRACKCookies_RBRACK,
      sym_comment,
      sym__sp,
  [500] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(197), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(43), 1,
      sym__lt,
  [516] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(199), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(44), 1,
      sym__lt,
  [532] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(201), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(45), 1,
      sym__lt,
  [548] = 5,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__sp,
    ACTIONS(207), 1,
      aux_sym__lt_token1,
    STATE(9), 1,
      sym__lt,
    STATE(46), 1,
      aux_sym__lt_repeat1,
  [564] = 5,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__sp,
    ACTIONS(209), 1,
      aux_sym__lt_token1,
    STATE(10), 1,
      sym__lt,
    STATE(46), 1,
      aux_sym__lt_repeat1,
  [580] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(211), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(54), 1,
      sym__lt,
  [596] = 5,
    ACTIONS(203), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__sp,
    ACTIONS(213), 1,
      aux_sym__lt_token1,
    STATE(3), 1,
      sym__lt,
    STATE(46), 1,
      aux_sym__lt_repeat1,
  [612] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(215), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(53), 1,
      sym__lt,
  [628] = 5,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__sp,
    ACTIONS(217), 1,
      aux_sym__lt_token1,
    STATE(42), 1,
      aux_sym__lt_repeat1,
    STATE(49), 1,
      sym__lt,
  [644] = 2,
    ACTIONS(83), 2,
      sym_key,
      sym_comment,
    ACTIONS(85), 2,
      sym__sp,
      aux_sym__lt_token1,
  [653] = 4,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(223), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(17), 1,
      sym_key_value,
  [679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(18), 1,
      sym_key_value,
  [692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(19), 1,
      sym_key_value,
  [705] = 4,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(227), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [718] = 4,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(233), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [731] = 4,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(235), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(13), 1,
      sym_key_value,
  [757] = 4,
    ACTIONS(221), 1,
      sym__sp,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(241), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [770] = 2,
    ACTIONS(95), 2,
      sym_key,
      sym_comment,
    ACTIONS(97), 2,
      sym__sp,
      aux_sym__lt_token1,
  [779] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__sp,
    ACTIONS(248), 1,
      aux_sym__lt_token1,
    STATE(52), 1,
      aux_sym__lt_repeat1,
  [792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(14), 1,
      sym_key_value,
  [805] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(225), 1,
      sym_key,
    STATE(12), 1,
      sym_key_value,
  [818] = 2,
    ACTIONS(250), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(83), 1,
      sym_key,
  [836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(95), 1,
      sym_key,
  [846] = 2,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [854] = 2,
    ACTIONS(254), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(256), 1,
      sym_value,
  [872] = 2,
    ACTIONS(241), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [880] = 2,
    ACTIONS(113), 1,
      aux_sym__lt_token1,
    ACTIONS(111), 2,
      sym_comment,
      sym__sp,
  [888] = 2,
    ACTIONS(258), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(260), 1,
      sym_value,
  [906] = 2,
    ACTIONS(223), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [914] = 2,
    ACTIONS(262), 1,
      aux_sym_request_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [922] = 2,
    ACTIONS(264), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [930] = 2,
    ACTIONS(237), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [938] = 2,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [946] = 2,
    ACTIONS(268), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [954] = 2,
    ACTIONS(233), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [962] = 2,
    ACTIONS(229), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [970] = 2,
    ACTIONS(270), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [978] = 2,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 22,
  [SMALL_STATE(10)] = 44,
  [SMALL_STATE(11)] = 66,
  [SMALL_STATE(12)] = 88,
  [SMALL_STATE(13)] = 109,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 172,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 282,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 411,
  [SMALL_STATE(27)] = 434,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 466,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 500,
  [SMALL_STATE(33)] = 516,
  [SMALL_STATE(34)] = 532,
  [SMALL_STATE(35)] = 548,
  [SMALL_STATE(36)] = 564,
  [SMALL_STATE(37)] = 580,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 612,
  [SMALL_STATE(40)] = 628,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 666,
  [SMALL_STATE(44)] = 679,
  [SMALL_STATE(45)] = 692,
  [SMALL_STATE(46)] = 705,
  [SMALL_STATE(47)] = 718,
  [SMALL_STATE(48)] = 731,
  [SMALL_STATE(49)] = 744,
  [SMALL_STATE(50)] = 757,
  [SMALL_STATE(51)] = 770,
  [SMALL_STATE(52)] = 779,
  [SMALL_STATE(53)] = 792,
  [SMALL_STATE(54)] = 805,
  [SMALL_STATE(55)] = 818,
  [SMALL_STATE(56)] = 826,
  [SMALL_STATE(57)] = 836,
  [SMALL_STATE(58)] = 846,
  [SMALL_STATE(59)] = 854,
  [SMALL_STATE(60)] = 862,
  [SMALL_STATE(61)] = 872,
  [SMALL_STATE(62)] = 880,
  [SMALL_STATE(63)] = 888,
  [SMALL_STATE(64)] = 896,
  [SMALL_STATE(65)] = 906,
  [SMALL_STATE(66)] = 914,
  [SMALL_STATE(67)] = 922,
  [SMALL_STATE(68)] = 930,
  [SMALL_STATE(69)] = 938,
  [SMALL_STATE(70)] = 946,
  [SMALL_STATE(71)] = 954,
  [SMALL_STATE(72)] = 962,
  [SMALL_STATE(73)] = 970,
  [SMALL_STATE(74)] = 978,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(40),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(68),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(48),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(69),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(71),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookies_section, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookies_section, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(61),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(50),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(23),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(68),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(48),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(71),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(47),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2), SHIFT_REPEAT(27),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(52),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
