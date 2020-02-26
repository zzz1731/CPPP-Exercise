#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> back_ivec;
    deque<int> front_ideq;
    list<int> ins_il;

    copy(ivec.begin(), ivec.end(), back_inserter(back_ivec));
    copy(ivec.begin(), ivec.end(), front_inserter(front_ideq));
    copy(ivec.cbegin(), ivec.cend(), inserter(ins_il, ins_il.begin()));

    for (auto i : back_ivec)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : front_ideq)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : ins_il)
    {
        cout << i << " ";
    }

    return 0;
}

//一个 vector 中保存1到9共9个值，将其拷贝到三个其他容器中。分别使用 inserter、back_inserter 和 front_inserter 将元素添加到三个容器中。
//对每种 inserter,估计输出序列是怎样的，运行程序验证你的估计是否正确。
//Wed,Feb26,2020