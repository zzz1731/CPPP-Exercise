#include <iostream>
using namespace std;

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	cout << a << endl;			//a=4
	cout << b << endl;			//b=4
	cout << c << endl;			//c=4
	cout << d << endl;			//d是a的引用，因此也为4
	return 0;
}