#include "Sphere.h"
#include <iostream>

Sphere::Sphere(const Point3D& Center, const double& Radius)
    : center(Center), radius(Radius) {}

void Sphere::input() {
    std::cout << "Enter coordinates for Center:\n";
    center.input();
    std::cout << "Enter radius of the sphere: ";
    std::cin >> radius;
}

void Sphere::print() const {
    std::cout << "Sphere center: ";
    center.print();
    std::cout << std::endl;
    std::cout << "Radius: " << radius << std::endl;
}

Point3D Sphere::getCenter() const { return center; }
double Sphere::getRadius() const { return radius; }
