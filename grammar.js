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
      seq(choice($.assignment, $.expression_statement), optional(";")),

    assignment: ($) =>
      seq(
        "let",
        field("left", $.identifier),
        "=",
        field("right", $._expression),
      ),

    expression_statement: ($) => choice($._expression),

    _expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $.identifier,
        $.integer,
        $.string,
        $.char,
        $.boolean,
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

    identifier: () => /[a-zA-Z]/,
    integer: () => /\d+/,
    string: () => seq('"', repeat(/[^\"]/), '"'),
    char: () => seq("'", /[^\']/, "'"),
    boolean: () => choice("true", "false"),

    line_comment: () => seq("//", "^.*\n*"),
  },
});
