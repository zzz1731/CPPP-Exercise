#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> svec{ "123","+456","-789" };
	vector<string> svec1{ "12.3","-4.56","+7.8e-2" };
	int sum = 0;
	float fsum = 0;

	for (auto i : svec)
	{
		sum += stoi(i);
	}

	for (auto iter = svec1.begin(); iter != svec1.end(); ++iter)
	{
		fsum += stof(*iter);

	}

	cout << sum << endl;
	cout << fsum << endl;

	return 0;
}

//编写程序处理一个 vector<string> ，其元素都表示整形值。计算 vector 中所有元素之和。
//修改程序，使之计算表示浮点值的 string 之和。
//Tue,Feb18,2020