(const) @contant
(line_comment) @comment.line
(block_comment) @comment.block
(int) @constant.numeric.integer
(float) @constant.numeric.float
(label) @label
(instruction) @function.special
(address) @variable.other
(reg) @variable.builtin
(meta) @function.buitin
(string) @string

; Keywords
[
  "byte"
  "word"
  "dword"
  "qword"
  "ptr"
  "rel"
  "label"
  "const"
] @keyword

[
  "+"
  "-"
  "*"
  "/"
  "%"
  "|"
  "^"
  "&"
] @operator

["(" ")" "[" "]"] @punctuation.bracket

["," ":"] @punctuation.delimiter
