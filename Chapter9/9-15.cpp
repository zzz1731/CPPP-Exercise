#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1{1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec2{1, 2, 3, 4, 5, 6, 7};
    vector<int> ivec3{1, 2, 3, 4, 5};
    vector<int> ivec4{1, 2, 3, 4, 7};
    vector<int> ivec5{1, 2, 3, 4, 5, 6, 7, 8};

    cout << (ivec1 == ivec2) << endl;
    cout << (ivec1 == ivec3) << endl;
    cout << (ivec1 == ivec4) << endl;
    cout << (ivec1 == ivec5) << endl;

    return 0;
}

//编写程序，判定两个 vector<int> 是否相等
//Wed,Feb12,2020