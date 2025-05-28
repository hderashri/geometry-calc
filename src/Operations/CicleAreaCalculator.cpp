#include "CircleAreaCalculator.h"
#include "../Utils/IOHelper.h"
#include "../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

double CircleAreaCalculator::calculateArea(const Circle& Circle) {
    auto center = Circle.getCenter();
    auto radius = Circle.getRadius();

    // Vector AB = p2 - p1
    double c1 = center.getX();
    double c2 = center.getY();
    double c3 = center.getZ();


    // The area of the Circle is half the magnitude of the cross product

    return 3.14 * radius * radius;

}

void CircleAreaCalculator::execute() {
    std::cout << "\n--- Circle Area Calculator ---\n";
    Circle Circle;
    Circle.input();

    double area = calculateArea(Circle);
    std::cout << "Area magnitude of the Circle is: " << area << "\n";
}
