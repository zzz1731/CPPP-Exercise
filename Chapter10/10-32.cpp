#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << "PARAMETER ERROR" << endl;
		return -1;
	}

	ifstream in(argv[1]);
	if (!in)
	{
		cout << "OPEN " << argv[1] << " FAILED" << endl;
		return -1;
	}

	ofstream out1(argv[2]);
	if (!out1)
	{
		cout << "OPEN " << argv[2] << " FAILED" << endl;
		return -1;
	}

	ofstream out2(argv[3]);
	if (!out2)
	{
		cout << "OPEN " << argv[3] << " FAILED" << endl;
		return -1;
	}

	istream_iterator<int> iter_in(in);
	istream_iterator<int> eof;
	vector<int> ivec;
	copy(iter_in, eof, back_inserter(ivec));
	ostream_iterator<int> iter_out1(out1, " ");
	ostream_iterator<int> iter_out2(out2, "\n");

	for (auto i : ivec)
	{
		if (i % 2)
			iter_out1++ = i;
		else
			iter_out2++ = i;
	}

	return 0;
		
}

//编写程序，接受三个参数：一个输入文件和两个输出文件的文件名。输入文件保存的应该是整数。使用 istream_iterator 读取输入文件。
//使用 ostream_iterator 将奇数写入第一个输出文件，每个值之后都跟一个空格。将偶数写入第二个输出文件，每个值都独占一行。
//Fri,Feb28,2020