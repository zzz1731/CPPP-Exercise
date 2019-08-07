#include <iostream>
#include <algorithm>
using namespace std;

int myabs(int val)
{
	return abs(val);
}

int main()
{
	int val;
	cin >> val;
	cout << myabs(val) << endl;
	return 0;
}

//编写一个函数输出其实参的绝对值
//Wed,Aug7,2019