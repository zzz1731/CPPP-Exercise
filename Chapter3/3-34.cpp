#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1 = arr;
    int *p2 = arr + 5;
    p1 += p2 - p1;
    return 0;
}

//p1 += p2 -p1的功能是什么？
//让p1指向p2的位置喽
//Wed,Jul31,2019