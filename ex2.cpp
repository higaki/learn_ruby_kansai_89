#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <class T>
static void inspect_array(T i, T end)
{
    cout << "[";
    for (auto sep = ""; i != end; ++i, sep = ", ")
	cout << sep << *i;
    cout << "]" << endl;
}

int main()
{
    vector<int> a = {1, 2, 3, 5};
    vector<int> result;

    for (auto i = a.begin(); i != a.end(); ++i) {
	if (*i % 2 == 1)
	    result.push_back(*i);
    }

    inspect_array(result.begin(), result.end());

    return 0;
}
