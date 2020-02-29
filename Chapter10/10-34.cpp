#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (vector<int>::reverse_iterator r_it = ivec.rbegin(); r_it != ivec.rend(); ++r_it)
        cout << *r_it << " ";

    return 0;
}

//使用 reverse_iterator 逆序打印一个 vector
//Sat,Feb29,2020