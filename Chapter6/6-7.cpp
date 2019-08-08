#include <iostream>
using namespace std;

int fun()
{
	static int i = 0;
	return i++;
}

int main()
{
	for (int i = 0; i < 50; i++)
	{
		cout << fun() << endl;
	}
	return 0;
}

//编写一个函数，当它第一次被调用时返回0，以后每次调用返回值加1
//Thu,Aug8,2019