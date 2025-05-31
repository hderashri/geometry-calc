#include "Pyramid.h"
#include <iostream>

Pyramid::Pyramid(const Point3D& point1, const Point3D& point2, const Point3D& point3, const Point3D& point4)
    : p1(point1), p2(point2), p3(point3), p4(point4) {}

void Pyramid::input() {
    std::cout << "Enter coordinates for Point 1:\n";
    p1.input();
    std::cout << "Enter coordinates for Point 2:\n";
    p2.input();
    std::cout << "Enter coordinates for Point 3:\n";
    p3.input();
    std::cout << "Enter coordinates for Point 4:\n";
    p4.input();
}

void Pyramid::print() const {
    std::cout << "Pyramid Points: ";
    p1.print();
    std::cout << ", ";
    p2.print();
    std::cout << ", ";
    p3.print();
    std::cout << ", ";
    p4.print();
    std::cout << std::endl;
}

Point3D Pyramid::getP1() const { return p1; }
Point3D Pyramid::getP2() const { return p2; }
Point3D Pyramid::getP3() const { return p3; }
Point3D Pyramid::getP4() const { return p4; }
