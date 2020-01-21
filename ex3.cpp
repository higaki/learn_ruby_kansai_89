#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 5};

    auto result = accumulate(
	a.begin(), a.end(), 1,
	[](int s, int i) -> int {return s * i;});

    cout << result << endl;

    return 0;
}
