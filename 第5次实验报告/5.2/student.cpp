// student.cpp
#include <iostream>
#include <cstring>  // ���� strcpy
#include "student.h"  // ע��ʹ��˫����

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strcpy_s(name, nm);
    sex = s;
}

void Student::display() {
    using namespace std;
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sex << endl;
}
