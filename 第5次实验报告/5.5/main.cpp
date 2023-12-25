#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // 构造函数，用于初始化x和y
    Point() : x(60), y(80) {}

    // 设置新坐标的函数
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    // 显示坐标的函数
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 创建Point对象
    Point p;

    // 显示初始坐标值
    cout << "初始坐标值：" << endl;
    p.display();

    // 修改坐标值
    p.setPoint(10, 20);

    // 显示修改后的坐标值
    cout << "修改后的坐标值：" << endl;
    p.display();

    return 0;
}
