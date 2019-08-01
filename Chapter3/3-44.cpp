#include<iostream>
#include<iterator>
using namespace std;

int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	using int_arry = int[4];
	typedef int arry_int[4];

	for (int_arry *p = begin(ia); p != end(ia); p++)
	{
		for (int *pp = begin(*p); pp != end(*p); pp++)
		{
			cout << *pp;
		}
	}
	return 0;
}

//改写3-43中的程序，使用类型别名来代替控制循环控制变量的类型
//Thu,Aug1,2019