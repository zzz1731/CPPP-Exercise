#include <string>

inline bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

//将6.22节（第189页）的 isShorter 函数改写为内联函数。
//Mon,Aug19,2019