#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
    return s.size() < sz;
}

void biggies(vector<int> &vc, const string &s)
{
    auto p = find_if(vc.begin(), vc.end(), bind(check_size, s, _1));

    cout << "第" << p - vc.begin() + 1 << "个数" << *p << "大于等于" << s << "的长度" << endl;
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    biggies(ivec, "Hello");
    biggies(ivec, "everyone");
    biggies(ivec, "!");

    return 0;
}

//给定一个 string ，使用 bind 和 check_size 在一个 int 的 vector 中查找第一个大于 string 长度的值。
//Tue,Feb25,2020