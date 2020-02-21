#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

inline void output_words(vector<string>& words)
{
	for (auto word : words)
		cout << word << " ";

	cout << endl;

}

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string>& words)
{
	output_words(words);

	sort(words.begin(), words.end());
	output_words(words);

	auto end_unique = unique(words.begin(), words.end());
	output_words(words);

	words.erase(end_unique, words.end());

	stable_sort(words.begin(), words.end(), isShorter);
	output_words(words);

}

int main()
{
	vector<string> words{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	elimDups(words);

	return 0;
}

//编写程序，使用 stable_sort 和 isShorter 将传递给你的 elimDups 版本的 vector 排序。打印 vector 的内容，验证你的程序的正确性。
//Fri,Feb21,2020