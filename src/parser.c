#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_FormParams = 15,
  anon_sym_MultipartFormData = 16,
  anon_sym_Cookies = 17,
  anon_sym_RBRACK = 18,
  sym_comment = 19,
  sym__sp = 20,
  aux_sym__lt_token1 = 21,
  sym_source_file = 22,
  sym_request = 23,
  sym__method_section = 24,
  sym_method = 25,
  sym_url = 26,
  sym_header = 27,
  sym_value = 28,
  sym_request_section = 29,
  sym__lt = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_request_repeat1 = 32,
  aux_sym_request_repeat2 = 33,
  aux_sym__method_section_repeat1 = 34,
  aux_sym__lt_repeat1 = 35,
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
  [anon_sym_FormParams] = "FormParams",
  [anon_sym_MultipartFormData] = "MultipartFormData",
  [anon_sym_Cookies] = "Cookies",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym__sp] = "_sp",
  [aux_sym__lt_token1] = "_lt_token1",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym__method_section] = "_method_section",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_value] = "value",
  [sym_request_section] = "request_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_request_repeat2] = "request_repeat2",
  [aux_sym__method_section_repeat1] = "_method_section_repeat1",
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
  [anon_sym_FormParams] = anon_sym_FormParams,
  [anon_sym_MultipartFormData] = anon_sym_MultipartFormData,
  [anon_sym_Cookies] = anon_sym_Cookies,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym__sp] = sym__sp,
  [aux_sym__lt_token1] = aux_sym__lt_token1,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym__method_section] = sym__method_section,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_value] = sym_value,
  [sym_request_section] = sym_request_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_request_repeat2] = aux_sym_request_repeat2,
  [aux_sym__method_section_repeat1] = aux_sym__method_section_repeat1,
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
  [anon_sym_FormParams] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultipartFormData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cookies] = {
    .visible = true,
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
  [aux_sym__method_section_repeat1] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(132);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(45);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(107);
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
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(3);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(91);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(6);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(95);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 88:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'D') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'H') ADVANCE(16);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_url_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_FormParams);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Cookies);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(137);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(145);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'G') ADVANCE(12);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 148},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 148},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 148},
  [7] = {.lex_state = 148},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 148},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 148},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 147},
  [19] = {.lex_state = 147},
  [20] = {.lex_state = 147},
  [21] = {.lex_state = 147},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 147},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 147},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 147},
  [29] = {.lex_state = 147},
  [30] = {.lex_state = 147},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
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
    [sym_source_file] = STATE(32),
    [sym_request] = STATE(9),
    [sym__method_section] = STATE(3),
    [sym_method] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    [sym_header] = STATE(8),
    [sym__lt] = STATE(6),
    [aux_sym_request_repeat1] = STATE(8),
    [aux_sym__method_section_repeat1] = STATE(6),
    [aux_sym__lt_repeat1] = STATE(21),
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
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_comment] = ACTIONS(17),
    [sym__sp] = ACTIONS(19),
    [aux_sym__lt_token1] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(5), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(14), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(25), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [35] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__sp,
    ACTIONS(21), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(31), 10,
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
  [68] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    STATE(12), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(35), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [103] = 7,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym__sp,
    ACTIONS(47), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(39), 10,
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
  [136] = 7,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym__sp,
    ACTIONS(21), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
    ACTIONS(52), 10,
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
  [169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
    ACTIONS(56), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [198] = 6,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__method_section,
    STATE(24), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(10), 2,
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
  [227] = 6,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym__method_section,
    STATE(24), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(10), 2,
      sym_request,
      aux_sym_source_file_repeat1,
    ACTIONS(62), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(69), 1,
      sym_key,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_header,
      aux_sym_request_repeat1,
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
  [285] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(16), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(72), 10,
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
  [309] = 2,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(76), 12,
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
  [329] = 4,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(16), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(33), 10,
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
  [353] = 2,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(80), 12,
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
  [373] = 4,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(16), 2,
      sym_request_section,
      aux_sym_request_repeat2,
    ACTIONS(82), 10,
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
  [397] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    ACTIONS(87), 4,
      anon_sym_QueryStringParams,
      anon_sym_FormParams,
      anon_sym_MultipartFormData,
      anon_sym_Cookies,
  [408] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__sp,
    ACTIONS(91), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    STATE(4), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [425] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__sp,
    ACTIONS(93), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    STATE(2), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [442] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym__sp,
    ACTIONS(95), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
    STATE(7), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [459] = 4,
    ACTIONS(97), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym__sp,
    ACTIONS(101), 1,
      aux_sym__lt_token1,
    STATE(23), 1,
      aux_sym__lt_repeat1,
  [472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(103), 1,
      aux_sym_url_token1,
    STATE(18), 1,
      sym_value,
  [485] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__sp,
    ACTIONS(110), 1,
      aux_sym__lt_token1,
    STATE(23), 1,
      aux_sym__lt_repeat1,
  [498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(112), 1,
      aux_sym_url_token1,
    STATE(20), 1,
      sym_url,
  [511] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(114), 1,
      aux_sym_url_token1,
  [521] = 2,
    ACTIONS(101), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [529] = 2,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [537] = 2,
    ACTIONS(120), 1,
      aux_sym__lt_token1,
    ACTIONS(118), 2,
      sym_comment,
      sym__sp,
  [545] = 2,
    ACTIONS(122), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [553] = 2,
    ACTIONS(126), 1,
      aux_sym__lt_token1,
    ACTIONS(124), 2,
      sym_comment,
      sym__sp,
  [561] = 2,
    ACTIONS(128), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [569] = 2,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 256,
  [SMALL_STATE(12)] = 285,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 397,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 442,
  [SMALL_STATE(21)] = 459,
  [SMALL_STATE(22)] = 472,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 521,
  [SMALL_STATE(27)] = 529,
  [SMALL_STATE(28)] = 537,
  [SMALL_STATE(29)] = 545,
  [SMALL_STATE(30)] = 553,
  [SMALL_STATE(31)] = 561,
  [SMALL_STATE(32)] = 569,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(26),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(21),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_section, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_section, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(31),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat2, 2), SHIFT_REPEAT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(23),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
