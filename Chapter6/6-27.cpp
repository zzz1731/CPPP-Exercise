#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int>);

int main()
{
	cout << sum({ 1,2,3,4,5,6,7 }) << endl;
}

int sum(initializer_list<int> il)
{
	int sum = 0;
	for (const auto &elem : il)
	{
		sum += elem;
	}
	return sum;
}

//编写一个函数，它的实参是 initializer_list<int> 类型的对象，函数的功能是计算列表中所有元素的和。
//Wed,Aug14,2019