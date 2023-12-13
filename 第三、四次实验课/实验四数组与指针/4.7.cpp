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

    cout << "请输入第一个字符串 (s1)：";
    cin.getline(s1, maxStringLength);

    cout << "请输入第二个字符串 (s2)：";
    cin.getline(s2, maxStringLength);

    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "s1是s2的子串，并且它从下标 " << index << " 开始匹配" << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}
