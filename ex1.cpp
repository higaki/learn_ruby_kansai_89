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

    transform(
	a.begin(), a.end(), back_inserter(result),
	[](int i) -> int {return i * 2;}); // => [2, 4, 6, 10]

    // cout << "[";
    // auto sep = "";
    // for_each(
    // 	result.begin(), result.end(),
    // 	[&sep](int& i) -> void {
    // 	    cout << sep << i;
    // 	    sep = ", ";
    // 	});
    // cout << "]" << endl;
    inspect_array(result.begin(), result.end());

    return 0;
}
