#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_QueryStringParams = 14,
  anon_sym_RBRACK = 15,
  anon_sym_FormParams = 16,
  anon_sym_Cookies = 17,
  sym_comment = 18,
  sym__sp = 19,
  aux_sym__lt_token1 = 20,
  sym_source_file = 21,
  sym_request = 22,
  sym__method_section = 23,
  sym_method = 24,
  sym_url = 25,
  sym_header = 26,
  sym__key_value = 27,
  sym_value = 28,
  sym_request_section = 29,
  sym_query_string_params_section = 30,
  sym_form_params_section = 31,
  sym_cookie_section = 32,
  sym__lt = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_request_repeat1 = 35,
  aux_sym_request_repeat2 = 36,
  aux_sym__method_section_repeat1 = 37,
  aux_sym_query_string_params_section_repeat1 = 38,
  aux_sym__lt_repeat1 = 39,
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
  [anon_sym_QueryStringParams] = "QueryStringParams",
  [anon_sym_RBRACK] = "]",
  [anon_sym_FormParams] = "FormParams",
  [anon_sym_Cookies] = "Cookies",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym__method_section] = "_method_section",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym__key_value] = "_key_value",
  [sym_value] = "value",
  [sym_request_section] = "request_section",
  [sym_query_string_params_section] = "query_string_params_section",
  [sym_form_params_section] = "form_params_section",
  [sym_cookie_section] = "cookie_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym__method_section_repeat1] = "_method_section_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_QueryStringParams] = anon_sym_QueryStringParams,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_FormParams] = anon_sym_FormParams,
  [anon_sym_Cookies] = anon_sym_Cookies,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym__method_section] = sym__method_section,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym__key_value] = sym__key_value,
  [sym_value] = sym_value,
  [sym_request_section] = sym_request_section,
  [sym_query_string_params_section] = sym_query_string_params_section,
  [sym_form_params_section] = sym_form_params_section,
  [sym_cookie_section] = sym_cookie_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym__method_section_repeat1] = aux_sym__method_section_repeat1,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QueryStringParams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FormParams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cookies] = {
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
  [sym__method_section] = {
    .visible = false,
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
  [sym_cookie_section] = {
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
  [aux_sym__method_section_repeat1] = {
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
  [22] = 21,
  [23] = 20,
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
  [36] = 36,
  [37] = 33,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 24,
  [44] = 25,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 42,
  [52] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'G') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(113);
      if (lookahead == 'U') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'H') ADVANCE(91);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'C') ADVANCE(27);
      if (lookahead == 'D') ADVANCE(13);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'G') ADVANCE(14);
      if (lookahead == 'H') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'Q') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_FormParams);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Cookies);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(121);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(74);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(10);
      if (lookahead == 'G') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 131},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 131},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 131},
  [21] = {.lex_state = 131},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 73},
  [27] = {.lex_state = 130},
  [28] = {.lex_state = 130},
  [29] = {.lex_state = 130},
  [30] = {.lex_state = 130},
  [31] = {.lex_state = 130},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 130},
  [36] = {.lex_state = 130},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 130},
  [39] = {.lex_state = 73},
  [40] = {.lex_state = 130},
  [41] = {.lex_state = 73},
  [42] = {.lex_state = 130},
  [43] = {.lex_state = 130},
  [44] = {.lex_state = 130},
  [45] = {.lex_state = 73},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 73},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 130},
  [50] = {.lex_state = 130},
  [51] = {.lex_state = 130},
  [52] = {.lex_state = 73},
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
    [sym_source_file] = STATE(39),
    [sym_request] = STATE(12),
    [sym__method_section] = STATE(3),
    [sym_method] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    [sym_header] = STATE(10),
    [sym__key_value] = STATE(27),
    [sym_request_section] = STATE(7),
    [sym_query_string_params_section] = STATE(26),
    [sym_form_params_section] = STATE(26),
    [sym_cookie_section] = STATE(26),
    [aux_sym_request_repeat1] = STATE(10),
    [aux_sym_request_repeat2] = STATE(7),
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
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(5),
  },
  [3] = {
    [sym_header] = STATE(2),
    [sym__key_value] = STATE(27),
    [sym_request_section] = STATE(9),
    [sym_query_string_params_section] = STATE(26),
    [sym_form_params_section] = STATE(26),
    [sym_cookie_section] = STATE(26),
    [aux_sym_request_repeat1] = STATE(2),
    [aux_sym_request_repeat2] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_GET] = ACTIONS(21),
    [anon_sym_HEAD] = ACTIONS(21),
    [anon_sym_POST] = ACTIONS(21),
    [anon_sym_PUT] = ACTIONS(21),
    [anon_sym_DELETE] = ACTIONS(21),
    [anon_sym_CONNECT] = ACTIONS(21),
    [anon_sym_OPTIONS] = ACTIONS(21),
    [anon_sym_TRACE] = ACTIONS(21),
    [anon_sym_PATCH] = ACTIONS(21),
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym__sp] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym__sp,
    ACTIONS(33), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(25), 10,
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
  [33] = 7,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__sp,
    ACTIONS(44), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(38), 10,
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
  [66] = 5,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(6), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(26), 3,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_cookie_section,
    ACTIONS(46), 10,
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
  [95] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(6), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(26), 3,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_cookie_section,
    ACTIONS(51), 10,
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
  [124] = 7,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(42), 1,
      sym__sp,
    ACTIONS(44), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(4), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(55), 10,
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
  [157] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(6), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    STATE(26), 3,
      sym_query_string_params_section,
      sym_form_params_section,
      sym_cookie_section,
    ACTIONS(11), 10,
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
  [186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(61), 1,
      sym_key,
    STATE(27), 1,
      sym__key_value,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(10), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(59), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(66), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [247] = 6,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__method_section,
    STATE(34), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(15), 2,
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
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(76), 1,
      sym_key,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(74), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [305] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(81), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [334] = 6,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__method_section,
    STATE(34), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(15), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(85), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [363] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(90), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [392] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(94), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [421] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(16), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(98), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(68), 1,
      sym_key,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym__key_value,
      aux_sym_query_string_params_section_repeat1,
    ACTIONS(102), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [479] = 2,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(106), 12,
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
  [499] = 2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(110), 12,
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
  [519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(110), 10,
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
  [542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(106), 10,
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
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(114), 10,
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
  [588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(118), 10,
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
  [611] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    ACTIONS(120), 11,
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
  [629] = 5,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__sp,
    ACTIONS(124), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
    STATE(8), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [646] = 5,
    ACTIONS(40), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__sp,
    ACTIONS(126), 1,
      aux_sym__lt_token1,
    STATE(38), 1,
      aux_sym__lt_repeat1,
    STATE(5), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [663] = 5,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__sp,
    ACTIONS(132), 1,
      aux_sym__lt_token1,
    STATE(19), 1,
      sym__lt,
    STATE(35), 1,
      aux_sym__lt_repeat1,
  [679] = 5,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__sp,
    ACTIONS(134), 1,
      aux_sym__lt_token1,
    STATE(18), 1,
      sym__lt,
    STATE(35), 1,
      aux_sym__lt_repeat1,
  [695] = 5,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__sp,
    ACTIONS(136), 1,
      aux_sym__lt_token1,
    STATE(17), 1,
      sym__lt,
    STATE(35), 1,
      aux_sym__lt_repeat1,
  [711] = 4,
    ACTIONS(138), 1,
      anon_sym_QueryStringParams,
    ACTIONS(140), 1,
      anon_sym_FormParams,
    ACTIONS(142), 1,
      anon_sym_Cookies,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [725] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(144), 1,
      aux_sym_url_token1,
    STATE(43), 1,
      sym_value,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(146), 1,
      aux_sym_url_token1,
    STATE(28), 1,
      sym_url,
  [751] = 4,
    ACTIONS(148), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__sp,
    ACTIONS(152), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [764] = 4,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__sp,
    ACTIONS(159), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(161), 1,
      aux_sym_url_token1,
    STATE(24), 1,
      sym_value,
  [790] = 4,
    ACTIONS(150), 1,
      sym__sp,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__lt_token1,
    STATE(36), 1,
      aux_sym__lt_repeat1,
  [803] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [811] = 2,
    ACTIONS(165), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [819] = 2,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [827] = 2,
    ACTIONS(171), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [835] = 2,
    ACTIONS(114), 1,
      aux_sym__lt_token1,
    ACTIONS(112), 2,
      sym_comment,
      sym__sp,
  [843] = 2,
    ACTIONS(118), 1,
      aux_sym__lt_token1,
    ACTIONS(116), 2,
      sym_comment,
      sym__sp,
  [851] = 2,
    ACTIONS(173), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(175), 1,
      aux_sym_url_token1,
  [869] = 2,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [877] = 2,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [885] = 2,
    ACTIONS(152), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [893] = 2,
    ACTIONS(183), 1,
      aux_sym__lt_token1,
    ACTIONS(181), 2,
      sym_comment,
      sym__sp,
  [901] = 2,
    ACTIONS(185), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [909] = 2,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 218,
  [SMALL_STATE(12)] = 247,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 334,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 392,
  [SMALL_STATE(18)] = 421,
  [SMALL_STATE(19)] = 450,
  [SMALL_STATE(20)] = 479,
  [SMALL_STATE(21)] = 499,
  [SMALL_STATE(22)] = 519,
  [SMALL_STATE(23)] = 542,
  [SMALL_STATE(24)] = 565,
  [SMALL_STATE(25)] = 588,
  [SMALL_STATE(26)] = 611,
  [SMALL_STATE(27)] = 629,
  [SMALL_STATE(28)] = 646,
  [SMALL_STATE(29)] = 663,
  [SMALL_STATE(30)] = 679,
  [SMALL_STATE(31)] = 695,
  [SMALL_STATE(32)] = 711,
  [SMALL_STATE(33)] = 725,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 751,
  [SMALL_STATE(36)] = 764,
  [SMALL_STATE(37)] = 777,
  [SMALL_STATE(38)] = 790,
  [SMALL_STATE(39)] = 803,
  [SMALL_STATE(40)] = 811,
  [SMALL_STATE(41)] = 819,
  [SMALL_STATE(42)] = 827,
  [SMALL_STATE(43)] = 835,
  [SMALL_STATE(44)] = 843,
  [SMALL_STATE(45)] = 851,
  [SMALL_STATE(46)] = 859,
  [SMALL_STATE(47)] = 869,
  [SMALL_STATE(48)] = 877,
  [SMALL_STATE(49)] = 885,
  [SMALL_STATE(50)] = 893,
  [SMALL_STATE(51)] = 901,
  [SMALL_STATE(52)] = 909,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(40),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_section, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_section, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(32),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(45),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_string_params_section_repeat1, 2), SHIFT_REPEAT(52),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_section, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_section, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cookie_section, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cookie_section, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_form_params_section, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_form_params_section, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_string_params_section, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_string_params_section, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(36),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
