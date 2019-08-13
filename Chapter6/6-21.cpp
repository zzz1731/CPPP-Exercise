#include <iostream>
using namespace std;

int fun(const int&,const int*);

int main()
{
	int i = 1;
	int n = 3;
	cout<<fun(i, &n);
	return 0;
}

int fun(const int &i, const int *p)
{
	if (i > *p)
	{
		return i;
	}
	else
	{
		return *p;
	}
}

//编写一个函数，令其饥饿收两个参数：一个是 int 型的数，另一个是 int 指针。
//函数比较 int 的值和指针所指的值，返回较大的那个。
//在该函数中指针的类型应该是什么?
//Tue,Aug13,2019