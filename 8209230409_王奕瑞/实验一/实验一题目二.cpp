#include <iostream>
using namespace std;

int main_2() {
    const double PI = 3.14159265358979323846; // ����Բ���ʳ���PI
    double r, h, v;

    cout << "������Բ׶�׵İ뾶: ";
    cin >> r; // Բ׶�װ뾶

    cout << "������Բ׶�ĸ�: ";
    cin >> h; // Բ׶��

    v = (PI * r * r * h) / 3.0; // �������

    cout << "Բ׶�������: " << v << endl; 

    return 0;
}
