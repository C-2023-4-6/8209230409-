#include <iostream>
#include <string>
using namespace std;

// 分段函数，通过引用传递的flag标志来表示计算是否成功
double piecewiseFunction(double x, bool& flag) {
    flag = true; // 默认设置为true
    if (x > 0 && x < 1) {
        return 3 - 2 * x; // 第一个区间的函数
    }
    else if (x >= 1 && x < 5) {
        return 2 / (4 * x) + 1; // 第二个区间的函数
    }
    else if (x >= 5 && x <= 10) {
        return x * x; // 第三个区间的函数
    }
    else {
        flag = false; // x不在定义区间内，设置flag为false
        return 0; // 返回值在这里不重要，因为flag为false
    }
}

int main_2() {
    // 测试数据数组
    double testValues[] = { 0.2, 1, 5, 0 };
    // 遍历并计算每个测试数据的结果
    for (double x : testValues) {
        bool flag;
        double y = piecewiseFunction(x, flag);
        if (flag) {
            cout << "f(" << x << ") = " << y << endl;
        }
        else {
            cout << "f(" << x << ") = WRONG" << endl;
        }
    }
    return 0;
}

