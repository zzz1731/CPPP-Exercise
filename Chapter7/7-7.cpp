#include <iostream>
#include "7-2.hpp"
#include "7-6.hpp"
using namespace std;

int main()
{
    cout<<"请输入交易记录(Isbn、销售量、原价、实际售价):"<<endl;
    Sales_data total;

    if(read(cin,total))
    {
        Sales_data trans;

        while (read(cin,trans))
        {
            if(total.isbn()==trans.isbn())
            {
                total=add(total,trans);
            }
            else
            {
                print(cout,total);
                cout<<endl;
                total=trans;
            }
            
        }
        print(cout,total);
        cout<<endl;
        
    }
    else
    {
        cerr<<"No data?"<<endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
    
}

//使用这些函数重写 7.12 节（第233页）练习中的交易处理程序。
//Wed,Aug28,2019