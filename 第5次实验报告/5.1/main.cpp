#include <iostream>
using namespace std;

class Time {
private: // �����ݳ�Ա��Ϊ˽��
    int hour;
    int minute;
    int sec;

public:
    void setTime(int h, int m, int s) { // ����ʱ��ĳ�Ա����
        hour = h;
        minute = m;
        sec = s;
    }

    void showTime() const { // ��ʾʱ��ĳ�Ա����
        cout << hour << "��" << minute << "��" << sec << endl;
    }

    // ���캯�������������ȿ��Ը�����Ҫ���
};

int main() {
    Time t1; // ����t1ΪTime�����
    int hour, minute, sec;


    // ���û�����ʱ��
    cin >> hour >> minute >> sec;
    t1.setTime(hour, minute, sec); // ʹ�ó�Ա��������ʱ��

    t1.showTime(); // ��ʾʱ��

    return 0;
}
