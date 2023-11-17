#include <iostream>
#include <cmath>
#include <iomanip> // 用于setprecision
using namespace std;

double squareRoot(double a, double precision) {
    if (a == 0) return 0;
    double x_n = a;
    double x_n1;

    do {
        x_n1 = 0.5 * (x_n + a / x_n);
        if (abs(x_n1 - x_n) < precision) {
            break;
        }
        x_n = x_n1;
    } while (true);

    return x_n1;
}

int main_8() {
    double a, precision = 1e-5;
    bool validInput = false; // 标记输入是否有效

    // 循环直到得到有效的输入
    while (!validInput) {
        cout << "请输入一个非负数: ";
        cin >> a;

        // 检查输入是否为正整数
        if (cin.fail() || a < 0) {
            cout << "输入无效，请输入非负数。" << endl;
            cin.clear(); // 重置cin状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
        }
        else {
            validInput = true; // 输入有效，跳出循环
        }
    }


    if (a < 0) {
        cout << "不能计算负数的平方根。" << endl;
        return 1;
    }

    // 首次计算平方根
    double result = squareRoot(a, precision);
    cout << fixed << setprecision(5); // 设置输出精度为5位小数
    cout << "平方根: " << result << endl;

    // 尝试更高精度
    precision = 1e-10;
    result = squareRoot(a, precision);
    cout << fixed << setprecision(10); // 设置输出精度为10位小数
    cout << "更高精度的平方根: " << result << endl;

    return 0;
}
