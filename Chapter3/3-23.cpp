#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	for (auto it = ivec.begin(); it != ivec.cend(); ++it)
	{
		*it = 2 * *it;
		cout << *it << endl;
	}
	return 0;
}

//Wed,Jul31,2019