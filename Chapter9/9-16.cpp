#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool l_v_equal(vector<int> &ivec, list<int> &ilist)
{
    if (ivec.size() != ilist.size())
        return false;

    auto lb = ilist.cbegin();
    auto le = ilist.cend();

    auto vb = ivec.cbegin();
    auto ve = ivec.cend();

    while (lb != le)
    {
        if (*lb != *vb)
        {
            return false;
        }
        else
        {
            ++lb;
            ++vb;
        }
    }
    return true;
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7};
    list<int> ilist{1, 2, 3, 4, 5, 6, 7};
    list<int> ilist1{1, 2, 3, 4, 5};
    list<int> ilist2{1, 2, 3, 4, 5, 6, 8};
    list<int> ilist3{1, 2, 3, 4, 5, 7, 6};

    cout << l_v_equal(ivec, ilist) << endl;
    cout << l_v_equal(ivec, ilist1) << endl;
    cout << l_v_equal(ivec, ilist2) << endl;
    cout << l_v_equal(ivec, ilist3) << endl;
}

//重写上一题的程序，比较一个 list<int> 中的元素和一个 vector<int> 中的元素
//Wed,Feb12,2020