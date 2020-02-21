#include <iostream>

using namespace std;

void add(const int &num1)
{
    auto sum = [num1](const int &num2) -> int { return num1 + num2; };

    cout << sum(17) << endl;
}

int main()
{
    add(25);

    return 0;
}

//编写一个 lambda,捕获它所在函数的 int,并接受一个 int 参数。lambda 应返回捕获的 int 和 int 参数的和。