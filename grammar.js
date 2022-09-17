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
		url: (_) => /(ftp|http|https):\/\/[^\s"]+(:\d{4})?/,

		header: ($) => seq($.key, ":", $.value, repeat1($._lt)),
		// key: (_) => /[^#:\n\\]+/,
		key: (_) => /[^#:\n\\\[][^#:\n\\]+/,
		value: (_) => /[^#\n\\]+/,

		request_section: ($) =>
			seq(
				"[",
				choice(
					"QueryStringParams",
					"FormParams",
					"MultipartFormData",
					"Cookies",
				),
				"]",
				repeat1($._lt),
				repeat($.header),
			),

		version: (_) => choice("HTTP/1.0", "HTTP/1.1", "HTTP/2", "HTTP/*"),
		status: (_) => /\d+/,

		comment: ($) => /#[^\n]*/,
		_sp: (_) => /[\s\t]/,
		_lt: ($) => seq(repeat($._sp), optional($.comment), /[\n]?/),
	},
});
