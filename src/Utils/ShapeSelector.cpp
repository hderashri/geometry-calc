#include "ShapeSelector.h"
#include <algorithm>

ShapeType ShapeSelector::selectShape(const std::string& input) {
    std::string lowerInput = input;
    std::transform(lowerInput.begin(), lowerInput.end(), lowerInput.begin(), ::tolower);

    if (lowerInput == "point3d") return ShapeType::Point3D;
    if (lowerInput == "triangle") return ShapeType::Triangle;
    if (lowerInput == "quadrilateral") return ShapeType::Quadrilateral;
    if (lowerInput == "sphere") return ShapeType::Sphere;
    if (lowerInput == "tetrahedron") return ShapeType::Tetrahedron;

    return ShapeType::Invalid;
}

std::string ShapeSelector::toString(ShapeType shape) {
    switch (shape) {
        case ShapeType::Point3D: return "Point3D";
        case ShapeType::Triangle: return "Triangle";
        case ShapeType::Sphere: return "Sphere";
        case ShapeType::Quadrilateral: return "Quadrilateral";
        case ShapeType::Tetrahedron: return "Tetrahedron";
        default: return "Invalid";
    }
}
