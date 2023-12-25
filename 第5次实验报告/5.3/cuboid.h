// cuboid.h
#ifndef CUBOID_H
#define CUBOID_H

class Cuboid {
public:
    void setDimensions(double l, double w, double h);
    double volume() const;
    void displayVolume() const;

private:
    double length, width, height;
};

#endif
