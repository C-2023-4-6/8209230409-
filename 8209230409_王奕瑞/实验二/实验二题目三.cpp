#include <iostream>
using namespace std;

int main_3() {
    double a, b, c;
    cout << "�����������ε������߳�: ";

    while (true) {
        // �����￪ʼ��ȡ����
        if (cin >> a >> b >> c) {
            // ��������ֵ�Ƿ�Ϊ����
            if (a > 0 && b > 0 && c > 0) {
                break; // ������Ч���˳�ѭ��
            }
            else {
                cout << "�߳�����������������������: ";
            }
        }
        else {
            cin.clear(); // �������״̬
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // ���Դ�������ֱ����һ�����з�
            cout << "������Ч������������: ";
        }
    }

    // �ж��Ƿ��ܹ���������
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "�����ε��ܳ���: " << perimeter << endl;

        // �ж��Ƿ�Ϊ����������
        if (a == b || a == c || b == c) {
            cout << "����һ�����������Ρ�" << endl;
        }
        else {
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
    }
    else {
        cout << "�������߲��ܹ���һ�������Ρ�" << endl;
    }

    return 0;
}
