#include <iostream>
#include "Sales_data.hpp"
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

int mian()
{
    cout << "请输入交易记录（ISBN、销售量、原价、实际售价）：" << endl;

    Sales_data total;

    if (cin >> total)
    {
        Sales_data trans;
        while (cin >> trans)
        {
            if (total.isbn() == total.isbn())
            {
                total += trans;
            }
            else
            {
                cout << total << Endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else
    {
        cerr << "No data?" << endl;
    }

    return 0;
}

//使用2.6.1节练习定义的 Sales_data 类为1.6节（第21页）的交易处理程序编写一个新版本。
//Wed,Aug21,2019


