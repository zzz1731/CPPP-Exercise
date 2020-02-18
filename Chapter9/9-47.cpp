#include <iostream>
#include <string>

using namespace std;

void find_chars(const string& s, const string& chars)
{
    string::size_type pos = 0;
    while ((pos = s.find_first_of(chars, pos)) != string::npos)
    {
        cout << "pos:" << pos << ",char:" << s[pos] << endl;
        ++pos;
    }

 }


int main()
{
    string s = "ab2c3d7R4E6";
    string numbers = "0123456789";
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "FIND ALL NUMBERS CHARACTER" << endl;
    find_chars(s, numbers);
    cout << "FIND ALL ALPHABETIC CHARACTER" << endl;
    find_chars(s, alphabet);

    return 0;
}

//编写程序，首先查找 string "ab2c3d7R4E6" 中的每个数字字符，然后查找其中每个字母字符。编写两个版本的程序，第一个要使用 find_first_of,第二个要使用 find_first_not_of。
//Tue,Feb18,2020