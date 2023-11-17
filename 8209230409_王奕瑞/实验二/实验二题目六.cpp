#include <iostream>
using namespace std;

// ��������
int gcd(int a, int b); // �������Լ��
int lcm(int a, int b, int gcdValue); // ������С������

int main_6() {
    int a, b;
    bool validInput = false; // ��������Ƿ���Ч

    // ѭ��ֱ���õ���Ч������
    while (!validInput) {
        cout << "����������������: ";
        cin >> a >> b;

        // ��������Ƿ�Ϊ������
        if (cin.fail() || a <= 0 || b <= 0) {
            cout << "������Ч����������������" << endl;
            cin.clear(); // ����cin״̬
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���Դ�������
        }
        else {
            validInput = true; // ������Ч������ѭ��
        }
    }

    int gcdValue = gcd(a, b); // �������Լ��
    int lcmValue = lcm(a, b, gcdValue); // ������С������

    // ������
    cout << "���Լ��: " << gcdValue << endl;
    cout << "��С������: " << lcmValue << endl;

    return 0;
}

// ʹ��ŷ������㷨�������Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// �������Լ��������С������
int lcm(int a, int b, int gcdValue) {
    return (a / gcdValue) * b; // �ȳ���ˣ��������
}
