#include<iostream>
using namespace std;

int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	//range for
	for (int (&c)[4] : ia)
	{
		for (int d : c)
		{
			cout << d;
		}
	}
	cout << "\n";

	//index
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << ia[i][j];
		}
	}
	cout << "\n";

	//pointer
	for (int(*p)[4] = begin(ia); p != end(ia); p++)
	{
		for (int *pp = begin(*p); pp != end(*p); pp++)
		{
			cout << *pp;
		}
	}
	return 0;
}

//编写三个不同版本的程序，令其均能输出ia的元素。
//版本1使用 范围for 语句管理迭代过程；
//版本2和版本3都使用普通的for语句，
//其中版本2要求使用 下标运算符
//版本3要求使用指针。
//此外，在所有3个版本的程序中都要直接写出数据类型而不能使用类型别名、auto关键字或decltype关键字
//Thu,Aug1,2019