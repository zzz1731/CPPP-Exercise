#include <iostream>
using namespace std;

int main()
{
	int x[10];
	int *p = x;
	cout << sizeof x / sizeof(*x) << endl;
	cout << sizeof p / sizeof(*p) << endl;
	return 0;
}

//推断代码的输出结果并说明理由
// 40/4=10
// 在32位环境下第二条表达式输出为1，64位环境下输出为2，因为32位下指针大小占32位，64位下指针大小占64位
//Sat,Aug3,2019