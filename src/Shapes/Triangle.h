#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../Interfaces/IShape.h"
#include "../DataTypes/Point3D.h"

class Triangle : public IShape {
private:
    Point3D p1, p2, p3;

public:
    Triangle() = default;
    Triangle(const Point3D& point1, const Point3D& point2, const Point3D& point3);

    void input() override;
    void print() const override;

    Point3D getP1() const;
    Point3D getP2() const;
    Point3D getP3() const;
};

#endif
