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
			if (*(svec.end() - 1) != *(svec.end() - 2))
			{
				continue;
			}
			else
			{
				if(islower((*(svec.end() - 1))[0]))
				{
					continue;
				}
				else
				{
					flag = false;
					break;
				}
			}
		}
	}
	if (flag)
	{
		cout << "no repeat words" << endl;
	}
	return 0;
}

//修改5-20中的程序
//使其找到的的重复单词必须以大写字母开头
//Thu,Aug8,2019