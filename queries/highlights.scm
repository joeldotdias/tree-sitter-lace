; identifier
(identifier) @variable

; types
(integer) @number
(boolean) @boolean
(char) @string
(string) @string

; brackets
[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
]@punctuation.bracket

; delimeters
[
 "::"
 ":"
 "."
 ","
 ";"] @punctuation.delimiter

; keywords
[
  "let"
  "fn"
  "if"
  "else"
  "return"
]@keyword

; operators
[
 "="
 "=="
 "!="
 ">"
 "<"
 ">="
 "<="
 "+"
 "-"
 "*"
 "/"
 "%"
] @operator

(line_comment) @comment @spell
