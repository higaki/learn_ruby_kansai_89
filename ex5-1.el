;; 与えられた文字列から単語の出現回数を数えてみよう。

(save-excursion
  (let (result)
    (goto-char (point-min))
    (while (re-search-forward "\\w+" nil t)
      (let* ((word (buffer-substring-no-properties
		    (match-beginning 0) (match-end 0)))
	     (word-count (assoc word result)))
	(if word-count
	    (setcdr word-count (1+ (cdr word-count)))
	  (add-to-list 'result (cons word 1)))))
    (sort result (lambda (l r)
		   (or (> (cdr l) (cdr r))
		       (and (= (cdr l) (cdr r))
			    (string-lessp (car l) (car r))))))))
