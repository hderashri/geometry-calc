#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const Point3D& point1, const Point3D& point2, const Point3D& point3)
    : p1(point1), p2(point2), p3(point3) {}

void Triangle::input() {
    std::cout << "Enter coordinates for Point 1:\n";
    p1.input();
    std::cout << "Enter coordinates for Point 2:\n";
    p2.input();
    std::cout << "Enter coordinates for Point 3:\n";
    p3.input();
}

void Triangle::print() const {
    std::cout << "Triangle Points: ";
    p1.print();
    std::cout << ", ";
    p2.print();
    std::cout << ", ";
    p3.print();
    std::cout << std::endl;
}

Point3D Triangle::getP1() const { return p1; }
Point3D Triangle::getP2() const { return p2; }
Point3D Triangle::getP3() const { return p3; }
