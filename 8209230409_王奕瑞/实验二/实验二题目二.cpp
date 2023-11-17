#include <iostream>
#include <string>
using namespace std;

// �ֶκ�����ͨ�����ô��ݵ�flag��־����ʾ�����Ƿ�ɹ�
double piecewiseFunction(double x, bool& flag) {
    flag = true; // Ĭ������Ϊtrue
    if (x > 0 && x < 1) {
        return 3 - 2 * x; // ��һ������ĺ���
    }
    else if (x >= 1 && x < 5) {
        return 2 / (4 * x) + 1; // �ڶ�������ĺ���
    }
    else if (x >= 5 && x <= 10) {
        return x * x; // ����������ĺ���
    }
    else {
        flag = false; // x���ڶ��������ڣ�����flagΪfalse
        return 0; // ����ֵ�����ﲻ��Ҫ����ΪflagΪfalse
    }
}

int main_2() {
    // ������������
    double testValues[] = { 0.2, 1, 5, 0 };
    // ����������ÿ���������ݵĽ��
    for (double x : testValues) {
        bool flag;
        double y = piecewiseFunction(x, flag);
        if (flag) {
            cout << "f(" << x << ") = " << y << endl;
        }
        else {
            cout << "f(" << x << ") = WRONG" << endl;
        }
    }
    return 0;
}

