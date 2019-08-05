#include <iostream>
using namespace std;

int main()
{
    int i;
    double d;
    i*=static_cast<int>(d);
    return 0;
}

//假设 i 是 int 类型，d 是 double类型，书写表达式 i *= d 使其执行整数类型的乘法而非浮点数类型的乘法
//Mon,Aug5,2019