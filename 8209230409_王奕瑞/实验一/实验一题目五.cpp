#include <iostream>
#include <iomanip>

using namespace std;

int main_5() {
    double fahrenheit, celsius;
    cout << "���뻪���¶ȣ� ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << "��Ӧ�������¶�Ϊ�� "<< fixed << setprecision(2) << celsius << endl;
    return 0;
}
