#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream in("F://test.txt");
	
	if (!in)
	{
		cerr << "OPEN FAILED" << endl;
		return -1;
	}

	string line;
	vector<string> words;
	while (getline(in, line))
	{
		words.push_back(line);
	}

	in.close();
	
	/*for (auto it : words)
	{
		istringstream line_str(it);
		string word;
		while (line_str>>word)
		{
			cout << word << " ";

		}
		cout << endl;
	}*/
	vector<string>::const_iterator it = words.begin();
	while (it != words.end())
	{
		istringstream line_str(*it);
		string word;
		while (line_str >> word)
			cout << word << " ";
		cout << endl;
		++it;
	}
	return 0;
}

//编写程序，将来自一个文件中的行保存在一个 vector<string> 中。
//然后使用一个 istringstream 从 vector 读取数据元素，每次读取一个单词。

//Tue,Feb4,2020