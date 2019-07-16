#include<iostream>
using namespace std;
int main()
{
    int ival = 1.01;        //合法，但是会存在强制转换
    int &rival = 1.01;      //不合法，引用类型的初始值必须是一个对象
    int &rival2 = ival;     //合法
    int &rival3;            //不合法，引用必须被初始化
    return 0;
}