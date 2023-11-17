#include <iostream>
using namespace std;

// 函数声明
int gcd(int a, int b); // 计算最大公约数
int lcm(int a, int b, int gcdValue); // 计算最小公倍数

int main_6() {
    int a, b;
    bool validInput = false; // 标记输入是否有效

    // 循环直到得到有效的输入
    while (!validInput) {
        cout << "请输入两个正整数: ";
        cin >> a >> b;

        // 检查输入是否为正整数
        if (cin.fail() || a <= 0 || b <= 0) {
            cout << "输入无效，请输入正整数。" << endl;
            cin.clear(); // 重置cin状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入
        }
        else {
            validInput = true; // 输入有效，跳出循环
        }
    }

    int gcdValue = gcd(a, b); // 计算最大公约数
    int lcmValue = lcm(a, b, gcdValue); // 计算最小公倍数

    // 输出结果
    cout << "最大公约数: " << gcdValue << endl;
    cout << "最小公倍数: " << lcmValue << endl;

    return 0;
}

// 使用欧几里得算法计算最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// 利用最大公约数计算最小公倍数
int lcm(int a, int b, int gcdValue) {
    return (a / gcdValue) * b; // 先除后乘，避免溢出
}
