#include <iostream>
#include <stdexcept>
using namespace std;

istream& f(istream& in)
{
	int v;

	while (in >> v, !in.eof())
	{
		if (in.bad())
			throw runtime_error("IO流错误");
		if (in.fail())
		{
			cerr << "数据错误" << endl;
			in.clear();
			in.ignore(100, '\n');
			continue;
		}
		cout<<endl;
		in.clear();
		return in;
	}
}

int main()
{
	cout << "请输入一些整数，按Ctrl + Z结束" << endl;
	f(cin);
	return 0;
}


//编写函数，接受一个 istream& 参数，返回值类型也是 istream&。此函数必须从给定流中读取数据，直至遇到文件结束标识时停止。它将读取的数据打印在标准输出上。
//完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态。

//Mon,Feb3,2020