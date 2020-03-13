#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

void remove_authors(multimap<string, string>& mulmap, const string& authors)
{
    while (mulmap.find(authors) != mulmap.end())
    {
        auto iter = mulmap.find(authors);
        mulmap.erase(iter);
    }
}

int main()
{
    multimap<string, string> books;
    books.insert({ "Faye", "浮躁" });
    books.insert({ "Faye", "末日" });
    books.insert({ "Faye", "堕落" });
    books.insert({ "Shakespeare", "As you like it" });
    books.insert({ "Shakespeare", "Twelfth Night： Or What You Will" });
    books.insert({ "Einstein", "Relativity" });
    for (auto book : books)
    {
        cout << book.first << " " << book.second<<endl;
    }
    cout << endl;
    remove_authors(books, "Faye");
    for (auto book : books)
    {
        cout << book.first << " " << book.second<<endl;
    }
    cout << endl;

    remove_authors(books, "wzx");
    remove_authors(books, "Shakespeare");
    for (auto book : books)
    {
        cout << book.first << " " << book.second << endl;
    }
    cout << endl;


    return 0;
}


//编写程序，定义一个作者及其作品的 multimap。使用 find 在 multimap 查找一个元素并用 erase 删除它。确保你的程序在元素不在 map 中时也能正常运行。
//Fri,Mar13,2020