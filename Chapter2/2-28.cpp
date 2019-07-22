#include <iostream>
using namespace std;
int main()
{
    int i, *const cp;           //声明int变量i,指向int变量的常量指针cp,不合法常量指针cp必须初始化
    int *p1, *const p2;         //声明指向int变量的指针p1,指向int变量的常量指针p2，不合法常量指针p2必须初始化
    const int ic, &r = ic;      //声明常量int,指向常量int的引用r,不合法，常量int ic必须初始化
    const int *const p3;        //声明指向常量int变量的常量指针p3,不合法常量指针p3必须初始化
    const int *p;               //声明指向常量int的指针p,合法
    return 0;
}