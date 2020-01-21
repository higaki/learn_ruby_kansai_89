using System;
using System.Collections.Generic;
using System.Linq;

// Enumerable#inject を使わずに Array の総乗を求めよう。

class RubyKansai
{
    static void Main()
    {
        var a = new[]{1, 2, 3, 5};

        var result = a.Aggregate(1, (s, i) => s * i);

        Console.WriteLine($"{result}");
    }
}
