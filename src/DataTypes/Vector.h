#ifndef VECTOR_H
#define VECTOR_H

#include "../Interfaces/IShape.h"
#include <cmath>
#include <stdexcept>

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

    double dot(const Vector& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    Vector cross(const Vector& v) const {
        return Vector(
            y * v.z - z * v.y,
            z * v.x - x * v.z,
            x * v.y - y * v.x
        );
    }

    Vector normalize() const {
        double mag = magnitude(*this);
        if (mag == 0) {
            throw std::invalid_argument("Cannot normalize a zero vector");
        }
        return Vector(x / mag, y / mag, z / mag);
    }

    bool operator==(const Vector& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    bool operator!=(const Vector& v) const {
        return !(*this == v);
    }

    Vector operator+(const Vector& v) const {
        return Vector(x + v.x, y + v.y, z + v.z);
    }

    Vector operator-(const Vector& v) const {
        return Vector(x - v.x, y - v.y, z - v.z);
    }

    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar, z * scalar);
    }

    Vector operator/(double scalar) const {
        if (scalar == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return Vector(x / scalar, y / scalar, z / scalar);
    }

    Vector& operator+=(const Vector& v) {
        x += v.x;
        y += v.y;
        z += v.z;
        return *this;
    }

    Vector& operator-=(const Vector& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return *this;
    }

    Vector& operator*=(double scalar) {
        x *= scalar;
        y *= scalar;
        z *= scalar;
        return *this;
    }

    Vector& operator/=(double scalar) {
        if (scalar == 0) {
            throw std::invalid_argument("Division by zero");
        }
        x /= scalar;
        y /= scalar;
        z /= scalar;
        return *this;
    }


};

#endif
