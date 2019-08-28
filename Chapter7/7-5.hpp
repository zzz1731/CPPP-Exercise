#pragma onece
#ifndef _Person
#define _Person

#include <string>
using std::string;

class Person
{
private:
    string strName;
    string strAddress;

public:
    string getName() const { return strName; }

    string getAddress() const { return strAddress; }
};

#endif

//在你的 Person 类中提供一些操作使其能够返回姓名和地址。这些函数是否应该是 const 的呢？解释原因。
//上述两个函数应该被定义成常量成员函数，因为不论返回姓名还是返回地址，在函数体内部都只是读取数据成员的值，而不会做任何改变。
//Wed,Aug28,2019