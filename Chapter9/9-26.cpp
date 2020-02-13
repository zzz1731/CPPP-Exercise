#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> ivec(begin(ia), end(ia));
    list<int> ilist(begin(ia), end(ia));

    for (auto iter_vec = ivec.begin(); iter_vec != ivec.end(); ++iter_vec)
    {
        if (!(*iter_vec & 1))
            iter_vec = ivec.erase(iter_vec);
    }

    auto iter_list = ilist.begin();
    while (iter_list != ilist.end())
    {
        if (*iter_list % 2)
            iter_list = ilist.erase(iter_list);
        else
            ++iter_list;
    }

    cout << "vector:";
    for (auto i : ivec)
    {
        cout << i << " ";
    }

    cout << "\nlist:";
    for (auto i : ilist)
    {
        cout << i << " ";
    }

    return 0;
}

//使用下面代码定义的 ia ,将 ia 拷贝到一个 vector 和一个 list 中。使用单迭代器版本的 erase 从 list 中删除奇数元素，从 vector 中删除偶数元素。
//Thu,Feb13,2020