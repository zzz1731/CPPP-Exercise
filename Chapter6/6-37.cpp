#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string(&func())[10];				//原始形式


typedef string arrT[10];

using arrT = string[10];

arrT& func();						//类型别名形式


auto func()->string(&)[10];			//尾置返回类型形式


string str[10];
decltype(str) &func();				//decltype表达式形式


int main()
{
	return EXIT_SUCCESS;
}

//6-36 & 6-37
//编写一个函数的声明，使其返回数组的引用并且该数组包含10个 string 对象。不要使用 尾置返回类型、decltype 或者类型别名
//为上一题的函数再写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用 decltype 关键字。
//你觉得哪种形式最好？为什么？

//Fri,Aug16,2019
