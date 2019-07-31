#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string text1, text2, text3;
    text1 = "this is a text";
    text3 = "hello";
    vector<string> svec;
    svec.push_back(text1);
    for (auto it = svec.begin(); it != svec.cend() && !it->empty(); ++it)
    {
        for (auto &c : *it)
        {
            c = toupper(c);
        }
        cout << *it;
    }
    return 0;
}

//Wed,Jul31,2019