; Array から奇数の要素だけを抽出してみよう。

(require 'cl)
(let ((a '(1 2 3 5)))
  (remove-if-not (lambda(i) (oddp i)) a)) ; => (1 3 5)
