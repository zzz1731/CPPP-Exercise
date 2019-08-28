#include <string>

class Sales_data
{
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;

public:
    Sales_data(/* args */) = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);
    ~Sales_data();
};

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if (sellingprice != 0)
    {
        discount = saleprice / sellingprice;
    }
}

Sales_data::Sales_data(std::istream &is)
{
    is >> *this;
}

//在你的 Sales_data 类中添加构造函数，然后编写一段程序令其用到每个构造函数。
//Wed,Aug28,2019