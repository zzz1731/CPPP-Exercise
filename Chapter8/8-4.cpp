#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	fstream in("F:\\test.txt");
	if (!in)
	{
		cerr << "无法打开文件" << endl;
		return -1;
	}
	string line;
	vector<string> words;
	while (getline(in, line))
	{
		words.push_back(line);
	}

	in.close();

	auto it = words.begin();
	while (it != words.end())
	{
		cout << *it << endl;
		++it;
	}
	return 0;
}

//编写函数，以读模式打开一个文件，将其内容读入到一个 string 的 vector 中，将每一行作为一个独立的元素存于 vector 中。
//Mon,Feb3,2020