module.exports = grammar({
	name: "hurl",
	extras: ($) => [$.comment, $._sp],
	rules: {
		source_file: ($) => repeat($.request),
		request: ($) => seq($._method_section, repeat($.request_section)),

		_method_section: ($) =>
			seq($.method, $.url, repeat1($._lt), optional(repeat($.header))),
		method: (_) =>
			choice(
				"GET",
				"HEAD",
				"POST",
				"PUT",
				"DELETE",
				"CONNECT",
				"OPTIONS",
				"TRACE",
				"PATCH",
			),
		url: (_) => /[^#\n\\]+/,

		header: ($) => seq($._key_value, repeat1($._lt)),
		_key_value: ($) => seq($.key, ":", $.value),
		// key: (_) => /[^#:\n\\]+/,
		key: (_) => /[^#:\n\\\[][^#:\n\\]+/,
		value: (_) => /[^#\n\\]+/,

		request_section: ($) =>
			choice(
				$.query_string_params_section,
				$.form_params_section,
				$.cookie_section,
			),

		query_string_params_section: ($) =>
			seq("[", "QueryStringParams", "]", $._lt, repeat($._key_value)),
		form_params_section: ($) =>
			seq("[", "FormParams", "]", $._lt, repeat($._key_value)),
		multipart_form_data_section: ($) =>
			seq("[", "MultipartFormData", "]", $._lt, repeat($._key_value)),
		cookie_section: ($) =>
			seq("[", "Cookies", "]", $._lt, repeat($._key_value)),

		version: (_) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*"),
		status: (_) => /\d+/,

		comment: ($) => /#[^\n]*/,
		_sp: (_) => /[\s\t]/,
		_lt: ($) => seq(repeat($._sp), optional($.comment), /[\n]?/),
	},
});
