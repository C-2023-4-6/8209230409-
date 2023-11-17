#include <iostream>
#include <limits>

using namespace std;

int main_4() {
    double num1, num2;
    char op;
    bool validInput = false;

    while (!validInput) {
        cout << "��������ʽ: ";
        cin >> num1 >> op >> num2;

        if (cin.fail()) {
            cin.clear(); // �������״̬
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���Դ�������
            cout << "������Ч����ȷ�����������������ֺ�һ���Ϸ����������\n";
            continue;
        }

        switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            validInput = true;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            validInput = true;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            validInput = true;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                validInput = true;
            }
            else {
                cout << "���󣺳�������Ϊ 0��\n";
            }
            break;
        case '%':
            // ��Ҫ������ת��Ϊ������ʹ��ȡģ�����
            if (num2 != 0) {
                cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                validInput = true;
            }
            else {
                cout << "���󣺳�������Ϊ 0��\n";
            }
            break;
        default:
            cout << "��Ч���������ֻ����ʹ�� +, -, *, /, %��\n";
            break;
        }
    }

    return 0;
}
