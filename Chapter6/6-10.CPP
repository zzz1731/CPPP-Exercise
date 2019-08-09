#include <iostream>
using namespace std;

void fun(int *ptr1, int *ptr2);

int main()
{
	int i = 1;
	int n = 3;
	int *ptr1 = &i;
	int *ptr2 = &n;
	fun(ptr1, ptr2);
	return 0;
}

void fun(int *ptr1, int *ptr2)
{
	int temp = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}

//Fri,Aug9,2019