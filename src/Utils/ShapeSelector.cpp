#include "ShapeSelector.h"
#include <algorithm>

ShapeType ShapeSelector::selectShape(const std::string& input) {
    std::string lowerInput = input;
    std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    if (lowerInput == "point3d") return ShapeType::Point3D;
    if (lowerInput == "triangle") return ShapeType::Triangle;
    if (lowerInput == "circle") return ShapeType::Circle;

    return ShapeType::Invalid;
}

std::string ShapeSelector::toString(ShapeType shape) {
    switch (shape) {
        case ShapeType::Point3D: return "Point3D";
        case ShapeType::Triangle: return "Triangle";
        case ShapeType::Circle: return "Circle";
        default: return "Invalid";
    }
}
