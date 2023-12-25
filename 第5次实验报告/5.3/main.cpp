// main.cpp
#include <iostream>
#include "cuboid.h"

using namespace std;

int main() {
    Cuboid cuboids[3];

    double length, width, height;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter length, width, and height for cuboid " << (i + 1) << ": ";
        cin >> length >> width >> height;
        cuboids[i].setDimensions(length, width, height);
    }

    for (int i = 0; i < 3; ++i) {
        cout << "Cuboid " << (i + 1) << " ";
        cuboids[i].displayVolume();
    }

    return 0;
}
