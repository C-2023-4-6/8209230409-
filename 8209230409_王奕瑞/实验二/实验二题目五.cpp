/*
5、输入一行字符，分别统计出其中英文字母、
空格、数字字符和其它字符的个数。
提示：从键盘上读入一个字符给变量 c，
判断 c 是属于哪种字符并计数，循环读入下个字符，
直到回车换行字符'\n'为止。
cin，scanf（）都不能读入空格以及‘\n’字符，
查找资料解决输入这两个字符的方法。
*/
#include <iostream>
#include <string>
using namespace std;

int main_5() {
    string input;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    // 读取一行输入
    cout << "请输入文本： ";
    getline(cin, input);

    // 遍历字符串中的每个字符
    for (char c : input) {
        if (isalpha(c)) {
            // 英文字母
            letters++;
        }
        else if (isspace(c)) {
            // 空格
            spaces++;
        }
        else if (isdigit(c)) {
            // 数字
            digits++;
        }
        else {
            // 其他字符
            others++;
        }
    }

    // 输出结果
    cout << "Letters: " << letters << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Digits: " << digits << endl;
    cout << "Other characters: " << others << endl;

    return 0;
}
