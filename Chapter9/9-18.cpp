#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    string s;
    deque<string> sdeq;
    while (cin >> s)
    {
        sdeq.push_back(s);
    }
    for (auto i : sdeq)
    {
        cout << i << endl;
    }
    return 0;
}

//编写程序，从标准输入读取 string 序列，存入一个 deque 中。编写一个循环，用迭代器打印 deque 中的元素。
//Wed,Feb12,2020