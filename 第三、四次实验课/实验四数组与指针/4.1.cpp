#include <iostream>
using namespace std;

int main41() {
    const int size = 10;
    int numbers[size];
    int uniqueNumbers[size];
    int count = 0;

    cout << "������10������" << endl;

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        bool isUnique = true;

        // �������������Ƿ��Ѿ�������uniqueNumbers������
        for (int j = 0; j < count; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                isUnique = false;
                break;
            }
        }

        // ������µ����������uniqueNumbers���飬�����Ӽ�����
        if (isUnique) {
            uniqueNumbers[count] = numbers[i];
            count++;
        }
    }

    cout << "��ͬ�����У�" << endl;
    for (int i = 0; i < count; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
