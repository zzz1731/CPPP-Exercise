#include<iostream>
using namespace std;
int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    cout<<i<<" "<<ri<<endl;
    return 0;
}


//执行结果：输出10 10