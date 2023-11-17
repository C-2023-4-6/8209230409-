#include <iostream>
#include <cmath>
#include <iomanip> // ����setprecision
using namespace std;

double squareRoot(double a, double precision) {
    if (a == 0) return 0;
    double x_n = a;
    double x_n1;

    do {
        x_n1 = 0.5 * (x_n + a / x_n);
        if (abs(x_n1 - x_n) < precision) {
            break;
        }
        x_n = x_n1;
    } while (true);

    return x_n1;
}

int main_8() {
    double a, precision = 1e-5;
    bool validInput = false; // ��������Ƿ���Ч

    // ѭ��ֱ���õ���Ч������
    while (!validInput) {
        cout << "������һ���Ǹ���: ";
        cin >> a;

        // ��������Ƿ�Ϊ������
        if (cin.fail() || a < 0) {
            cout << "������Ч��������Ǹ�����" << endl;
            cin.clear(); // ����cin״̬
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���Դ�������
        }
        else {
            validInput = true; // ������Ч������ѭ��
        }
    }


    if (a < 0) {
        cout << "���ܼ��㸺����ƽ������" << endl;
        return 1;
    }

    // �״μ���ƽ����
    double result = squareRoot(a, precision);
    cout << fixed << setprecision(5); // �����������Ϊ5λС��
    cout << "ƽ����: " << result << endl;

    // ���Ը��߾���
    precision = 1e-10;
    result = squareRoot(a, precision);
    cout << fixed << setprecision(10); // �����������Ϊ10λС��
    cout << "���߾��ȵ�ƽ����: " << result << endl;

    return 0;
}
