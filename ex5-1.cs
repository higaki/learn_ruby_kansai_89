using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

// 与えられた文字列から単語の出現回数を数えてみよう。

class RubyKansai
{
    static void Main(string[] args)
    {
        var result = args.Read()                    // ファイル内容の配列
            .Select(s => Regex.Matches(s, "\\w+").ToEnumerable())
            .Aggregate((ws, w) => ws.Concat(w))     // 全ファイルの単語列
            .GroupBy(w => w)                        // 単語ごとにまとめる
            .OrderByDescending(ws => ws.Count())    // 頻度の降順に整列
            .ThenBy(ws => ws.Key);                  // 単語の昇順に整列

        foreach (var w in result)
            Console.WriteLine($"{w.Count(),7} {w.Key}");
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

    public static IEnumerable<string> ToEnumerable(this MatchCollection matches)
    {
        foreach (Match s in matches)
            yield return s.Value;
    }
}
