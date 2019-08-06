#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int grade;
	string lettergrade;
	const vector<string> scores = { "F","D","C","B","A","A++" };
	cin >> grade;

	if (grade > 60)
	{
		lettergrade = scores[(grade - 50) / 10];
		if (grade % 10 > 7)
		{
			lettergrade += '+';
		}
		else if (grade % 10 < 3)
		{
			lettergrade += '-';
		}
	}
	else
	{
		lettergrade = scores[0];
	}

	cout << lettergrade << endl;

	return 0;

}

//写一段自己的程序，使用 if else语句实现将数字成绩转换为字母成绩的要求
//Tue,Aug6,2019