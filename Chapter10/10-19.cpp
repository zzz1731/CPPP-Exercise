#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    auto wc = stable_partition(words.begin(), words.end(), [sz](const string &a) -> bool { return a.size() >= sz; });

    auto count = wc - words.begin();

    cout << count << " words"
         << " of length " << sz << " or longer" << endl;

    for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
}

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    biggies(words, 4);

    return 0;
}

//用 stable_partition 重写前一题的程序，与 stable_sort 类似，在划分后的序列维持原有元素的顺序。
//Fri,Feb21,2020