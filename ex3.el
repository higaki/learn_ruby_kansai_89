; Array の総乗を求めよう。

(let ((a '(1 2 3 5)))
  (reduce (lambda(r i) (* r i)) a))	; => 30
