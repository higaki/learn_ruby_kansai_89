#include <cstdio>
#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

typedef map<char, size_t>  CHAR_CNT_T;
typedef pair<char, size_t> CHAR_REC_T;

static string read(const string& fn)
{
    ifstream fin(fn);
    auto beg = istreambuf_iterator<char>(fin);
    auto end = istreambuf_iterator<char>();
    return string(beg, end);
}

static vector<CHAR_REC_T>& sort(vector<CHAR_REC_T>& v)
{
    sort(v.begin(), v.end(),
	 [](const CHAR_REC_T& lhs, const CHAR_REC_T& rhs) -> bool {
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
    CHAR_CNT_T tab;

    while (--argc > 0) {
	auto buf = read(*++argv);
	for (auto c = buf.begin(); c != buf.end(); ++c)
	    tab[*c] += 1;
    }

    vector<CHAR_REC_T> result;
    transform(tab.begin(), tab.end(), back_inserter(result),
	      [](const CHAR_REC_T i) -> CHAR_REC_T {return i;});
    sort(result);

    for (auto datum = result.begin(); datum != result.end(); ++datum)
	cout << format("%7d", datum->second) << " " << datum->first << endl;

    return 0;
}
