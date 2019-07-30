#include <iostream>
#include <vector>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vl;             //空vector
    vector<int> v2(10);         //10个0
    vector<int> v3(10, 42);     //10个42
    vector<int> v4{10};         //1个10
    vector<int> v5{10, 42};     //两个元素，一个值为10另一个值为42
    vector<string> v6{10};      //10个空字符串元素
    vector<string> v7{10, "hi"};//10个hi
    return 0;
}