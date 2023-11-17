#include <iostream>
#include <limits>

using namespace std;

int main_4() {
    double num1, num2;
    char op;
    bool validInput = false;

    while (!validInput) {
        cout << "请输入表达式: ";
        cin >> num1 >> op >> num2;

        if (cin.fail()) {
            cin.clear(); // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
            cout << "输入无效，请确保您输入了两个数字和一个合法的运算符。\n";
            continue;
        }

        switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            validInput = true;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            validInput = true;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            validInput = true;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                validInput = true;
            }
            else {
                cout << "错误：除数不能为 0。\n";
            }
            break;
        case '%':
            // 需要将数字转换为整型来使用取模运算符
            if (num2 != 0) {
                cout << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " = " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
                validInput = true;
            }
            else {
                cout << "错误：除数不能为 0。\n";
            }
            break;
        default:
            cout << "无效的运算符。只允许使用 +, -, *, /, %。\n";
            break;
        }
    }

    return 0;
}
