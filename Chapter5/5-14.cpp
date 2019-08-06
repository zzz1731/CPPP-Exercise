#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	vector<string> svec;
	string s;
	while (cin >> s)
	{
		svec.push_back(s);
	}
	int index = 0;
	int temindex = 0;
	int count = 1;
	auto i = svec.begin();
	while (i < svec.end() - 2)
	{
		auto j = i + 1;
		int temcount = 1;
		while (*i == *j)
		{
			if (j < svec.end() - 1)
			{
				++temcount;
				++j;
			}
			else
			{
				++temcount;
				break;
			}
			
		}
		if (temcount >= count)
		{
			count = temcount;
			index = temindex;
		}
		++temindex;
		++i;

	}

	if (count > 1)
	{
		cout << count << endl;
		cout << svec[index] << endl;
	}
	else
	{
		cout << "no word was repeated" << endl;
	}
	
	return 0;
}

//编写一段程序，从标准输入中读取若干 string 对象并查找连续重复出现的单词。
//所谓连续重复出现的意思是：一个单词后面紧跟着这个单词本身。
//要求记录重复出现的最大次数以及对应的单词。
//如果这样的单词存在，输出重复出现的最大次数；
//如果不存在，输出一条信息说明任何单词都没有连续出现过。
//例如
//how now now now brown cow cow
//那么输出应该表明单词now连续出现了3次。
//Tue,Aug6,2019
