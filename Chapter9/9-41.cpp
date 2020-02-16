#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<char> cvec{'H', 'E', 'L', 'L', 'O'};
    string s(cvec.data(), cvec.size());
    cout<<s<<endl;

    return 0;
}

//编写程序，从一个 vector<char> 初始化一个 string.
//Sun,Feb16,2020