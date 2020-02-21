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

    auto wc = partition(words.begin(), words.end(), [sz](const string &a) -> bool { return a.size() >= sz; });

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

//重写 biggies,用 partition 代替 find_if
//Fri,Feb21,2020