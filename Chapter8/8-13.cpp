#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PeopleInfo
{
    string name;
    vector<string> phones;

};
string format(const string &s)
{
    return s;
}

bool valid(const string &S)
{
    return true;
}

int main()
{
    string line,word;
    vector<PeopleInfo> people;
    istringstream record;
    
    ifstream in("F://test.txt");
    
    if(!in)
    {
        cerr<<"OPEN FAILED"<<endl;
        return -1;
    }

    while(getline(in,line))
    {
        PeopleInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        while(record>>word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    ostringstream os;
    
    for(const auto &entry:people)
    {
        ostringstream formatted,badNums;
        for(const auto &nums:entry.phones)
        {
            if(!valid(nums))
            {
                badNums<<" "<<nums;
            }
            else
            {
                formatted<<" "<<format(nums);
            }
            if(badNums.str().empty())
            {
                os<<entry.name<<" "<<formatted.str()<<endl;
            }
            else
            {
                cerr<<"INPUT ERROR"<<entry.name<<"INVALID NUMBERS"<<badNums.str()<<endl;
            }
        }
    }

cout<<os.str()<<endl;

return 0;
}

//重写本节的电话号码程序，从一个命名文件而非 cin 读取数据

//Tue,Feb4,2020