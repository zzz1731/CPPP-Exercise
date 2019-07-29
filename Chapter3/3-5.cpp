#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, sumstring;
    while (getline(cin, s))
    {
        sumstring += s;
    }

    while (getline(cin, s))
    {
        sumstring += s + " ";
    }
    cout << sumstring;
    return 0;
}