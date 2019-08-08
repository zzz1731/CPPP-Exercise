#include <iostream>
using namespace std;

int main()
{
	int sz;
	do
	{
		cin >> sz;
		
	} while (sz <= 0);

	return 0;
}

/*

begin:
	int sz;
	cin >> sz;
	if (sz <= 0)
		goto begin;

*/

//使用循环重写这段代码，注意不要再使用 goto 语句
//Thu,Aug8,2019
