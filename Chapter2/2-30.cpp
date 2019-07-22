#include <iostream>
using namespace std;
int main()
{
    const int v2 = 0;           //顶层const
    int v1 = v2;                
    int *p1 = &v1, &r1 = v1;    //
    const int *p2 = &v2, *conat p3 = &i, &r2 = v2;      //p2底层const p3既是顶层const也是底层const r2底层const
    return 0;
}