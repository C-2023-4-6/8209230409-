/*
1��������Ȼ��m��n��
��1�������ǵ����Լ������������������
 Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
��2���ں����������Լ������С������������ʾ��ʹ�����ò�����
*/
/*
˼·��շת�����
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





