#include <iostream>
#include <vector>
#include <string>

using namespace std;

void replace_string(string& s, const string& oldVal, const string& newVal)
{
	auto l = oldVal.size();
	if (!l)
		return;

	auto iter = s.begin();
	while (iter <= s.end() - l)
	{
		auto iter1 = iter;
		auto iter2 = oldVal.begin();

		while (iter2 != oldVal.end() && *iter1 == *iter2)
		{
			++iter1;
			++iter2;
		}

		if (iter2 == oldVal.end())
		{
			iter = s.erase(iter, iter1);
			if (newVal.size())
			{
				iter2 = newVal.end();
				do {
					--iter2;
					iter = s.insert(iter, *iter2);
				} while (iter2 > newVal.begin());
			}
			iter += newVal.size();
		}
		else ++iter;
	}
}

int main()
{
	string s = "tho thru tho!";
	replace_string(s, "thru", "through");
	cout << s << endl;

	replace_string(s, "tho", "though");
	cout << s << endl;

	replace_string(s, "through", "");
	cout << s << endl;

	return 0;
}

//编写函数，接受三个 string 参数 s、oldVal 和 newVal。使用迭代器及 insert 和 erase 函数将 s 中所有 oldVal 替换为 newVal。
//测试你的程序，用它替换通用的简写形式，如，将 "tho" 替换为 "through" ，将 "thru"  替换为 "through" 。
//Tue,Feb18,2020