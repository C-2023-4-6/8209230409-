#include <iostream>
#include <cstring>
using namespace std;

int indexOf(const char* s1, const char* s2) {
    int len1 = strlen(s1); 
    int len2 = strlen(s2); 
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;

        for (int j = 0; j < len1; j++) {
            if (s1[j] != s2[i + j]) {
                match = false;
                break;
            }
        }

        if (match) {
            return i; 
        }
    }

    return -1; 
}

int main47() {
    const int maxStringLength = 100;
    char s1[maxStringLength];
    char s2[maxStringLength];

    cout << "�������һ���ַ��� (s1)��";
    cin.getline(s1, maxStringLength);

    cout << "������ڶ����ַ��� (s2)��";
    cin.getline(s2, maxStringLength);

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "s1��s2���Ӵ������������±� " << index << " ��ʼƥ��" << endl;
    }
    else {
        cout << "s1����s2���Ӵ�" << endl;
    }

    return 0;
}
