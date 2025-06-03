#ifndef POINT3DDISTANCECALCULATOR_H
#define POINT3DDISTANCECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../DataTypes/Point3D.h"

class Point3DDistanceCalculator : public IOperation {
private:
    Point3D p1, p2;

public:
    void execute();
    double calculateDistance(const Point3D& a, const Point3D& b);
};

#endif
