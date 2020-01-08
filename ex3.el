; Array の要素を合計してみよう。

(require 'cl)
(let ((a '(1 2 3 5)))
  (reduce (lambda(r i) (+ r i)) a))	; => 11
