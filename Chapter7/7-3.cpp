#include <iostream>
#include "7-2.hpp"
using namespace std;

int main()
{
    cout<<"请输入交易记录(Isbn、销售量、原价、实际售价):"<<endl;

    Sales_data total;

    if(cin>>total)
    {
        Sales_data trans;
        while (cin>>trans)
        {
            if(total.isbn()==trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout<<total<<endl;
                total=trans;
            }
            
        }
        cout<<total<<Endl;
        
    }
    else
    {
        cerr<<"No Data?"<<endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

//修改7.11节（第229页）的交易处理程序，令其使用7.2的这些成员。
//Wed,Aug28,2019