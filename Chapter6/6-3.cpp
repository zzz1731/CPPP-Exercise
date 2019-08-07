#include <iostream>
using namespace std;

int fact(int val)
{
	if (val > 1)
	{
		val *= fact(val - 1);

	}
	
	return val;
	
}

int main()
{
	cout << fact(1) << endl;
	return 0;
}

//编写你自己的 fact 函数，上机检查是否正确
//Wed,Aug7,2019