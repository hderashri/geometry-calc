#include "SphereVolumeCalculator.h"
#include "../Utils/IOHelper.h"
#include "../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

double SphereVolumeCalculator::calculateVolume(const Sphere& Sphere) {
    auto center = Sphere.getCenter();
    auto radius = Sphere.getRadius();

    double c1 = center.getX();
    double c2 = center.getY();
    double c3 = center.getZ();


    return 4 / 3 * 3.14 * radius * radius * radius;

}

void SphereVolumeCalculator::execute() {
    std::cout << "\n--- Circle Area Calculator ---\n";
    Sphere sphere;
    sphere.input();

    double volume = calculateVolume(sphere);
    double area = volume * 4 / 3 * 3.14;
    std::cout << "Volume of the circle is: " << volume << "\n";
    std::cout << "Area of the projected circle is: " << area << "\n";
}
