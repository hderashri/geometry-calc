#ifndef SPHERECONTAINMENTCHECK_H
#define SPHERECONTAINMENTCHECK_H

#include "../../Interfaces/IOperation.h"
#include "../../Shapes/Sphere.h"
#include "../../DataTypes/Point3D.h"

class SphereContainmentCheck : public IOperation {
private:
    Sphere sphere_;
    Point3D point_;

public:
    SphereContainmentCheck(const Sphere& sphere, const Point3D& point)
        : sphere_(sphere), point_(point) {}

    bool isInside() const;
};

#endif
