const PREC = {
  index: 7,
  call: 6,
  prefix: 5,
  multiplicative: 4,
  additive: 3,
  comparative: 2,
  equality: 1,
  lowest: 0,
};

module.exports = grammar({
  name: "lace",

  extras: ($) => [/\s/, $.line_comment],

  word: ($) => $.identifier,

  rules: {
    program: ($) => repeat($._statement),

    _statement: ($) =>
      seq(
        choice($.assignment, $.expression_statement, $.return_statement),
        optional(";"),
      ),

    assignment: ($) =>
      seq(
        optional("let"),
        field("ident", $.identifier),
        "=",
        field("value", $._expression),
      ),

    expression_statement: ($) => choice($._expression),

    _expression: ($) =>
      choice(
        $.if_expression,
        $.unary_expression,
        $.binary_expression,
        $.grouped_expression,
        $.call,
        $.func,
        $.identifier,
        $.integer,
        $.string,
        $.char,
        $.boolean,
        $.index_expression,
        $.array,
        $.hashmap,
      ),

    unary_expression: ($) =>
      prec(
        PREC.prefix,
        seq(field("operator", choice("!", "-")), field("right", $._expression)),
      ),

    binary_expression: ($) => {
      const operators = [
        [PREC.equality, choice("==", "!=")],
        [PREC.comparative, choice("<", ">", "<=", ">=")],
        [PREC.additive, choice("+", "-")],
        [PREC.multiplicative, choice("*", "/", "%")],
      ];

      return choice(
        ...operators.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression),
            ),
          ),
        ),
      );
    },

    if_expression: ($) =>
      seq(
        "if",
        field("condition", $.grouped_expression),
        field("consequence", $.block_statement),
        optional(seq("else", field("alternative", $.block_statement))),
      ),

    return_statement: ($) =>
      prec.right(PREC.lowest, seq("return", optional($._expression))),

    block_statement: ($) => seq("{", repeat($._statement), "}"),

    grouped_expression: ($) => prec(PREC.call, seq("(", $._expression, ")")),

    call: ($) =>
      prec(
        PREC.call,
        seq(field("function", $.identifier), field("arguments", $.arguments)),
      ),

    _inbrackets: ($) => seq($._expression, repeat(seq(",", $._expression))),
    parameters: ($) => seq("(", optional($._inbrackets), ")"),
    arguments: ($) => seq("(", optional($._inbrackets), ")"),
    elements: ($) => seq("[", optional($._inbrackets), "]"),
    pair: ($) =>
      seq(field("key", $._expression), ":", field("val", $._expression)),

    func: ($) =>
      seq(
        "fn",
        field("parameters", $.parameters),
        field("body", $.block_statement),
      ),

    index_expression: ($) =>
      prec(
        PREC.call,
        seq(
          field("collection", $._expression),
          "[",
          field("index", $._expression),
          "]",
        ),
      ),

    array: ($) => field("elements", $.elements),

    hashmap: ($) =>
      seq("{", optional(seq($.pair, repeat(seq(",", $.pair)))), "}"),

    identifier: () => /[a-zA-Z]+/,
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    char: () => seq("'", /[^\']/, "'"),
    boolean: () => choice("true", "false"),

    line_comment: () => seq("//", "^.*\n*"),
  },
});
