#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s;
    vector<string> svec;

    while (getline(cin, s))
    {
        svec.push_back(s);
    }

    cout << "\n";

    for (auto &c : svec)
    {
        for (auto &d : c)
        {
            d = toupper(d);
        }
        cout << c << endl;
    }
    
    return 0;
}