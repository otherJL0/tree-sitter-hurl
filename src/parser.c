#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_url = 10,
  anon_sym_COLON = 11,
  sym_key = 12,
  sym_value = 13,
  anon_sym_LBRACK = 14,
  anon_sym_QueryStringParams = 15,
  anon_sym_FormParams = 16,
  anon_sym_MultipartFormData = 17,
  anon_sym_Cookies = 18,
  anon_sym_RBRACK = 19,
  sym_comment = 20,
  sym__sp = 21,
  aux_sym__lt_token1 = 22,
  sym_source_file = 23,
  sym_request = 24,
  sym__method_section = 25,
  sym_method = 26,
  sym_header = 27,
  sym_request_section = 28,
  sym__lt = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_request_repeat1 = 31,
  aux_sym__method_section_repeat1 = 32,
  aux_sym__method_section_repeat2 = 33,
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
  [sym_url] = "url",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_value] = "value",
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
  [sym_header] = "header",
  [sym_request_section] = "request_section",
  [sym__lt] = "_lt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym__method_section_repeat1] = "_method_section_repeat1",
  [aux_sym__method_section_repeat2] = "_method_section_repeat2",
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
  [sym_url] = sym_url,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
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
  [sym_header] = sym_header,
  [sym_request_section] = sym_request_section,
  [sym__lt] = sym__lt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym__method_section_repeat1] = aux_sym__method_section_repeat1,
  [aux_sym__method_section_repeat2] = aux_sym__method_section_repeat2,
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
  [sym_url] = {
    .visible = true,
    .named = true,
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
  [sym_header] = {
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
  [aux_sym__method_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__method_section_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(100);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'U') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(103);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(115);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'F') ADVANCE(73);
      END_STATE();
    case 26:
      if (lookahead == 'H') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(7);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(113);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(101);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(105);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(111);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(33);
      if (lookahead == 'D') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'G') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(20);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(9);
      if (lookahead == 'Q') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == ']') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_POST);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CONNECT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_OPTIONS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PATCH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PATCH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'A') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'D') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'L') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'N') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_QueryStringParams);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_FormParams);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_MultipartFormData);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Cookies);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__sp);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__sp);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(151);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__lt_token1);
      if (eof) ADVANCE(100);
      if (lookahead == '\n') ADVANCE(160);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'G') ADVANCE(16);
      if (lookahead == 'H') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
  [2] = {.lex_state = 163},
  [3] = {.lex_state = 163},
  [4] = {.lex_state = 163},
  [5] = {.lex_state = 163},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 99},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 163},
  [12] = {.lex_state = 99},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 99},
  [15] = {.lex_state = 163},
  [16] = {.lex_state = 99},
  [17] = {.lex_state = 162},
  [18] = {.lex_state = 162},
  [19] = {.lex_state = 162},
  [20] = {.lex_state = 162},
  [21] = {.lex_state = 162},
  [22] = {.lex_state = 162},
  [23] = {.lex_state = 99},
  [24] = {.lex_state = 162},
  [25] = {.lex_state = 99},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 99},
  [28] = {.lex_state = 99},
  [29] = {.lex_state = 99},
  [30] = {.lex_state = 99},
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
    [sym_source_file] = STATE(28),
    [sym_request] = STATE(7),
    [sym__method_section] = STATE(12),
    [sym_method] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    [sym__lt] = STATE(5),
    [aux_sym__method_section_repeat1] = STATE(5),
    [aux_sym__method_section_repeat2] = STATE(10),
    [aux_sym__lt_repeat1] = STATE(20),
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
  [3] = {
    [sym_header] = STATE(8),
    [sym__lt] = STATE(5),
    [aux_sym__method_section_repeat1] = STATE(5),
    [aux_sym__method_section_repeat2] = STATE(8),
    [aux_sym__lt_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_GET] = ACTIONS(25),
    [anon_sym_HEAD] = ACTIONS(25),
    [anon_sym_POST] = ACTIONS(25),
    [anon_sym_PUT] = ACTIONS(25),
    [anon_sym_DELETE] = ACTIONS(25),
    [anon_sym_CONNECT] = ACTIONS(25),
    [anon_sym_OPTIONS] = ACTIONS(25),
    [anon_sym_TRACE] = ACTIONS(25),
    [anon_sym_PATCH] = ACTIONS(25),
    [sym_key] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_comment] = ACTIONS(17),
    [sym__sp] = ACTIONS(19),
    [aux_sym__lt_token1] = ACTIONS(21),
  },
  [4] = {
    [sym__lt] = STATE(5),
    [aux_sym__method_section_repeat1] = STATE(5),
    [aux_sym__lt_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_GET] = ACTIONS(29),
    [anon_sym_HEAD] = ACTIONS(29),
    [anon_sym_POST] = ACTIONS(29),
    [anon_sym_PUT] = ACTIONS(29),
    [anon_sym_DELETE] = ACTIONS(29),
    [anon_sym_CONNECT] = ACTIONS(29),
    [anon_sym_OPTIONS] = ACTIONS(29),
    [anon_sym_TRACE] = ACTIONS(29),
    [anon_sym_PATCH] = ACTIONS(29),
    [sym_key] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(17),
    [sym__sp] = ACTIONS(19),
    [aux_sym__lt_token1] = ACTIONS(21),
  },
  [5] = {
    [sym__lt] = STATE(5),
    [aux_sym__method_section_repeat1] = STATE(5),
    [aux_sym__lt_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_GET] = ACTIONS(33),
    [anon_sym_HEAD] = ACTIONS(33),
    [anon_sym_POST] = ACTIONS(33),
    [anon_sym_PUT] = ACTIONS(33),
    [anon_sym_DELETE] = ACTIONS(33),
    [anon_sym_CONNECT] = ACTIONS(33),
    [anon_sym_OPTIONS] = ACTIONS(33),
    [anon_sym_TRACE] = ACTIONS(33),
    [anon_sym_PATCH] = ACTIONS(33),
    [sym_key] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(35),
    [sym__sp] = ACTIONS(38),
    [aux_sym__lt_token1] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(48), 1,
      sym_key,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_header,
      aux_sym__method_section_repeat2,
    ACTIONS(46), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [29] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym__method_section,
    STATE(30), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(9), 2,
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
  [58] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_header,
      aux_sym__method_section_repeat2,
    ACTIONS(55), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [87] = 6,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym__method_section,
    STATE(30), 1,
      sym_method,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(9), 2,
      sym_request,
      aux_sym_source_file_repeat1,
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
  [116] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(15), 1,
      sym_key,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 2,
      sym_header,
      aux_sym__method_section_repeat2,
    ACTIONS(64), 9,
      anon_sym_GET,
      anon_sym_HEAD,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_CONNECT,
      anon_sym_OPTIONS,
      anon_sym_TRACE,
      anon_sym_PATCH,
  [145] = 2,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(68), 12,
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
  [165] = 4,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(13), 2,
      sym_request_section,
      aux_sym_request_repeat1,
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
  [189] = 4,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(14), 2,
      sym_request_section,
      aux_sym_request_repeat1,
    ACTIONS(74), 10,
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
  [213] = 4,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    STATE(14), 2,
      sym_request_section,
      aux_sym_request_repeat1,
    ACTIONS(76), 10,
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
  [237] = 2,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(83), 12,
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
  [257] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
    ACTIONS(85), 4,
      anon_sym_QueryStringParams,
      anon_sym_FormParams,
      anon_sym_MultipartFormData,
      anon_sym_Cookies,
  [268] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__sp,
    ACTIONS(89), 1,
      aux_sym__lt_token1,
    STATE(20), 1,
      aux_sym__lt_repeat1,
    STATE(3), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [285] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__sp,
    ACTIONS(91), 1,
      aux_sym__lt_token1,
    STATE(20), 1,
      aux_sym__lt_repeat1,
    STATE(2), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [302] = 5,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym__sp,
    ACTIONS(93), 1,
      aux_sym__lt_token1,
    STATE(20), 1,
      aux_sym__lt_repeat1,
    STATE(4), 2,
      sym__lt,
      aux_sym__method_section_repeat1,
  [319] = 4,
    ACTIONS(95), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym__sp,
    ACTIONS(99), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
  [332] = 4,
    ACTIONS(101), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym__sp,
    ACTIONS(106), 1,
      aux_sym__lt_token1,
    STATE(21), 1,
      aux_sym__lt_repeat1,
  [345] = 2,
    ACTIONS(99), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [353] = 2,
    ACTIONS(108), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [361] = 2,
    ACTIONS(110), 1,
      aux_sym__lt_token1,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [369] = 2,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__sp,
    ACTIONS(114), 1,
      sym_value,
  [387] = 2,
    ACTIONS(116), 1,
      sym_url,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [395] = 2,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__sp,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym__sp,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__sp,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 165,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 213,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 257,
  [SMALL_STATE(17)] = 268,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 377,
  [SMALL_STATE(27)] = 387,
  [SMALL_STATE(28)] = 395,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_section, 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_section, 4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 4),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__method_section_repeat2, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__method_section_repeat2, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__method_section_repeat2, 2), SHIFT_REPEAT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request_section, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request_section, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__method_section, 5),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__method_section, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lt, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__lt, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__lt_repeat1, 2), SHIFT_REPEAT(21),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lt_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
