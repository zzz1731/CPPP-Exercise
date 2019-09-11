#include <iostream>
#include <string>
using namespace std;

class NoDefault
{
public:
    NoDefault(int i)
    {
        val = i;
    }
    int val;
};

class C
{
public:
    NoDefault nd;
    C(int i = 0) : nd(i) { }
};

//假定有一个名为 NoDefault 的类，它有一个接受 int 的构造函数，但是没有默认构造函数。应以类 C ，C 有一个 NoDefault 类型的成员，定义 C 的默认构造函数。

//因为 NoDefault 仅有的一个构造函数并不是默认构造函数，所以在类 C 中，不能使用无参数的默认构造函数，那样的话，类 C 的 NoDefault 成员无法正确初始化。

//Wed,Sep11,2019