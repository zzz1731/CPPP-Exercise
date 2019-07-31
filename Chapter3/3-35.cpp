#include<iostream>
#include<iterator>
using namespace std;

int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int *p = begin(a); p != end(a); p++)
	{
		*p = 0;
		cout << *p << endl;
	}
	return 0;
}


//Wed,Jul31,2019