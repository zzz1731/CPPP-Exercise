#include <iostream>
#include <vector>
#include <cstdlib>
#include <cassert>
using std::vector;

int add_func(int, int);

int sub_func(int, int);

int mul_func(int, int);

int div_func(int, int);

void compute(int, int, int (*)(int, int));

int main()
{
    vector<int (*)(int, int)> fvec = {add_func, sub_func, mul_func, div_func}; //函数类型会自动转换为函数指针类型

    //等价形式
    decltype(add_func) *fp1 = &add_func;
    decltype(sub_func) *fp2 = &sub_func;
    decltype(mul_func) *fp3 = &mul_func;
    decltype(div_func) *fp4 = &div_func;
    vector<decltype(add_func) *> Fvec = {fp1, fp2, fp3, fp4};

    for (auto f : fvec)
    {
        compute(3, 1, f);
    }
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
    assert(n != 0);
    return i / n;
}

void compute(int i, int n, int (*fp)(int, int))
{
    std::cout << fp(i, n) << std::endl;
}

//调用上述 vector 对象中的每个元素并输出结果。
//Tue,Aug20,2019