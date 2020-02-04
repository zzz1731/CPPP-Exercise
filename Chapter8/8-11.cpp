#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    string line,word;
    vector<PersonInfo> people;
    istringstream record;

    while(getline(cin,line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        while(record>>word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    return 0;
}
 
//本节的程序在外层 while 循环中定义了 istringstream 对象。如果 record 对象定义在循环之外，你需要对程序进行怎样的修改？
//重写程序，将 record 的定义移到 while 循环之外，验证你设想的修改方法是否正确。

//每次通过 str 成员函数将流绑定到不同的字符串，同时还要调用 clear 来重置流的状态。

//Tue,Feb4,2020

