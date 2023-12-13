#include <iostream>
using namespace std;

// ��������������С��������
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // ��������Ԫ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    cout << "����������Ĵ�С: ";
    cin >> size;

    // ��̬���������ڴ�
    int* arr = new int[size];

    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // �����������������������
    bubbleSort(arr, size);

    // ʹ��ָ�뷽ʽ�������Ԫ��
    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    // �ͷŶ�̬����������ڴ�
    delete[] arr;

    return 0;
}
