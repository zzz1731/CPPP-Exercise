#include "7-2.hpp"

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << "" << item.units_sold << "" << item.sellingprice << "" << item.saleprice << " " << item.discount;
    return os;
}

//对于函数 add、read 和 print，定义你自己的版本。
//Wed,Aug28,2019
