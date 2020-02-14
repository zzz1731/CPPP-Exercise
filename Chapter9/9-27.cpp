#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> iflist{1, 2, 2, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9};

    auto prev = iflist.before_begin();
    auto curr = iflist.begin();

    while (curr != iflist.end())
    {
        if (*curr & 1)
            curr = iflist.erase_after(prev);
        else
        {
            prev = curr;
            ++curr;
        }
    }

    cout << "forwardlist:";
    for (auto i : iflist)
    {
        cout << i << " ";
    }

    return 0;
}

//编写程序，查找并删除 forward_list<int> 中的奇数元素
//Fri,Feb14,2020