using System;
using System.Collections.Generic;
using System.Linq;

// Enumerable#select を使わずに Array から奇数の要素だけを抽出してみよう。

class RubyKansai
{
	static void Main()
	{
		var a = new[]{1, 2, 3, 5};

		var result = a.Where(i => i % 2 == 1); // => [1, 3, 5]

		Console.WriteLine($"[{string.Join(", ", result)}]");
	}
}
