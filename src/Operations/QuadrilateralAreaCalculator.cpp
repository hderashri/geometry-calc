#include "QuadrilateralAreaCalculator.h"
#include "../Utils/IOHelper.h"
#include "../DataTypes/Vector.h"
#include <iostream>
#include <cmath>

Vector QuadrilateralAreaCalculator::calculateArea(const Quadrilateral& quadrilateral) {
    if (!quadrilateral.isValid()) {
        std::cerr << "Invalid quadrilateral. Ensure points are distinct and coplanar.\n";
        return Vector(0, 0, 0);
    }

    auto p1 = quadrilateral.getP1();
    auto p2 = quadrilateral.getP2();
    auto p3 = quadrilateral.getP3();
    auto p4 = quadrilateral.getP4();

    auto cx = (p1.getX() + p2.getX() + p3.getX() + p4.getX()) / 4;
    auto cy = (p1.getY() + p2.getY() + p3.getY() + p4.getY()) / 4;
    auto cz = (p1.getZ() + p2.getZ() + p3.getZ() + p4.getZ()) / 4;

    Vector normal = (p2 - p1).cross(p3 - p1).normalize();
    if (normal.magnitude(normal) == 0) {
        std::cerr << "Invalid quadrilateral. Points are collinear.\n";
        return Vector(0, 0, 0);
    }

    Vector axisX = (p2 - p1).normalize();
    Vector axisY = normal.cross(axisX).normalize();

    std::vector<Point3D> projected;
    for (const auto& p : {p1, p2, p3, p4}) {
        Vector rel = p - Point3D(cx, cy, cz);
        double x = rel.dot(axisX);
        double y = rel.dot(axisY);
        projected.emplace_back(x, y, 0);
    }

    std::sort(projected.begin(), projected.end(), [](const Point3D& a, const Point3D& b) {
        return std::atan2(a.getY(), a.getX()) < std::atan2(b.getY(), b.getX());
    });

    // Compute vector area from two triangles: (0,1,2) and (0,2,3)
    Vector A1 = (projected[1] - projected[0]).cross(projected[2] - projected[0]);
    Vector A2 = (projected[2] - projected[0]).cross(projected[3] - projected[0]);

    // Total vector area is half of each triangle's cross product sum
    return (A1 + A2) * 0.5;
}


void QuadrilateralAreaCalculator::execute() {
    std::cout << "\n--- Quadrilateral Area Calculator ---\n";
    Quadrilateral quadrilateral;
    quadrilateral.input();

    auto area = calculateArea(quadrilateral);
    std::cout << "Directional area of the quadrilateral is: " << "(" << area.getX() << ", " << area.getY() << ", " << area.getZ() << ")" "\n";
    std::cout << "Area magnitude of the quadrilateral is: " << area.magnitude(area) << "\n";
}
