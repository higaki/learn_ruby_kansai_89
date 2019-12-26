using System;
using System.Collections.Generic;
using System.Linq;

// Enumerable#inject を使わずに Array の要素を合計してみよう。

class RubyKansai
{
    static void Main()
    {
        var a = new[]{1, 2, 3, 5};

        var result = a.Sum();

        Console.WriteLine($"{result}");
    }
}
