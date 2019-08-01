#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
	vector<int> ivec(begin(arr), end(arr));

	for (auto c : ivec)
	{
		cout << c;
	}

	cout << "\n";

	for (auto b = ivec.begin(); b != ivec.end(); b++)
	{
		cout << *b;
	}

	return 0;
}

//编写一段程序，用整型数组初始化一个vector对象
//Thu,Aug1,2019