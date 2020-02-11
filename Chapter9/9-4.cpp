#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

bool search_vec(vector<int>::const_iterator begin, vector<int>::const_iterator end, int num)
{
    bool flag = false;
    while (begin != end)
    {
        if (*begin != num)
        {
            ++begin;
        }
        else
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 7, 8, 9};
    cout << search_vec(vec.cbegin(), vec.cend(), 7) << endl;
    cout << search_vec(vec.cbegin(), vec.cend(), 6) << endl;

    return 0;
}

//编写函数，接受一对指向 vector<int> 的迭代器和一个 int 值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
//Tue,Feb11,2020