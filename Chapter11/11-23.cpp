#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

void add_child(multimap<string, string> &families, const string &family, const string &child)
{
    families.insert({family, child});
}

int main()
{
    multimap<string, string> families;

    add_child(families, "周", "桜");
    add_child(families, "周", "萤");

    for (auto f : families)
        cout << f.first << f.second << endl;

    return 0;
}

//11.2.1节练习(第378页)中的 map 以孩子的姓为关键字，保存他们的名的 vector，用 multimap 重写此 map。
//Fri,Mar13,2020