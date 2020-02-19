#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill_n(ivec.begin(), ivec.size(), 0);
    for (auto i : ivec)
        cout << i << endl;

    return 0;
}

//编写程序，使用 fill_n 将一个序列中的 int 值都设置为0
//Wed,Feb19,2020