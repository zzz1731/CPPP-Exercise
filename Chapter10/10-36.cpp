#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> ili{0, 1, 2, 3, 4, 5, 6, 7, 0, 8, 9};
    auto last_z = find(ili.rbegin(), ili.rend(), 0);
    last_z++;
    int p = 1;
    for (auto iter = ili.begin(); iter != last_z.base(); ++iter, ++p)
        ;

    if (p >= ili.size())
        cout << "404 NOT FIND" << endl;
    else
    {
        cout << "LAST ZERO LOCATION " << p << endl;
    }

    return 0;
}

//使用 find 在一个 int 的 list 中查找最后一个值为 0 的元素.
//Sat,Feb29,2020