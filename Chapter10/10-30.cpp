#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	istream_iterator<int> in(cin);
	istream_iterator<int> eof;
	ostream_iterator<int> out(cout," ");
	vector<int> ivec;
	copy(in, eof, back_inserter(ivec));
	sort(ivec.begin(), ivec.end());
	copy(ivec.begin(), ivec.end(), out);
	return 0;
}

//使用一个迭代器，sort 和 copy 从标准输入读取一个整数序列，将其排序，并将结果写到标准输出。
//Fri,Feb28,2020