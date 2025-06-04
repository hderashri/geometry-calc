#include "QuadrilateralContainmentCheck.h"
#include "../BaryCentriCoordinates/TriangleBaryCentricCoordinates.h"

bool QuadrilateralContainmentCheck::isInside() const {
    Point3D A = quad_.getP1();
    Point3D B = quad_.getP2();
    Point3D C = quad_.getP3();
    Point3D D = quad_.getP4();

    TriangleBaryCentricCoordinates tri1({A, B, C}, point_);
    TriangleBaryCentricCoordinates tri2({A, C, D}, point_);

    return tri1.barycentricCoordinates() || tri2.barycentricCoordinates();
}
