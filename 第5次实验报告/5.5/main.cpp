#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // ���캯�������ڳ�ʼ��x��y
    Point() : x(60), y(80) {}

    // ����������ĺ���
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // ��ʾ����ĺ���
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // ����Point����
    Point p;

    // ��ʾ��ʼ����ֵ
    cout << "��ʼ����ֵ��" << endl;
    p.display();

    // �޸�����ֵ
    p.setPoint(10, 20);

    // ��ʾ�޸ĺ������ֵ
    cout << "�޸ĺ������ֵ��" << endl;
    p.display();

    return 0;
}
