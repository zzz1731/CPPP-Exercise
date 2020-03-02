#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

inline void output_words(list<string> &words)
{
    for (auto word : words)
        cout << word << " ";

    cout << endl;
}

void elimDups(list<string> &words)
{
    output_words(words);

    words.sort();
    output_words(words);

    words.unique();
    output_words(words);
}

int main()
{
    list<string> sli{"the","quick","red","fox","jumps","over","the","slow","red","turtle"};
    elimDups(sli);

    return 0;
}

//使用 list 代替 vector 重新实现 10.2.3 节(第343页)中的去除重复单词的程序。
//Mon,Mar2,2020