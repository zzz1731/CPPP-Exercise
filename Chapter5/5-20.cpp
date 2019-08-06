#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> svec;
	string s;
	bool flag = true;
	
	while (cin >> s)
	{
		svec.push_back(s);
		if (svec.size() > 1)
		{
			if (*(svec.end() - 1) == *(svec.end() - 2))
			{
				cout << *(svec.end() - 1);
				flag = false;
				break;
			}
		}
	}
	if (flag)
	{
		cout << "no repeat words" << endl;
	}
	return 0;
}

//编写一段程序，从标准输入中读取 string 对象的序列直到连续出现两个相同的单词或者所有单词都读完为止。
//使用 while 循环一次读取一个单词，当一个单词连续出现两次时使用 break 语句终止循环。
//输出连续重复出现的单词，或者输出一条消息说明没有任何单词是连续重复出现的。
//Tue,Aug6,2019