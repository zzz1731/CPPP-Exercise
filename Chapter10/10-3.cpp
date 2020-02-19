#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto sum = accumulate(ivec.cbegin(), ivec.cend(), 0);
    cout << sum << endl;
    return 0;
}

//用 accumulate 求一个 vector<int> 中的元素之和。
//Wed,Feb19,2020