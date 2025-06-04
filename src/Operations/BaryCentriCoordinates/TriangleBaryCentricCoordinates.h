#ifndef TRIANGLEBARYCENTRICCOORDINATES_H
#define TRIANGLEBARYCENTRICCOORDINATES_H

#include "../../Interfaces/IOperation.h"
#include "../../Shapes/Triangle.h"
#include "../../DataTypes/Point3D.h"

class TriangleBaryCentricCoordinates : public IOperation {
private:
    Triangle triangle_;
    Point3D point_;

public:
    TriangleBaryCentricCoordinates(const Triangle& triangle, const Point3D& point)
        : triangle_(triangle), point_(point) {}

    bool barycentricCoordinates() const;
};

#endif
