#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

void add_family(map<string,vector<pair<string,string>>> &families,const string &family)
{
    families[family];
}

void add_child(map<string,vector<pair<string,string>>> &families,const string &family,const string &child,const string &birthday)
{
    families[family].push_back({child,birthday});
}

int main()
{
    map<string,vector<pair<string,string>>> families;

    add_family(families,"周");
    add_child(families,"周","萤","1998-07-11");
    add_child(families,"周","桜","1997-01-01");
    add_family(families,"周");

    for(auto &family:families)
    {
        for(auto &child:family.second)
        {
            cout<<family.first<<child.first<<" "<<child.second;
            cout<<"   ";
        }
        cout<<endl;

    }


    return 0;

}

//扩展你在11.2.1节练习(第378页)中编写的孩子姓到名的 map,添加一个 pair 的 vector，保存孩子的名字和生日.
//Thu,Mar12,2020