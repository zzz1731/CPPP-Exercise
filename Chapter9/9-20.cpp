#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> ilist{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> ideq_odd;
    deque<int> ideq_even;
    // for (auto i : ilist)
    // {
    //     if (i % 2 == 0)
    //         ideq_even.push_back(i);
    //     else
    //     {
    //         ideq_odd.push_back(i);
    //     }
    // }
    for (auto i : ilist)                                   //查看最低位，1：奇数  2：偶数
    {
        if (i & 1)
            ideq_odd.push_back(i);
        else
            ideq_even.push_back(i);
    }

    cout << "odd number:";
    for (auto i : ideq_odd)
    {
        cout << i << " ";
    }

    cout << "\neven number:";
    for (auto i : ideq_even)
    {
        cout << i << " ";
    }

    return 0;
}

//编写程序，从一个 list<int> 拷贝元素到两个 deque 中。值为偶数的所有元素都拷贝到一个 deque 中，而奇数值元素都拷贝到另一个 deque 中。
//Wed,Feb12,2020