#include "Circle.h"
#include <iostream>

Circle::Circle(const Point3D& Center, const double& Radius)
    : center(Center), radius(Radius) {}

void Circle::input() {
    std::cout << "Enter coordinates for Center:\n";
    center.input();
    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
}

void Circle::print() const {
    std::cout << "Circle center: ";
    center.print();
    std::cout << std::endl;
    std::cout << "Radius: " << radius << std::endl;
}

Point3D Circle::getCenter() const { return center; }
double Circle::getRadius() const { return radius; }
