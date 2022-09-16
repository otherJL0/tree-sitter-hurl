module.exports = grammar({
	name: "hurl",
	extras: ($) => [$.comment, $._sp],
	rules: {
		source_file: ($) => repeat($.entry),
		entry: ($) => "GET",

		comment: ($) => /#[^\n]*/,
		_sp: (_) => /[\s\t]/,
		// _lt: (_) => seq(repeat($._sp), optional($.comment), /[\n]?/),
	},
});
