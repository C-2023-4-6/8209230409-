//1������һ���ַ������ΪСд��ת��Ϊ��д�����������������ַ���ASCII��ֵ��
#include<iostream>
#include<cctype>//����islower()�жϴ�Сд
using namespace std;
int main_1() {
	char input_char;
	cout << "Enter a character:";
	cin >> input_char;

	if (islower(input_char)) {
		cout << "Uppercase:" << static_cast<char>(toupper(input_char)) << endl;
	}
	else {
		cout << "ASCII value:" << static_cast<int>(input_char + 1) << endl;
	}
	return 0;
}
