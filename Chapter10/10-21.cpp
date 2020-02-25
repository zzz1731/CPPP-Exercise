#include <iostream>
#include <algorithm>

using namespace std;

void mutable_lambda()
{
    int i = 5;
    auto f = [i]() mutable -> bool {if(i>0){--i;return false;}else return true; };

    for (int j = 0; j < 6; ++j)
        cout << f() << "";

    cout << endl;
}

using namespace std;

int main()
{
    mutable_lambda();

    return 0;
}

//编写一个 lambda,捕获一个局部 int 变量，并递减变量值,直至它变为0。一旦变量变为0，再调用 lambda 应该不再递减变量。lambda 应该返回一个 bool 值，指出捕获的变量是否为0。
//Tue,Feb25,2020