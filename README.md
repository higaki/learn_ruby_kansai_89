# Ruby初級者向けレッスン 73回
## Array と Hash

### 演習問題1
`Enumerable#map` を使わずに Array のそれぞれの要素を 2倍した新しい Array を作ってみよう。

````ruby
a = [1, 2, 3, 5]

result = []
a.each do |i|
    ...
result              # => [2, 4, 6, 10]
````

[回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex1.rb)

### 演習問題2
`Enumerable#select` を使わずに Array から奇数の要素だけを抽出してみよう。

````ruby
a = [1, 2, 3, 5]

result = []
a.each do |i|
    ...
result              # => [1, 3, 5]
````

[回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex2.rb)

### 演習問題3
`Enumerable#inject` を使わずに Array の総乗を求めよう。

````ruby
a = [1, 2, 3, 5]

result = 0
a.each do |i|
    ...
result              # => 30
````

[回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex3.rb)

### 演習問題4
* `Enumerable#map` を使って Array の各要素を 2倍してみよう。
* `Enumerable#select` を使って Array から奇数の要素だけを抽出してみよう。
* `Enumerable#inject` を使って Array の総乗を求めよう。

````ruby
a = [1, 2, 3, 5]

a.map ...
a.select ...
a.inject ...
````

[回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex4.rb)

### 演習問題5
与えられた文字列から

* 単語の出現回数 [回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex5-1.rb)
* 文字の出現回数 [回答例](https://github.com/higaki/learn_ruby_kansai_89/blob/master/ex5-2.rb)

を数えてみよう。
