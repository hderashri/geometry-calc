#include "TriangleAreaCalculator.h"
#include "../Utils/IOHelper.h"
#include "../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

Vector TriangleAreaCalculator::calculateArea(const Triangle& triangle) {
    auto p1 = triangle.getP1();
    auto p2 = triangle.getP2();
    auto p3 = triangle.getP3();

    // Vector AB = p2 - p1
    double a1 = p2.getX() - p1.getX();
    double a2 = p2.getY() - p1.getY();
    double a3 = p2.getZ() - p1.getZ();

    // Vector AC = p3 - p1
    double b1 = p3.getX() - p1.getX();
    double b2 = p3.getY() - p1.getY();
    double b3 = p3.getZ() - p1.getZ();

    // Cross product AB x AC
    double cx = a2 * b3 - a3 * b2;
    double cy = a3 * b1 - a1 * b3;
    double cz = a1 * b2 - a2 * b1;

    // The area of the triangle is half the magnitude of the cross product

    return {0.5 * cx, 0.5 * cy, 0.5 * cz};

}

void TriangleAreaCalculator::execute() {
    std::cout << "\n--- Triangle Area Calculator ---\n";
    Triangle triangle;
    triangle.input();

    Vector area = calculateArea(triangle);
    std::cout << "Directional area of the triangle is: " << "(" << area.getX() << ", " << area.getY() << ", " << area.getZ() << ")" "\n";
    std::cout << "Area magnitude of the triangle is: " << area.magnitude(area) << "\n";
}
