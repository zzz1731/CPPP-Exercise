#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("F://11-3.txt");
    if (!in)
    {
        cout << "OPEN FILE ERROR" << endl;
        return -1;
    }

    map<string, size_t> word_count;
    string word;
    while (in >> word)
        ++word_count[word];

    for (const auto &w : word_count)
        cout << w.first << " occurs " << w.second << " times" << endl;

    return 0;
}

//编写你自己的单词计数程序。
//Tue,Mar3,2020