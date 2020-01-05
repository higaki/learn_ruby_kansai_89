#include <cstdio>
#include <iostream>
#include <map>
#include <fstream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

typedef map<string, size_t>  WORD_CNT_T;
typedef pair<string, size_t> WORD_REC_T;

static string read(const string& fn)
{
    ifstream fin(fn);
    auto beg = istreambuf_iterator<char>(fin);
    auto end = istreambuf_iterator<char>();
    return string(beg, end);
}

static vector<WORD_REC_T>& sort(vector<WORD_REC_T>& v)
{
    sort(v.begin(), v.end(),
	 [](const WORD_REC_T& lhs,const WORD_REC_T& rhs) -> bool {
    	     return lhs.second > rhs.second
		 ? true
		 : lhs.second < rhs.second ? false : lhs.first < rhs.first;
	 });
    return v;
}

template <typename ... ARGS>
string format(const string& format, ARGS ... args)
{
    auto siz = snprintf(nullptr, 0, format.c_str(), args ...) + 1;
    char buf[siz];
    snprintf(buf, siz, format.c_str(), args ...);
    return string(buf, &buf[siz]);
}

int main(int argc, const char** argv)
{
    WORD_CNT_T tab;

    while (--argc > 0) {
	auto buf = read(*++argv);
	smatch m;
	regex re(R"(\w+)");
	while (regex_search(buf, m, re)) {
	    tab[m.str()] += 1;
	    buf = m.suffix();
	}
    }

    // for (auto i = tab.begin(); i != tab.end(); ++i)
    // 	cout << i->second << " " << i->first << endl;

    vector<WORD_REC_T> result;
    transform(tab.begin(), tab.end(), back_inserter(result),
	      [](const WORD_REC_T i) -> WORD_REC_T {return i;});
    sort(result);

    for (auto datum = result.begin(); datum != result.end(); ++datum)
	cout << format("%7d", datum->second) << " " << datum->first << endl;

    return 0;
}
