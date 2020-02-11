#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

vector<int>::const_iterator search_vec(vector<int>::const_iterator begin, vector<int>::const_iterator end, int num)
{
    while (begin != end)
    {
        if (*begin != num)
            ++begin;
        else
        {
            break;
        }
    }
    return begin;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 7, 8, 9};
    cout << search_vec(vec.cbegin(), vec.cend(), 7) - vec.cbegin() << endl;
    cout << search_vec(vec.cbegin(), vec.cend(), 6) - vec.cbegin() << endl;
    return 0;
}

//重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理找未找到给定值的情况。
//Tue,Feb11,2020