#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec1;                                                      //默认初始化，vector为空
    vector<int> ivec2(ivec1);                                               //初始化为ivec1的拷贝
    vector<int> ivec3{1, 2, 3, 4, 5, 6, 7, 8, 9};                           //初始化为列表元素的拷贝
    vector<int> ivec4(ivec3.begin() + 2, ivec3.end() - 1);                  //初始化为{3,4,5,6}
    vector<int> ivec5(7);                                                   //初始化为7个0
    vector<int> ivec6(3, 1);                                                //初始化3个1
    return 0;
}

//对6种创建和初始化 vector 对象的方法，每一种都给出一个实例，解释每个 vector 包含什么值。
//Tue,Feb11,2020