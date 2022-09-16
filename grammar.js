module.exports = grammar({
	name: "hurl",
	extras: ($) => [$.comment, $._sp],
	rules: {
		source_file: ($) => repeat($.request),
		request: ($) =>
			seq(
				$.method,
				$.url,
				repeat1($._lt),
				repeat($.header),
				repeat1($._lt),
				repeat($.request_section),
			),

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

		header: ($) => seq($._key_value, $._lt),
		_key_value: ($) => seq($.key, ":", $.value),
		key: (_) => /[^#:\n\\]+/,
		value: (_) => /[^#\n\\]+/,

		request_section: ($) =>
			seq("[", /[A-Za-z]+/, "]", $._lt, repeat($._key_value)),

		version: (_) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*"),
		status: (_) => /\d+/,

		comment: ($) => /#[^\n]*/,
		_sp: (_) => /[\s\t]/,
		_lt: ($) => seq(repeat($._sp), optional($.comment), /[\n]?/),
	},
});
