#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string sought;
    vector<string> vec;
    auto beg = vec.begin(), end = vec.end();
    auto mid = vec.begin() + (end - beg) / 2;
    while (mid != end && *mid != sought)
    {
        if (sought < *mid)
        {
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
        mid = beg + (end - beg);
    }
    return 0;
}

//为甚么用的是mid = beg + (end - beg) / 2
//而非mid = (beg + end) / 2?
//C++迭代器运算不支持两个迭代器相加的运算吧
//（end - beg) / 2得到一个整数再与beg相加返回一个新的位置的迭代器
//Wed,Jul31,2019

