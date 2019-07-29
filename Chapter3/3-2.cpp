#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    
    while(getline(cin,s))       //按行读入
    {
        cout<<s<<endl;
    }

    while(cin>>s)               //按词读入
    {
        cout<<s<<endl;
    }
    return 0;
}