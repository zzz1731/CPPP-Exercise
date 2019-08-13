#include <iostream>
#include <string>
using namespace std;

bool isUpper(const string &);
void toLower(string &);

int main()
{
	string s1 = "Hello World";
	toLower(s1);
	cout << s1 << endl;
	return 0;
}

bool isUpper(const string &s)
{
	for (auto c : s)
	{
		if (c >= 65 && c <= 90)
		{
			return true;
		}
	}
	return false;

}

void toLower(string &s)
{
	for (auto &c : s)
	{
		if (c >= 65 && c <= 90)
		{
			c += 32;
		}
	}
}

//编写一个函数，判断 string 对象中是否含有大写字母。编写另一个函数，把 string 对象全都改成小写形式。
//在这两个函数中你使用的形参类型相同吗？为什么？
//Tue, Aug13, 2019