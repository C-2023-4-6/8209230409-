#include <iostream>
using namespace std;

int main41() {
    const int size = 10;
    int numbers[size];
    int uniqueNumbers[size];
    int count = 0;

    cout << "请输入10个数：" << endl;

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
        bool isUnique = true;

        // 检查新输入的数是否已经存在于uniqueNumbers数组中
        for (int j = 0; j < count; j++) {
            if (numbers[i] == uniqueNumbers[j]) {
                isUnique = false;
                break;
            }
        }

        // 如果是新的数，则存入uniqueNumbers数组，并增加计数器
        if (isUnique) {
            uniqueNumbers[count] = numbers[i];
            count++;
        }
    }

    cout << "不同的数有：" << endl;
    for (int i = 0; i < count; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
