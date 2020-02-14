#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

void insert_string_to_forwardlist(forward_list<string> &sflist, const string &s1, const string &s2)
{
    auto prev = sflist.before_begin();
    auto curr = sflist.begin();
    while (curr != sflist.end())
    {
        if (*curr == s1)
        {
            sflist.insert_after(curr, s2);
            return;
        }
        prev=curr;
        ++curr;
        
    }

    sflist.insert_after(prev, s2);
    
}

int main()
{
    forward_list<string> sflist{"hello", "world", "and", "Happy", "this", "is", "from", "Fri,Feb14,2020"};
    

    insert_string_to_forwardlist(sflist, "Happy","Valentine's Day!");

    for(auto i:sflist)
    {
        cout<<i<<" ";
    }

    return 0;
}

//编写函数，接受一个 frward_list<string> 和两个 string 共三个参数。函数应在链表中查找第一个 string ,并将第二个 string 插入到紧接着第一个 string 之后的位置。若第一个 string 为在链表中，则将第二个 string 插入到链表末尾。
//Fri,Feb14,2020