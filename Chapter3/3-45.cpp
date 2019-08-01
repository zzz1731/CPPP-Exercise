#include<iostream>
using namespace std;

int main()
{
	int ia[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	for (auto &b : ia)
	{
		for (auto c : b)
		{
			cout << c;
		}
	}
	return 0;
}

//改写3-43中的程序，这次使用auto关键字
//Thu,Aug1,2019