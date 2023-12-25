// main.cpp
#include <iostream>
#include "student.h"

int main() {
    Student stud;  // 定义对象
    stud.set_value(007, "tcg", 'm');  // 设置 stud 的数据成员
    stud.display();  // 显示 stud 的数据

    return 0;
}
