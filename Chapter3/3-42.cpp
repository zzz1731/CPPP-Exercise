#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	int arr[10];
	auto b = ivec.begin();
	for (auto &c : arr)
	{
		if (b != ivec.end())
		{
			c = *b;
			b++;
		}
	}
	return 0;
}

//编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组
//Thu,Aug1,2019