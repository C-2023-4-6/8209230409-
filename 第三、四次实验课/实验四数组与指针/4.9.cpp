#include <iostream>
using namespace std;

// 函数：对数组由小到大排序
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换数组元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    cout << "请输入数组的大小: ";
    cin >> size;

    // 动态分配数组内存
    int* arr = new int[size];

    cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // 调用排序函数对数组进行排序
    bubbleSort(arr, size);

    // 使用指针方式输出数组元素
    cout << "排序后的数组元素: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // 释放动态分配的数组内存
    delete[] arr;

    return 0;
}
