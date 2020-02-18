#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 90, 7, 4, 6, 7, 8, 7, 5, 3, 86, 7, 65, 8, 986, 5, 7, 6587, 6, 8, 9, 0, 7};
    auto c = count(ivec.begin(), ivec.end(), 7);
    cout << c << endl;

    return 0;
}

//头文件 algorithm 中定义了一个名为 count 的函数，它类似于 find,接受一对迭代器和一个值作为参数。 count 返回给定值在序列中出现的次数。编写程序，读取 int 序列存入 vector 中，打印有多少个元素的值等于给定值。
//Tue,Feb18,2020