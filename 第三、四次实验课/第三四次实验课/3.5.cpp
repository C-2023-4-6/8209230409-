/*
���ӳ��ң�
���ӵ�һ��ժ�������ӣ���������һ�룬������񫣬�ֳ���һ����
�ڶ����ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ����
�Ժ�ÿ����ˣ�����10�죬����ֻʣ���һ�����ӣ�
�ʣ���һ����ӹ�ժ�������ӣ��õݹ�ʵ�֣���
*/


#include <iostream>
using namespace std;

// �ݹ麯������
int peaches(int day) {
    if (day == 10) {
        return 1; // �� 10 ��ʣ�µ�������
    }
    else {
        return (peaches(day + 1) + 1) * 2; // ����ǰһ���������
    }
}

int main() {
    // ���㲢�����һ���������
    cout << "��һ����ӹ�ժ�� " << peaches(1) << " �����ӡ�" << endl;
    return 0;
}

//��ʵ������˼·����ֱ��

/*
#include <iostream>
using namespace std;

int main() {
    int peaches = 1; 

    for (int day = 9; day >= 1; --day) {
        peaches = (peaches + 1) * 2; 
    }

    cout << "��һ����ӹ�ժ�� " << peaches << " �����ӡ�" << endl;
    return 0;
}
*/