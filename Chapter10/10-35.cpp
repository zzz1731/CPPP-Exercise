#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::const_iterator beg = ivec.cbegin();
    vector<int>::const_iterator ed = ivec.cend();
    while (ed != beg)
        cout << *--ed << " ";

    return 0;
}

//使用普通迭代器逆序打印一个 vector.
//Sat,Feb29,2020