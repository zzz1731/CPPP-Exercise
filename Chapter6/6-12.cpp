#include <iostream>
using namespace std;

void fun(int&, int&);

int main()
{
	int i = 1;
	int n = 3;
	fun(i, n);
	return 0;
}

void fun(int& ref1, int& ref2)
{
	int temp = ref2;
	ref2 = ref1;
	ref1 = temp;
	cout << ref1 << endl;
	cout << ref2 << endl;
}

//改写6.10的程序，使用引用而非指针交换两个整数的值。
//你觉得那种方法更易于使用呢？为什么？
//Tue,Aug13,2019