#include<iostream>
using namespace std;
int main()
{
	int i = 42;
	int *p = &i;
	*p = *p * *p;
	cout << i << endl;
	return 0;
}

//代码的作用：将i赋值为id