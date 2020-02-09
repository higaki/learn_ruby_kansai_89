RUBY_VERSION                    # => "2.7.0"

# 与えられた文字列から単語の出現回数を数えてみよう。

puts ARGF.read
  .scan(/\p{Word}+/)            # 入力を単語ごとに分割
  .tally                        # 単語ごとの出現回数を数える
  .sort_by{|w, n| [-n, w]}      # 頻度の降順、単語の昇順に整列
  .map{"%8d %s" % _1.reverse}
