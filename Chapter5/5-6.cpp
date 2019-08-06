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
	lettergrade = (grade > 60) ? (grade % 10 > 7) ? scores[(grade - 50) / 10] + '+' : (grade % 10 < 3) ? scores[(grade - 50) / 10] + '-' : scores[(grade - 50) / 10] : scores[0];
	cout << lettergrade;
	return 0;
}

//改写上一题的程序，使用条件运算符替代 if else 语句
//Tue,Aug6,2019