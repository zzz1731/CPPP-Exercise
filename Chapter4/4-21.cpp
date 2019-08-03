#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	for (auto &i : ivec)
	{
		cout << ((i % 2) ? 2 * i : i) << endl;
	}
	return 0;
}

//Sat,Aug3,2019