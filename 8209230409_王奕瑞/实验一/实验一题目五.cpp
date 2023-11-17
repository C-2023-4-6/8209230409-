#include <iostream>
#include <iomanip>

using namespace std;

int main_5() {
    double fahrenheit, celsius;
    cout << "输入华氏温度： ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "对应的摄氏温度为： "<< fixed << setprecision(2) << celsius << endl;
    return 0;
}
