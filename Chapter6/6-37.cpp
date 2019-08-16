#include <iostream>
using namespace std;

int(*func())[10];					//原始形式


typedef int arrT[10];

using arrT = int[10];

arrT* func();						//类型别名形式


auto func()->int(*)[10];			//尾置返回类型形式


int odd[] = { 0,1,2,3,4,5,6,7,8,9 };
decltype(odd) *func();				//decltype表达式形式


int main()
{
	return 0;
}

//6-36 & 6-37
//编写一个函数的声明，使其返回数组的引用并且该数组包含10个 string 对象。不要使用 尾置返回类型、decltype 或者类型别名
//为上一题的函数再写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用 decltype 关键字。
//你觉得哪种形式最好？为什么？

//Fri,Aug16,2019