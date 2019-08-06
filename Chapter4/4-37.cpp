#include <iostream>
using namespace std;

int main()
{
	int i;
	double d;
	const string *ps;
	char *pc;
	void *pv;
	
	pv = (void*)ps;
	pv = const_cast<void*>(static_cast<const void*>(ps));

	i = int(*pc);
	i = static_cast<int>(*pc);

	pv = &d;

	pc = (char*)pv;
	pc = static_cast<char*>(pv);

	return 0;
    
}

//用命名的强制类型转换改写下列旧式的转换语句
//Tue,Aug6,2019