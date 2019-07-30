#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    decltype(s.size()) count = 0;
    while (count <= s.size() - 1)
    {
        s[count] = 'X';
    }
    
    for (decltype(s.size()) i = 0; i <= s.size() - 1; i++)
    {
        s[i] = 'X';
    }
    cout << s << endl;
    return 0;
}