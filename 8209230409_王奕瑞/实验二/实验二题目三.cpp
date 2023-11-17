#include <iostream>
using namespace std;

int main_3() {
    double a, b, c;
    cout << "请输入三角形的三条边长: ";

    while (true) {
        // 从这里开始读取输入
        if (cin >> a >> b >> c) {
            // 检查输入的值是否为正数
            if (a > 0 && b > 0 && c > 0) {
                break; // 输入有效，退出循环
            }
            else {
                cout << "边长必须是正数，请重新输入: ";
            }
        }
        else {
            cin.clear(); // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // 忽略错误输入直到下一个换行符
            cout << "输入无效，请输入数字: ";
        }
    }

    // 判断是否能构成三角形
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "三角形的周长是: " << perimeter << endl;

        // 判断是否为等腰三角形
        if (a == b || a == c || b == c) {
            cout << "这是一个等腰三角形。" << endl;
        }
        else {
            cout << "这不是一个等腰三角形。" << endl;
        }
    }
    else {
        cout << "这三条边不能构成一个三角形。" << endl;
    }

    return 0;
}
