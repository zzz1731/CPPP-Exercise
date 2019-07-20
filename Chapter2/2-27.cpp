#include <iostream>
using namespace std;
int main()
{
    int i = -i, &r = 0;         //不合法，引用不可以使用字面值初始化
    int *const p2 = &i2;        //合法
    const int i = -1, &r = 0;   //合法
    const int *const p3 = &i2;  //合法
    const int *p1 = &i2;        //合法
    const int &const r2;        //不合法
    const int i2 = i, &r = i;   //合法
    return 0;
}