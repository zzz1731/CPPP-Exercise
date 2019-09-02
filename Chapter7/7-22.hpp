#include <string>
using std::string;

class Person
{
private:
    string strName;
    string strAddress;

public:
    Person() = default;
    Person(const string &name, const string &add)
    {
        strName = name;
        strAddress = add;
    }
    Person(std::istream &is)
    {
        is >> *this;
    }
    string getName() const { return strName; }
    string getAddress() const { return strAddress; }
};

//修改你的 Person 类使其隐藏实现的细节。
//Mon,Sep2,2019