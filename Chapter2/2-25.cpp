#include<iostream>
using namespace std;
int main()
{
    int* ip, i, &r=i;     //ip是int类型的指针，i是int，r是int类型的引用
    int i, *ip=0;        //i是int,ip是空指针
    int* ip, ip2;        //ip是int类型的指针，ip2是int      
    return 0;  
}