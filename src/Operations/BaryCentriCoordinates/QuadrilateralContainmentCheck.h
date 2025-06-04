#ifndef QUADRILATERALCONTAINMENTCHECK_H
#define QUADRILATERALCONTAINMENTCHECK_H

#include "../../Interfaces/IOperation.h"
#include "../../Shapes/Quadrilateral.h"
#include "../../DataTypes/Point3D.h"

class QuadrilateralContainmentCheck : public IOperation {
private:
    Quadrilateral quad_;
    Point3D point_;

public:
    QuadrilateralContainmentCheck(const Quadrilateral& quad, const Point3D& point)
        : quad_(quad), point_(point) {}

    bool isInside() const;
};

#endif
