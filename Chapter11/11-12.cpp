#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream in("F://11-12.txt");
    if (!in)
    {
        cout << "OPEN FILE FAILED" << endl;
        exit(1);
    }

    vector<pair<string, int>> data;
    string s;
    int v;

    while (in >> s && in >> v)
        data.push_back(make_pair(s, v));

    for (const auto &d : data)
        cout << d.first << " " << d.second << endl;

    return 0;
}


//编写程序，读入 string 和 int 的序列，将每个 string 和 int 存入一个 pair 中，pair 保存在一个 vector 中
//Thu,Mar12,2020