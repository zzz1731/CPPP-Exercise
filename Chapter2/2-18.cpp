#include<iostream>
using namespace std;
int main()
{
	int val1 = 1;
	int val2 = 2;
	int *p = &val1;
	*p = 3;			//改变指针所指对象的值
	p = &val2;		//改变指针的值
	return 0;
}