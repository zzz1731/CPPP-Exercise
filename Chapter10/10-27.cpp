#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 3, 4, 5, 6, 7, 7, 7, 7, 7, 8, 7, 77, 78, 7, 5, 47, 45, 3, 789, 2, 8, 9, 65, 85, 7};
    list<int> il;

    sort(ivec.begin(), ivec.end());

    for (auto i : ivec)
    {
        cout << i << " ";
    }
    cout << endl;

    unique_copy(ivec.begin(), ivec.end(), back_inserter(il));

    for (auto i : il)
    {
        cout << i << " ";
    }
}

//除了 unique 之外，标准库还定义了名为 unique_copy 的函数，使用 unique_copy 将一个 vector 中不重复的元素拷贝到一个初始为空的 list 中。
//Wed,Feb26,2020