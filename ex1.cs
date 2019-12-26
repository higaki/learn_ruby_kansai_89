using System;
using System.Collections.Generic;
using System.Linq;

// Enumerable#map を使わずに Array のそれぞれの要素を
// 2倍した新しい Array を作ってみよう。

class RubyKansai
{
    static void Main()
    {
        var a = new[]{1, 2, 3, 5};

        var result = a.Select(i => i * 2); // => [2, 4, 6, 10]

        Console.WriteLine($"[{string.Join(", ", result)}]");
    }
}
