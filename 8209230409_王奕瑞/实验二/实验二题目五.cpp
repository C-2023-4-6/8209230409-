/*
5������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ��
�ո������ַ��������ַ��ĸ�����
��ʾ���Ӽ����϶���һ���ַ������� c��
�ж� c �����������ַ���������ѭ�������¸��ַ���
ֱ���س������ַ�'\n'Ϊֹ��
cin��scanf���������ܶ���ո��Լ���\n���ַ���
�������Ͻ�������������ַ��ķ�����
*/
#include <iostream>
#include <string>
using namespace std;

int main_5() {
    string input;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    // ��ȡһ������
    cout << "�������ı��� ";
    getline(cin, input);

    // �����ַ����е�ÿ���ַ�
    for (char c : input) {
        if (isalpha(c)) {
            // Ӣ����ĸ
            letters++;
        }
        else if (isspace(c)) {
            // �ո�
            spaces++;
        }
        else if (isdigit(c)) {
            // ����
            digits++;
        }
        else {
            // �����ַ�
            others++;
        }
    }

    // ������
    cout << "Letters: " << letters << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}
