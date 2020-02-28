#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	ifstream in("F://test.txt");

	if (!in)
	{
		cout << "OPEN FAILED" << endl;
		return -1;
	}
	istream_iterator<string> in_inter(in);
	istream_iterator<string> eof;

	vector<string> words;

	copy(in_inter, eof, back_inserter(words));

	for (auto word : words)
		cout << word << " " << endl;

	cout << endl;

	return 0;
}

//编写程序，使用流迭代器读取一个文本文件，存入一个 vector 中的 string 里。
//Fri,Feb28,2020