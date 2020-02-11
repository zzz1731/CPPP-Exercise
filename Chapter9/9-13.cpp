#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    list<int> ilist{1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec{7, 6, 5, 4, 3, 2, 1};
    vector<double> dvec1(ilist.begin(), ilist.end());
    vector<double> dvec2(ivec.begin(), ivec.end());
    return 0;
}

//如何从一个 _list<int>_ 初始化一个 _vector<double>_?从一个 _vector<int>_ 又该如何创建？编写代码验证你的答案
//Tue,Feb11,2020