// cuboid.cpp
#include <iostream>
#include "cuboid.h"

using namespace std;

void Cuboid::setDimensions(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
}

double Cuboid::volume() const {
    return length * width * height;
}

void Cuboid::displayVolume() const {
    cout << "Volume: " << volume() << endl;
}
