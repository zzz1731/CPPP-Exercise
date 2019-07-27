#include <iostream>
using namespace std;

int main()
{          
    int a = 3, b = 4;           //赋值是会产生引用的一类典型表达式
    decltype(a) c = a;          //引用的类型就是左值的类型 
    decltype(a = b) d = a;      //c是int型 
    return 0;                   //d是int&
}