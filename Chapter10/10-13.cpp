#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

inline void output_words(vector<string>::iterator beg, vector<string>::iterator end)
{
    while (beg != end)
    {
        cout << *beg << " ";
        ++beg;
    }

    cout << endl;
}

bool more_than_five(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    output_words(words.begin(), partition(words.begin(), words.end(), more_than_five));

    return 0;
}

//标准库定义了名为 partition 的算法，它接受一个谓词，对容器内容进行划分，使得谓词为 true 的值会排在容器的前半部分，而使谓词为 false 的值会排在后半部分。算法返回一个迭代器，指向最后一个使谓词为 true 的元素之后的位置。
//编写函数，接受一个 string ,返回一个 bool 值，指出 string 是否有5个或更多字符。
//使用此函数划分 words。打印出长度大于等于5的元素。
//Fri,Feb21,2020