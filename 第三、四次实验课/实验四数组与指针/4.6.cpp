#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    // ��ʼ�� counts ����
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // �����ַ�����ͳ����ĸ���ִ���
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]); // ת��ΪСд��ĸ��ͳһ����

        if (isalpha(ch)) {
            counts[ch - 'a']++;
        }
    }
}

int main46() {
    const int alphabetSize = 26;
    int counts[alphabetSize] = { 0 };
    char inputString[100];

    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    count(inputString, counts);

    // ��ʾ�������
    for (int i = 0; i < alphabetSize; i++) {
        if (counts[i] != 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}
