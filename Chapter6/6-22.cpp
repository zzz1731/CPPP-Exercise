#include <iostream>
using namespace std;

void exchangePointer(int*&, int*&);

int main()
{
	int i = 1;
	int n = 3;
	int *p1 = &i;
	int *p2 = &n;
	exchangePointer(p1, p2);
	return 0;
}

void exchangePointer(int *&p1, int *&p2)
{
	int *temp = p2;
	p2 = p1;
	p1 = temp;
}

//编写一个函数，令其交换两个 int 指针
//Tue,Aug13,2019