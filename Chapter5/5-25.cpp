#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	int i, j;
	while (cin>>i>>j)
	{
		try 
		{
			if (j == 0)
				throw runtime_error("The divisor cannot be zero");
			cout << (i / j) << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "Try again?" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
			{
				break;
			}
		}
		
	}
	return 0;
}

//编写一段程序，从标准输入读取两个整数，输出第一个数除以第二个数的结果
//当第二个数是0是抛出异常，使用 try 语句捕获异常。
//catch 子句应为用户输出一条提示信息，询问其是否输入新数并重新执行 try 语句块的内容
//Thu,Aug8,2019