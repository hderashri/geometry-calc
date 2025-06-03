#include "Tetrahedron.h"
#include <iostream>

Tetrahedron::Tetrahedron(const Point3D& point1, const Point3D& point2, const Point3D& point3, const Point3D& point4)
    : p1(point1), p2(point2), p3(point3), p4(point4) {}

void Tetrahedron::input() {
    std::cout << "Enter coordinates for Point 1:\n";
    p1.input();
    std::cout << "Enter coordinates for Point 2:\n";
    p2.input();
    std::cout << "Enter coordinates for Point 3:\n";
    p3.input();
    std::cout << "Enter coordinates for Point 4:\n";
    p4.input();
}

void Tetrahedron::print() const {
    std::cout << "Tetrahedron Points: ";
    p1.print();
    std::cout << ", ";
    p2.print();
    std::cout << ", ";
    p3.print();
    std::cout << ", ";
    p4.print();
    std::cout << std::endl;
}

Point3D Tetrahedron::getP1() const { return p1; }
Point3D Tetrahedron::getP2() const { return p2; }
Point3D Tetrahedron::getP3() const { return p3; }
Point3D Tetrahedron::getP4() const { return p4; }
