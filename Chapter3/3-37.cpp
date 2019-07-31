#include<iostream>
using namespace std;

int main()
{
	const char ca[] = { 'h','e','l','l','o' };
	const char* cp = ca;
	while (*cp)
	{
		cout << *cp << endl;
		++cp;
	}
	return 0;
}

//程序的输出结果是hello与一些乱码，每次都不相同
//while（*cp)的判断条件是cp所指对象值是否为0
