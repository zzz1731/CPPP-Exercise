#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void add_family(map<string, vector<string>> &families, const string &family)
{

    if (families.find(family) == families.end())
        families[family] = vector<string>();
}

void add_child(map<string, vector<string>> &families, const string &family, const string &child)
{
    families[family].push_back(child);
}

int main()
{
    map<string, vector<string>> families;

    add_family(families, "周");
    add_child(families, "周", "萤");
    add_child(families, "林", "風眠");
    add_family(families, "林");

    for (auto &family : families)
    {
        for (auto child : family.second)
        {
            cout << family.first << child << " ";
        }
        cout << endl;
    }

    return 0;
}

//定义一个 map,关键字是家庭的姓，值是一个 vector，保存家中孩子(们)的名。编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子。
//Wed,Mar11,2020