#include <string>
using std::string;

class Sales_data
{
private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;

public:
    Sales_data(/* args */);
    ~Sales_data();

    string isbn() const;

    Sales_data &combine(const Sales_data &rhs);
};

Sales_data::Sales_data(/* args */)
{
}

Sales_data::~Sales_data()
{
}

string Sales_data::isbn() const
{
    return bookNo;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
    if (sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }
    return *this;
}

//曾在2.6.2节的练习（第67页）编写了一个 Sales_data类，请向这个类添加 combine 和 isbn 成员。
// /Wed,Aug28,2019