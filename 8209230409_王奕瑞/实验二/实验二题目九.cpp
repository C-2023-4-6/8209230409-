#include <iostream>
using namespace std;

int main_9() {
    int totalApples = 0; // ��ƻ����
    int day = 0; // ����
    double pricePerApple = 0.8; // ÿ��ƻ���ļ۸�
    double totalCost = 0.0; // �ܻ���
    int applesToday = 2; // ���칺���ƻ����

    // �����ӽ����ƻ�����ᳬ��100��ʱ������ѭ��
    while ((totalApples + applesToday) <= 100) {
        totalApples += applesToday; // ������ƻ����
        totalCost += applesToday * pricePerApple; // �����ܻ���
        applesToday *= 2; // �������콫Ҫ�����ƻ����
        day++; // ��������
    }

    // ����ƽ������
    double averageCost = totalCost / day;

    cout << "ƽ��ÿ�컨��: " << averageCost << "Ԫ" << endl;

    return 0;
}
