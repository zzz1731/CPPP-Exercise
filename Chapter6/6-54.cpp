#include <iostream>
#include <vector>
#include <cstdlib>
using std::vector;

int func(int, int);

vector<int (*)(int, int)> fvec;

vector<decltype(func) *> fvec;

int main()
{
    return EXIT_SUCCESS;
}

//编写函数的声明，令其接受两个 int 形参并且返回类型也是 int;
//然后声明一个 vextor 对象，令其元素是指向该函数的指针。
//Tue,Aug20,2019