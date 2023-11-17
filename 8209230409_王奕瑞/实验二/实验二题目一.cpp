//1、输入一个字符，如果为小写，转换为大写输出，否则，输出其后继字符的ASCII码值。
#include<iostream>
#include<cctype>//调用islower()判断大小写
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
