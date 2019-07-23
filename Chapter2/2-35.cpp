#include <iostream>
using namespace std;
int main()
{
    const int i = 42;           
    auto j = i;             //j是int类型    
    auto &k = i;            //k是整形常量的引用
    auto *p = &i;           //p是指向整型常量的指针
    const auto j2 = i, &k2 = i;     //j2是整形常量，k2是整形常量的引用
}