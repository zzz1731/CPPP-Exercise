#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator begin, vector<int>::iterator end, int num)
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
    cout << search_vec(vec.begin(), vec.end(), 7) - vec.begin() << endl;
    cout << search_vec(vec.begin(), vec.end(), 6) - vec.begin() << endl;
    return 0;
}

//重写上一题的函数，返回一个迭代器指向找到的元素。注意，程序必须处理找未找到给定值的情况。
//Tue,Feb11,2020