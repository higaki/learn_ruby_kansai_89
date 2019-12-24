RUBY_VERSION                    # => "2.7.0"

# Enumerable#select を使わずに Array から奇数の要素だけを抽出してみよう。

a = [1, 2, 3, 5]

result = []
a.each do |i|
  # ...

result                          # => [1, 3, 5]

