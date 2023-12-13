#include <iostream>
using namespace std;

int main43() {
    const int numLockers = 100;
    bool lockers[numLockers] = { false }; 

    for (int student = 1; student <= numLockers; student++) {
        for (int locker = student - 1; locker < numLockers; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }

    cout << "开着的柜子号码：" << endl;
    for (int locker = 0; locker < numLockers; locker++) {
        if (lockers[locker]) {
            cout << locker + 1 << " "; 
        }
    }
    cout << endl;

    return 0;
}

