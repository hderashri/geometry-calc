#include "TetrahedronVolumeCalculator.h"
#include "../../Utils/IOHelper.h"
#include "../../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

double TetrahedronVolumeCalculator::calculateVolume(const Tetrahedron& tetrahedron) {
    if (!tetrahedron.isValid()) {
        std::cerr << ". Ensure points are distinct and coplanar.\n";
    }

    auto p1 = tetrahedron.getP1();
    auto p2 = tetrahedron.getP2();
    auto p3 = tetrahedron.getP3();
    auto p4 = tetrahedron.getP4();

    Vector v1 = p2 - p1;
    Vector v2 = p3 - p1;
    Vector v3 = p4 - p1;
    double volume = std::abs(v1.dot(v2.cross(v3))) / 6.0;
    return volume;
}


Tetrahedron TetrahedronVolumeCalculator::execute() {
    std::cout << "\n--- Tetrahedron Area Calculator ---\n";
    Tetrahedron tetrahedron;
    tetrahedron.input();

    auto volume = calculateVolume(tetrahedron);
    std::cout << "Volume of the tetrahedron is: " << volume << "\n";

    return tetrahedron;
}
