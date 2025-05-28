#ifndef CIRCLE_H
#define CIRCLE_H

#include "../Interfaces/IShape.h"
#include "../DataTypes/Point3D.h"

class Circle : public IShape {
private:
    Point3D center;

    double radius;

public:
    Circle() = default;
    Circle(const Point3D& center, const double& radius);

    void input() override;
    void print() const override;

    Point3D getCenter() const;
    double getRadius() const;
};

#endif 
