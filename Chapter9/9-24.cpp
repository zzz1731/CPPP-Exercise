#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;

    cout << ivec.at(0) << endl;
    cout << ivec[0] << endl;
    cout << ivec.front() << endl;
    cout << *ivec.cbegin() << endl;

    return 0;
}

//编写程序，分别使用 at 、下标运算符 、 front 和 begin 提取一个 vector 中的第一个元素。在一个空vector上测试你的程序。
//Thu,Feb13,2020