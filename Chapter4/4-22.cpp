#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int grade;
	string finalgrade;
	cin >> grade;

	//Conditional Operator
	finalgrade = (grade > 90) ? "high pass"
		: (grade > 60) ? (grade < 75) ? "low pass" : "pass?" : "fail";

	finalgrade = (grade > 60) ? (grade > 75) ? (grade > 90) ? "high pass" : "pass" : "low pass" : "fail";

	//if
	if (grade > 60)
	{
		if (grade > 75)
		{
			if (grade > 90)
			{
				finalgrade = "high pass";
			}
			else
			{
				finalgrade = "pass";
			}
		}
		else
		{
			finalgrade = "low pass";
		}
	}
	else
	{
		finalgrade = "fail";
	}

	cout << finalgrade << endl;

	return 0;
	
}

//Sat, Aug3, 2019