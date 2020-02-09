RUBY_VERSION                    # => "2.7.0"

# 与えられた文字列から文字の出現回数を数えてみよう。

puts ARGF.read
  .chars                        # 入力を文字ごとに分割
  .tally                        # 文字ごとの出現回数を数える
  .sort_by{|c, n| [-n, c]}      # 頻度の降順、文字の昇順に整列
  .map{"%8d %c" % _1.reverse}
