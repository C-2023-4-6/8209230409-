#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// ��������16�����ַ���ת��Ϊ10������
int parseHex(const char* const hexString) {
    int result = 0;
    int len = strlen(hexString);

    for (int i = len - 1; i >= 0; i--) {
        char c = hexString[i];
        int digit;

        if (c >= '0' && c <= '9') {
            digit = c - '0';
        }
        else if (c >= 'A' && c <= 'F') {
            digit = c - 'A' + 10;
        }
        else if (c >= 'a' && c <= 'f') {
            digit = c - 'a' + 10;
        }
        else {
            cerr << "����Ĳ�����Ч��16��������" << hexString << endl;
            return -1; // ���ش����־
        }

        result += digit * static_cast<int>(pow(16, len - i - 1));
    }

    return result;
}

int main48() {
    const int maxStringLength = 100;
    char hexString[maxStringLength];

    cout << "������һ��16�����ַ���: ";
    cin >> hexString;

    int decimalValue = parseHex(hexString);

    if (decimalValue != -1) {
        cout << "��Ӧ��10����ֵΪ: " << decimalValue << endl;
    }

    return 0;
}
