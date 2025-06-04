#include "TriangleBaryCentricCoordinates.h"
#include <cmath>
#include <iostream>

bool TriangleBaryCentricCoordinates::barycentricCoordinates() const {
    Point3D A = triangle_.getP1();
    Point3D B = triangle_.getP2();
    Point3D C = triangle_.getP3();
    Point3D P = point_;

    Vector v0(B.getX() - A.getX(), B.getY() - A.getY(), B.getZ() - A.getZ());  // AB
    Vector v1(C.getX() - A.getX(), C.getY() - A.getY(), C.getZ() - A.getZ());  // AC
    Vector v2(P.getX() - A.getX(), P.getY() - A.getY(), P.getZ() - A.getZ());  // AP

    // ✅ Coplanarity Check using Plane Normal
    Vector normal = v0.cross(v1);           // Normal to triangle
    double dot = normal.dot(v2);            // Project AP onto normal

    if (std::abs(dot) > 1e-6) {
        std::cout << "Point is not coplanar.\n";
        return false;
    }

    // ✅ Barycentric Coordinate Computation
    double d00 = v0.dot(v0);
    double d01 = v0.dot(v1);
    double d11 = v1.dot(v1);
    double d20 = v2.dot(v0);
    double d21 = v2.dot(v1);

    double denom = d00 * d11 - d01 * d01;
    if (std::abs(denom) < 1e-8) return false;

    double v = (d11 * d20 - d01 * d21) / denom;
    double w = (d00 * d21 - d01 * d20) / denom;
    double u = 1.0 - v - w;

    const double epsilon = 1e-6;
    bool result = (u >= -epsilon && v >= -epsilon && w >= -epsilon &&
                   u <= 1 + epsilon && v <= 1 + epsilon && w <= 1 + epsilon);

    return result;
}
