#include "Vector.h"
#include <iostream>

Vector::Vector(double x_, double y_, double z_) : x(x_), y(y_), z(z_) {}

void Vector::input() {
    std::cout << "Enter coordinates (x y z): ";
    std::cin >> x >> y >> z;
}

void Vector::print() const {
    std::cout << "(" << x << "," << y << "," << z << ")";
}

double Vector::getX() const { return x; }
double Vector::getY() const { return y; }
double Vector::getZ() const { return z; }
