#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<unsigned> score(11, 0);
	unsigned grade;
	auto it = score.begin();
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			(*(it + grade / 10))++;
		}
	}
    return 0;
}

//Wed,Jul31,2019