;; 与えられた文字列から文字の出現回数を数えてみよう。

(save-excursion
  (let (result begin end)
    (goto-char (point-min))
    (setq begin (point))
    (forward-char 1)
    (setq end (point))
    (while (not (eobp))
      (let* ((char (buffer-substring-no-properties begin end))
	     (char-count (assoc char result)))
	(if char-count
	    (setcdr char-count (1+ (cdr char-count)))
	  (add-to-list 'result (cons char 1))))
      (setq begin (point))
      (forward-char 1)
      (setq end (point)))
    (sort result (lambda (l r)
		   (or (> (cdr l) (cdr r))
		       (and (= (cdr l) (cdr r))
			    (string-lessp (car l) (car r))))))))
