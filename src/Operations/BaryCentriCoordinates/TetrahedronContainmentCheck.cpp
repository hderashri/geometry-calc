#include "TetrahedronContainmentCheck.h"
#include "../../Operations/VolumeAndAreaCalculators/TetrahedronVolumeCalculator.h"

bool TetrahedronContainmentCheck::isInside() const {
    Point3D A = tetrahedron_.getP1();
    Point3D B = tetrahedron_.getP2();
    Point3D C = tetrahedron_.getP3();
    Point3D D = tetrahedron_.getP4();
    Point3D P = point_;

    auto volume = [](const Point3D& a, const Point3D& b, const Point3D& c, const Point3D& d) {
        Vector ab(b.getX() - a.getX(), b.getY() - a.getY(), b.getZ() - a.getZ());
        Vector ac(c.getX() - a.getX(), c.getY() - a.getY(), c.getZ() - a.getZ());
        Vector ad(d.getX() - a.getX(), d.getY() - a.getY(), d.getZ() - a.getZ());
        return std::abs(ab.dot(ac.cross(ad))) / 6.0;
    };

    double V = volume(A, B, C, D);
    double v1 = volume(P, B, C, D);
    double v2 = volume(A, P, C, D);
    double v3 = volume(A, B, P, D);
    double v4 = volume(A, B, C, P);

    const double epsilon = 1e-6;
    return std::abs(V - (v1 + v2 + v3 + v4)) < epsilon;
}
