#ifndef TETRAHEDRONCONTAINMENTCHECK_H
#define TETRAHEDRONCONTAINMENTCHECK_H

#include "../../Interfaces/IOperation.h"
#include "../../Shapes/Tetrahedron.h"
#include "../../DataTypes/Point3D.h"

class TetrahedronContainmentCheck : public IOperation {
private:
    Tetrahedron tetrahedron_;
    Point3D point_;

public:
    TetrahedronContainmentCheck(const Tetrahedron& tetrahedron, const Point3D& point)
        : tetrahedron_(tetrahedron), point_(point) {}

    bool isInside() const;
};

#endif
