#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

string &trans(string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] >= 'A' && s[p] <= 'Z')
            s[p] -= ('A' - 'a');
        else if (s[p] == ',' || s[p] == '.')
            s.erase(p, 1);
    }

    return s;
}

int main()
{
    ifstream in("F://test.txt");
    if (!in)
    {
        cout << "FILE OPEN FAILED" << endl;
        exit(1);
    }

    map<string, list<int>> word_lineno;
    string line;
    string word;
    int lineno = 0;
    while (getline(in, line))
    {
        ++lineno;
        istringstream l_in(line);
        while (l_in >> word)
        {
            trans(word);
            word_lineno[word].push_back(lineno);
        }
    }

    for (const auto &w : word_lineno)
    {
        cout << w.first << "所在行：";
        for (const auto &i : w.second)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}

//定义一个 map,将单词与一个行号的 list 关联，list 中保存的是单词所出现的行号。
//Wed,Mar11,2020