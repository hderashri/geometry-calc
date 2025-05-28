#include "Point3DDistanceCalculator.h"
#include "../Utils/IOHelper.h"
#include <iostream>
#include <cmath>

double Point3DDistanceCalculator::calculateDistance(const Point3D& a, const Point3D& b) {
    double dx = b.getX() - a.getX();
    double dy = b.getY() - a.getY();
    double dz = b.getZ() - a.getZ();
    return std::sqrt(dx * dx + dy * dy + dz * dz);
}

void Point3DDistanceCalculator::execute() {
    std::cout << "\n--- Distance Calculator ---\n";
    std::cout << "Enter coordinates for Point 1:\n";
    p1.input();
    std::cout << "Enter coordinates for Point 2:\n";
    p2.input();

    double distance = calculateDistance(p1, p2);

    std::cout << "Distance between ";
    p1.print();
    std::cout << " and ";
    p2.print();
    std::cout << " is: " << distance << "\n";
}
