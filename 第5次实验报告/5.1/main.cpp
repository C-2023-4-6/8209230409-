#include <iostream>
using namespace std;

class Time {
private: // 将数据成员设为私有
    int hour;
    int minute;
    int sec;

public:
    void setTime(int h, int m, int s) { // 设置时间的成员函数
        hour = h;
        minute = m;
        sec = s;
    }

    void showTime() const { // 显示时间的成员函数
        cout << hour << "：" << minute << "：" << sec << endl;
    }

    // 构造函数、析构函数等可以根据需要添加
};

int main() {
    Time t1; // 定义t1为Time类对象
    int hour, minute, sec;


    // 从用户输入时间
    cin >> hour >> minute >> sec;
    t1.setTime(hour, minute, sec); // 使用成员函数设置时间

    t1.showTime(); // 显示时间

    return 0;
}
