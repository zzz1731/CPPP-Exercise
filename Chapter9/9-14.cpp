#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    list<char *> clist{"hello", "world"};
    vector<string> svec;
    svec.assign(clist.begin(), clist.end());
    cout << svec.capacity() << " " << svec.size() << endl;
    for (auto i : svec)
    {
        cout << i << " ";
    }
    return 0;
}

//编写程序，将一个 list 中的 char* 指针（指向C風格字符串）元素赋值给一个 vector 中的 string.
//Wed,Feb12,2020

