#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

inline void output_words(vector<string> &words)
{
    for (auto word : words)
        cout << word << " ";

    cout << endl;
}

void elimDups(vector<string> &words)
{
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
    elimDups(words);

    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) -> bool { return a.size() < b.size(); });

    auto wc = find_if(words.begin(), words.end(), [sz](const string &a) -> bool { return a.size() >= sz; });

    auto count = words.end() - wc;

    cout << count << " words"
         << " of length" << sz << " or longer" << endl;

    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });

    cout << endl;
}

int main()
{
    vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    biggies(words, 4);

    return 0;
}

//使用 lambda 编写你自己版本的 biggies.
//Fri,Feb21,2020