#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 5};

    auto result = accumulate(a.begin(), a.end(), 0);

    cout << result << endl;

    return 0;
}
