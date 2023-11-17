/*
1.编辑输入下列程序，找出下面代码的错误并改正：
#include<iostream>
using namespace std;
int main()
{
	Int i = k + 1;
	cout << i++ << endl;
	int i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++"<<endl;
	return 0;
}

*/

#include<iostream>
using namespace std;
int main_1()
{
	int k = 0;
	int i = k + 1;//int 是小写；需要先定义k
	cout << i++ << endl;
	i = 1;//多次初始化
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}