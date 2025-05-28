#ifndef VECTOR_H
#define VECTOR_H

#include "../Interfaces/IShape.h"
#include <cmath>

class Vector : public IShape {
private:
    double x, y, z;

public:
    Vector(double x = 0, double y = 0, double z = 0);
    void input() override;
    void print() const override;

    double getX() const;
    double getY() const;
    double getZ() const;

    double magnitude(Vector v) const {
        return std::sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
    }
};

#endif
