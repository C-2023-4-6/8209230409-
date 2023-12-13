#include <iostream>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    // 初始化 counts 数组
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // 遍历字符串并统计字母出现次数
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]); // 转换为小写字母以统一计数

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

    // 显示非零次数
    for (int i = 0; i < alphabetSize; i++) {
        if (counts[i] != 0) {
            char letter = 'a' + i;
            cout << letter << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}
