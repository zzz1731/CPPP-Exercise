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
	unique_copy(ivec.begin(), ivec.end(), out);
	return 0;
}

//修改前一题的程序，使其只打印不重复的元素，你的程序应使用 unique_copy。
//Fri,Feb28,2020