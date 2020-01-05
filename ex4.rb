RUBY_VERSION                    # => "2.7.0"

# Enumerable#map を使って Array の各要素を 2倍してみよう。
# Enumerable#select を使って Array から奇数の要素だけを抽出してみよう。
# Enumerable#inject を使って Array の総乗を求めよう。

a = [1, 2, 3, 5]

a.map{_1 * 2}                   # => [2, 4, 6, 10]
a.select{_1.odd?}               # => [1, 3, 5]
a.inject{_1 + _2}               # => 11
