#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> ili;
    ostream_iterator<int> out(cout, " ");
    copy(ivec.cbegin(), ivec.cend(), out);
    cout << endl;

    vector<int>::reverse_iterator r_iter(ivec.begin() + 2);
    vector<int>::reverse_iterator r_beg(ivec.begin() + 7);
    list<int> il;
    copy(r_beg, r_iter, back_inserter(il));
    copy(il.begin(), il.end(), out);
    cout << endl;
    return 0;
}

//给定一个包含 10 个元素的 vector,将位置 3 到 7 之间的元素按逆序拷贝到一个 list 之中.
//Sat,Feb29,2020