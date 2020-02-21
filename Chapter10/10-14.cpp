#include <iostream>

using namespace std;

int main()
{
    auto sum=[](const int &num1,const int &num2)->int{return num1+num2;};
    cout<<sum(17,25);
    return 0;
}

//编写一个 lambda,接受两个 int,返回它们的和。
//Fri,Feb21,2020