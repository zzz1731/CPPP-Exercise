#include <string>
using std::string;

class Screen
{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;
};

//思考 Screen 类应该包含哪些数据成员和函数成员，设置适当的访问权限
//Mon,Sep2,2019