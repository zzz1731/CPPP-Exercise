//隐式内联，把 avg_price 函数的定义放在类的内部：
class Sales_data
{
public:
    double avg_price() const
    {
        if (units_sold)
            return revenue / units_sold;
        else
            return 0;
    }
};

//显示内联
class Sales_data
{
public:
    double avg_price() const;
};

inline double Sales_data::avg_price() const
{
    if (units_sold)
            return revenue / units_sold;
        else
            return 0;
}

//将 Sales_data::avg_price 定义成内联函数。
//Mon,Sep2,2019