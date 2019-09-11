#include <iostream>
#include <string>
using namespace std;

class Sales_data
{
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
    Sales_data(const string &book, unsigned num, double sellp, double salep) : bookNo(book), units_sold(num), sellingprice(sellp), saleprice(salep)
    {
        if (sellingprice)
        {
            discount = saleprice / sellingprice;
        }
        cout << "该构造函数接受书号、销售量、原价、实际售价四个信息" << endl;
    }

    Sales_data() : Sales_data("", 0, 0, 0)
    {

        cout << "该构造函数无须接受任何信息" << endl;
    }

    Sales_data(const string &book) : Sales_data(book, 0, 0, 0)
    {
        cout << "该函数接受书号信息" << endl;
    }

    Sales_data(std::istream &is) : Sales_data()
    {
        read(is, *this);
        cout << "该构造函数接受用户输入的信息" << endl;
    }

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

//使用委托构造函数重新编写你的 Sales_data 类，给每个构造函数体添加一条语句，令其一旦执行就打印一条信息。用各种可能的方式分别创建 Sales_data 对象，认真研究
//每次输出的信息直到你确实理解了委托构造函数的执行顺序位置

//Wed,Sep11,2019