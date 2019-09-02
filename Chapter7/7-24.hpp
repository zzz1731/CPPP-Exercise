#include <string>
using std::string;

class Screen
{
private:
    unsigned height = 0, width = 0;
    unsigned cursor = 0;
    string contents;

public:
    Screen() = default;
    Screen(unsigned ht, unsigned wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(unsigned ht, unsigned wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
};

//给你的 Screen 类添加三个构造函数：一个默认构造函数；另一个构造函数接受宽和高的值，然后将 contents 初始化成给定数量的空白；
//第三个构造函数接受宽和高的值以及一个字符，该字符作为初始化之后屏幕的内容。
//Mon,Sep2,2019