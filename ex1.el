; Array のそれぞれの要素を 2倍した新しい Array を作ってみよう。

(let ((a '(1 2 3 5)))
  (mapcar (lambda(i) (* i 2)) a))	; => (2 4 6 10)
