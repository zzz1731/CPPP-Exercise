#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;

    while (map_file >> key && getline(map_file, value))
    {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw runtime_error("no rule for" + key);
    }

    return trans_map;
}

const string &transform(const string &s, const map<string, string> &trans_map)
{
    auto map_it = trans_map.find(s);

    if (map_it != trans_map.end())
        return map_it->second;
    else
        return s;
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = buildMap(map_file);
    string text;

    while (getline(input, text))
    {
        istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word)
        {
            if (firstword)
                firstword = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }

        cout << endl;
    }
}

int main()
{
    ifstream trans_map("F://TESTFILE//11-33-1.txt");
    ifstream input("F://TESTFILE//11-33-2.txt");

    if (!trans_map)
    {
        cout << "OPEN FILE 11-33-1 FAILED" << endl;
        exit(1);
    }

    if (!input)
    {
        cout << "OPEN FILE 11-33-2 FAILED" << endl;
        exit(1);
    }

    word_transform(trans_map, input);

    return 0;
}

//实现你自己版本的单词转换程序
//Mon,Mar16,2020