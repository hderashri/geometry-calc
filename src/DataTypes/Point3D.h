#ifndef POINT3D_H
#define POINT3D_H

#include "../Interfaces/IShape.h"
#include "Vector.h"
#include <vector>


inline bool isOnPlane(const std::vector<Point3D>& points) {
        if (points.size() < 3) {
            return true;
        }

        Vector normal;

        for(int i = 0; i < points.size() - 2; i++) {      
                Vector v1 = points[i+1] - points[i];
                Vector v2 = points[i+2] - points[i];
                normal = v1.cross(v2);
                if (normal.magnitude(normal) > 1e-6) {
                    break;
                }
        }
        
       for(int i = 3; i < points.size(); i++) {         
            if (std::abs((points[i] - points[0]).dot(normal)) > 1e-6) {
                return false;
            }
        }
        return true;
    }

    
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

    bool operator==(const Point3D& other) const {
        return (x == other.x && y == other.y && z == other.z);
    }
    bool operator!=(const Point3D& other) const {
        return !(*this == other);
    }
    Point3D operator+(const Vector& v) const {
        return Point3D(x + v.getX(), y + v.getY(), z + v.getZ());
    }
    Point3D operator-(const Vector& v) const {
        return Point3D(x - v.getX(), y - v.getY(), z - v.getZ());
    }
    Vector operator-(const Point3D& other) const {
        return Vector(x - other.x, y - other.y, z - other.z);
    }
    Point3D operator*(double scalar) const {
        return Point3D(x * scalar, y * scalar, z * scalar);
    }
    Point3D operator/(double scalar) const {
        if (scalar == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return Point3D(x / scalar, y / scalar, z / scalar);
    }

    bool isOnLine(const Point3D& p1, const Point3D& p2) const {
        Vector v1 = *this - p1;
        Vector v2 = p2 - p1;
        return v1.cross(v2).magnitude(v1.cross(v2)) == 0 && 
               (v1.dot(v2) >= 0 && v1.magnitude(v1) <= v2.magnitude(v2));
    }

    
};

#endif
