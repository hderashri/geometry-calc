#ifndef SHAPESELECTOR_H
#define SHAPESELECTOR_H

#include <string>
#include <optional>

enum class ShapeType {
    Point3D,
    Triangle,
    Sphere,
    Quadrilateral,
    Pyramid,
    Invalid
};

class ShapeSelector {
public:
    static ShapeType selectShape(const std::string& input);

    static std::string toString(ShapeType shape);
};

#endif 
