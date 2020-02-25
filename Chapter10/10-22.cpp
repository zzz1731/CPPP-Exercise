#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

inline void output_words(vector<string> &words)
{
    for (auto word : words)
        cout << word << " ";

    cout << endl;
}

bool check_size(const string &s, string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    output_words(words);

    auto bc = count_if(words.begin(), words.end(), bind(check_size, _1, sz));

    cout << bc << " words of length" << sz << " or longer" << endl;
}

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(words,6);

    return 0;
}

//重写统计长度小于等于6的单词数量的程序，使用函数代替 lambda。
//Tue,Feb25,2020