#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void outputVector(vector<int>::iterator,vector<int>::iterator);

int main()
{
	vector<int> ivec{ 0,1,2,3,4,5,6,7,8,9 };
	outputVector(ivec.begin(), ivec.end());
	return 0;
}

void outputVector(vector<int>::iterator itbeg,vector<int>::iterator ited)
{
	if (itbeg != ited)
	{
		cout << *itbeg << endl;
		outputVector(++itbeg, ited);
	}
}

//编写一个递归函数，输出 vector 对象的内容
//Fri,Aug16,2019

