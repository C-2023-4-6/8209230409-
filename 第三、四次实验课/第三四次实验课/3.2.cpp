/*
编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
bool is_prime(int num) ,如果num是素数函数返回true，否则返回false；
利用函数is_prime找出前200个素数，并按每行10个输出：
		2     3      5      7    11    13    17    19    23    29
*/

//分解题目：1、素数判断；2、十个一行输出

#include<iostream>;
#include<math.h>
using namespace std;

bool is_prime(int num);

int main32() {
	int num;
	cout << "please input a number:" << endl;
	cin >> num;
	cout << boolalpha;
	cout << "It is prime : " << is_prime(num) << endl;

	int count = 0;

	for (int i = 2; count < 200; i++) {
		if (is_prime(i)) {
			cout << i << " ";
			count++;
			if (count % 10 == 0) {
				cout << endl;
			}
		}
	}


	return 0;
}

bool is_prime(int num) {
	if (num <= 1) return false; 
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}








