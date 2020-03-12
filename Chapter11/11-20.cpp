#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    fstream in("F://test.txt");
    if (!in)
    {
        cout << "OPEN FILE FAILED" << endl;
        exit(1);
    }

    map<string, int> dic;
    string s;
    while (in >> s)
    {
        auto in_it = dic.insert({s, 1});
        if (!in_it.second)
            ++in_it.first->second;
    }

    for (auto word : dic)
        cout << word.first << " " << word.second << endl;

    return 0;
}

//重写11.1节(第376页)的单词计数程序，使用 insert 代替下标操作。你认为哪个程序更容易编写和阅读?解释原因。
//Thu,Mar12,2020