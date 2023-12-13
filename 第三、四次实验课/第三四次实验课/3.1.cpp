/*
1、输入自然数m和n，
（1）求他们的最大公约数（或称最大公因数）。
 要求输入、输出在主函数中进行，求公约数由函数实现。
（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
*/
/*
思路：辗转相除法
*/
#include<iostream>
using namespace std;

void gcdcal(int a, int b,int &gcd);//greatest common divisor
void  lcmcal(int a, int b, int gcd, int& lcm);//least common multiple

int main31() {
	int m, n;
	cout << "please input two positive integers" << endl;
	cin >> m >> n;
	//input positive integer

	//calculate gcd
	int gcd;
	gcdcal(m, n, gcd);
	cout << "gcd is " << gcd << endl;

	//calculate lcm
	int lcm;
	lcmcal(m, n, gcd, lcm);
	cout << "lcm is " << lcm << endl;

	return 0;
}

void gcdcal(int a, int b, int &gcd) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
}

void lcmcal(int a, int b, int gcd, int& lcm) {
	lcm = (a / gcd) * b;
}





