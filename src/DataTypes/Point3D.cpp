#include "Point3D.h"
#include <iostream>

Point3D::Point3D(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

void Point3D::input() {
    std::cout << "Enter coordinates (x y z): ";
    std::cin >> x >> y >> z;
}

void Point3D::print() const {
    std::cout << "(" << x << "," << y << "," << z << ")";
}

double Point3D::getX() const { return x; }
double Point3D::getY() const { return y; }
double Point3D::getZ() const { return z; }
