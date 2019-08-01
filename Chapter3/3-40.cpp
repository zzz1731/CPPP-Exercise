#include<iostream>
#include<string>
using namespace std;

int main()
{
    char s1[] = "A String Example";
    char s2[] = "Another String";
    char s3[32];
    strcpy_s(s3, s1);
    strcat_s(s3, " ");
    strcat_s(s3, s2);
    for (auto c : s3)
    {
        cout << c;
    }
    return 0;
}

//Thu,Aug1,2019
