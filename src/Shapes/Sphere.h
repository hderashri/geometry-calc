#ifndef SPHERE_H
#define SPHERE_H

#include "../Interfaces/IShape.h"
#include "../DataTypes/Point3D.h"

class Sphere : public IShape {
private:
    Point3D center;

    double radius;

public:
    Sphere() = default;
    Sphere(const Point3D& center, const double& radius);

    void input() override;
    void print() const override;

    Point3D getCenter() const;
    double getRadius() const;
};

#endif 
