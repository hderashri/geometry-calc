#ifndef QUARDILATERAL_H
#define QUARDILATERAL_H

#include "../Interfaces/IShape.h"
#include "../DataTypes/Point3D.h"
#include "../DataTypes/Vector.h"

class Quardilateral : public IShape {
private:
    Point3D p1, p2, p3, p4;

public:
    Quardilateral() = default;
    Quardilateral(const Point3D& point1, const Point3D& point2, const Point3D& point3, const Point3D& point4);

    void input() override;
    void print() const override;

    bool isValid() const {
        // A quardilateral is valid if it has 4 distinct points and they are coplanar
        return isOnPlane({p1, p2, p3, p4}) && 
               (p1 != p2 && p1 != p3 && p1 != p4 && p2 != p3 && p2 != p4 && p3 != p4);  
    }

    Point3D getP1() const;
    Point3D getP2() const;
    Point3D getP3() const;
    Point3D getP4() const;
};


#endif
