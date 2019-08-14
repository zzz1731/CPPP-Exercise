#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string s = static_cast<string>(argv[1]) + static_cast<string>(argv[2]);
	cout << s << endl;
	return 0;
}

//编写一个 main 函数，令其接受两个实参。把实参的内容连接成一个 string 对象并输出出来。
//Wed, Aug14, 2019