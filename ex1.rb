RUBY_VERSION                    # => "2.7.0"

# Enumerable#map を使わずに Array のそれぞれの要素を
# 2倍した新しい Array を作ってみよう。

a = [1, 2, 3, 5]

result = []
a.each do |i|
  # ...

result                          # => [2, 4, 6, 10]
