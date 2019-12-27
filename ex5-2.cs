using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

// 与えられた文字列から文字の出現回数を数えてみよう。

class RubyKansai
{
    static void Main(string[] args)
    {
        var result = args.Read()                    // ファイル内容の配列
            .Select(s => s.Chars())
            .Aggregate((cs, c) => cs.Concat(c))     // 全ファイルの文字配列
            .GroupBy(c => c)                        // 文字ごとにまとめる
            .OrderByDescending(cs => cs.Count())    // 頻度の降順に整列
            .ThenBy(cs => cs.Key);                  // 文字の昇順に整列

        foreach (var c in result)
            Console.WriteLine($"{c.Count(),7} {c.Key}");
    }
}

public static class RubyLikeExtensions
{
    public static IEnumerable<string> Read(this IEnumerable<string> args)
    {
        foreach (var fn in args) {
            using (var reader = new StreamReader(fn))
                yield return reader.ReadToEnd();
        }
    }

    public static IEnumerable<char> Chars(this string s)
    {
        foreach (var c in s)
            yield return c;
    }
}
