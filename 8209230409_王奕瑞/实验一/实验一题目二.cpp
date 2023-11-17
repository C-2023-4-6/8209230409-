#include <iostream>
using namespace std;

int main_2() {
    const double PI = 3.14159265358979323846; // 定义圆周率常量PI
    double r, h, v;

    cout << "请输入圆锥底的半径: ";
    cin >> r; // 圆锥底半径

    cout << "请输入圆锥的高: ";
    cin >> h; // 圆锥高

    v = (PI * r * r * h) / 3.0; // 计算体积

    cout << "圆锥的体积是: " << v << endl; 

    return 0;
}
