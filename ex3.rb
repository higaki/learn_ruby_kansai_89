RUBY_VERSION                    # => "2.7.0"

# Enumerable#inject を使わずに Array の要素を合計してみよう。

a = [1, 2, 3, 5]

result = 0
a.each do |i|
  # ...

result                          # => 11
