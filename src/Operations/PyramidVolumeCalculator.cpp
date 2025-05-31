#include "PyramidVolumeCalculator.h"
#include "../Utils/IOHelper.h"
#include "../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

double PyramidVolumeCalculator::calculateVolume(const Pyramid& pyramid) {
    if (!pyramid.isValid()) {
        std::cerr << "Invalid quadrilateral. Ensure points are distinct and coplanar.\n";
        return 0;
    }

    auto p1 = pyramid.getP1();
    auto p2 = pyramid.getP2();
    auto p3 = pyramid.getP3();
    auto p4 = pyramid.getP4();

    // Compute volume using the scalar triple product
    Vector v1 = p2 - p1; // Edge from p1 to p2
    Vector v2 = p3 - p1; // Edge from p1 to p3
    Vector v3 = p4 - p1; // Edge from p1 to p4
    double volume = std::abs(v1.dot(v2.cross(v3))) / 6.0; // Volume of the pyramid
    return volume;
}


void PyramidVolumeCalculator::execute() {
    std::cout << "\n--- Pyramid Area Calculator ---\n";
    Pyramid pyramid;
    pyramid.input();

    auto volume = calculateVolume(pyramid);
    std::cout << "Volume of the pyramid is: " << volume << "\n";
}
