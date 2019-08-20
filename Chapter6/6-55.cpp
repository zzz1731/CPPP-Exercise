#include <iostream>
#include <vector>
#include <cstdlib>
using std::vector;

int add_func(int, int);

int sub_func(int, int);

int mul_func(int, int);

int div_func(int, int);

int main()
{
    vector<int (*)(int, int)> fvec = {add_func, sub_func, mul_func, div_func};          //函数类型会自动转换为函数指针类型

    //等价形式
    decltype(add_func) *fp1 = &add_func;
    decltype(sub_func) *fp2 = &sub_func;
    decltype(mul_func) *fp3 = &mul_func;
    decltype(div_func) *fp4 = &div_func;
    vector<decltype(add_func) *> Fvec = {fp1, fp2, fp3, fp4};

    return EXIT_SUCCESS;
}

int add_func(int i, int n)
{
    return i + n;
}

int sub_func(int i, int n)
{
    return i - n;
}

int mul_func(int i, int n)
{
    return i * n;
}

int div_func(int i, int n)
{
    if (n != 0)
        return i / n;
}

//编写4个函数，分别对两个 int 执行加、减、乘、除运算；
//在上一题创建的 vector 对象中保存指向这些值的指针。
//Tue,Aug20,2019