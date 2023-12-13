/*
��д�������㣺����һ���������ж�һ�������Ƿ�Ϊ������ʹ�����º���ͷ��
bool is_prime(int num) ,���num��������������true�����򷵻�false��
���ú���is_prime�ҳ�ǰ200������������ÿ��10�������
		2     3      5      7    11    13    17    19    23    29
*/

//�ֽ���Ŀ��1�������жϣ�2��ʮ��һ�����

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








