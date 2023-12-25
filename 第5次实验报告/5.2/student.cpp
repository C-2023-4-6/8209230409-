// student.cpp
#include <iostream>
#include <cstring>  // 用于 strcpy
#include "student.h"  // 注意使用双引号

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strcpy_s(name, nm);
    sex = s;
}

void Student::display() {
    using namespace std;
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
