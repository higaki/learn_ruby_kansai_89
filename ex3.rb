RUBY_VERSION                    # => "2.7.0"

# Enumerable#inject を使わずに Array の総乗を求めよう。

a = [1, 2, 3, 5]

result = 1
a.each do |i|
  result *= i
end

result                          # => 30
