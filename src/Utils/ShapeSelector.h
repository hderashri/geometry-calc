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
    // Converts string input to ShapeType enum
    static ShapeType selectShape(const std::string& input);

    // Converts enum to string for display
    static std::string toString(ShapeType shape);
};

#endif // SHAPESELECTOR_H
