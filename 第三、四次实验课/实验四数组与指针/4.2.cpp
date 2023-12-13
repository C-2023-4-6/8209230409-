#include <iostream>
using namespace std;

void bubbleSort(double list[], int listSize) {
    bool changed = true;

    do {
        changed = false;

        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;
            }
        }
    } while (changed);
}

int main42() {
    const int listSize = 10;
    double numbers[listSize];

    cout << "请输入10个双精度数字：" << endl;

    for (int i = 0; i < listSize; i++) {
        cin >> numbers[i];
    }

    bubbleSort(numbers, listSize);

    cout << "排列后的数字：" << endl;
    for (int i = 0; i < listSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
