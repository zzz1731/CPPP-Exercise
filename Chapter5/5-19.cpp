#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	string rsp;

	do {
		cin >> s1;
		cin >> s2;
		if (s1.size() < s2.size())
			cout << s1<<endl;
		else
			cout << s2<<endl;
		cout << "continue?" << endl;
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] != 'n');

	return 0;
}

//编写一段程序，使用 do while 循环重复地执行下述任务，
//首先提示用户输入两个 string 对象，然后挑出较短的那个并输出它
//Tue,Aug6,2019