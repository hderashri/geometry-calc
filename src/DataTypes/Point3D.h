#ifndef POINT3D_H
#define POINT3D_H

#include "../Interfaces/IShape.h"

class Point3D : public IShape {
private:
    double x, y, z;

public:
    Point3D(double x = 0, double y = 0, double z = 0);
    void input() override;
    void print() const override;

    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif
