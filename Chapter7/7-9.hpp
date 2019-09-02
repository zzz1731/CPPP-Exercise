#pragma onece
#ifndef _PERSON
#define _PERSON

#include <string>
using std::string;

class Person
{
    friend std::istream &read(std::istream &is,Person &per);
    friend std::ostream &print(std::ostream &os,Person &per);

private:
    string strName;
    string strAddress;

public:
    string getName() const { return strName; }

    string getAddress() const { return strAddress; }
};

std::istream &read(std::istream &is,Person &per)
{
    is>>per.strName>>per.strAddress;
    return is;
}

std::ostream &print(std::ostream &os,const Person &per)
{
    os<<per.getName()<<per.getAddress();
    return os;
}

#endif

//对于7.1.2节（第233页）联系中的代码，添加读取和打印 Person 对象的操作
//Wed,Aug28,2019