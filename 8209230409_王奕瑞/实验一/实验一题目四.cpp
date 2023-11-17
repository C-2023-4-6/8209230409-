#include <iostream>
#include <iomanip>
using namespace std;

int main_4() {
    unsigned int testUnint = 65534; // 0xfffe

    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl; // Ϊʲô���Ϊ-2?
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type with precision: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl; // 16�������

    system("pause");
    return 0;
}

int main_4_1() {
    unsigned int testUnint = 65534; // 0xfffe

    cout << "output in unsigned int type: " << testUnint << endl;


    cout << "output in Octal unsigned int type: " << oct << testUnint << endl; // 8�������

    cout << dec;//��֤ʮ�������

    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl;
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type with precision: " << setprecision(4) << static_cast<double>(testUnint) << endl;

    // Real number conversion to int
    double realNum = 123.456;
    cout << "Original real number: " << realNum << endl;
    cout << "Real number converted to int: " << static_cast<int>(realNum) << endl;

    system("pause");
    return 0;
}
