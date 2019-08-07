#include <iostream>
using namespace std;

int fact()
{
	
	int val;
	int ret = 1;
	cin >> val;
	while (val > 1)
	{
		ret *= val--;
	}
	
	return ret;
	
}

int main()
{
	cout << fact() << endl;
	return 0;
}

//编写一个与用户交互的函数，要求用户输入一个数字，计算生成该数字的阶乘。在 main 函数中调用该函数
//Wed,Aug7,2019