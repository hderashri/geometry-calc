#include <iostream>
#include "Utils/ShapeSelector.h"
#include "Operations/VolumeAndAreaCalculators/Point3DDistanceCalculator.h"
#include "Operations/VolumeAndAreaCalculators/TriangleAreaCalculator.h"
#include "Operations/VolumeAndAreaCalculators/SphereVolumeCalculator.h"
#include "Operations/VolumeAndAreaCalculators/QuadrilateralAreaCalculator.h"
#include "Operations/VolumeAndAreaCalculators/TetrahedronVolumeCalculator.h"
#include "Operations/BaryCentriCoordinates/TriangleBaryCentricCoordinates.h"
#include <variant>

int main() {
    std::cout << "Select a shape (Point3D, Triangle, Quadrilateral, Sphere, Tetrahedron): ";
    std::string input;
    std::getline(std::cin, input);

    ShapeType shape = ShapeSelector::selectShape(input);

    std::variant<std::monostate, Triangle, Point3D, Sphere, Quadrilateral> selectedShape; 

    switch (shape) {
        case ShapeType::Point3D: {
            Point3DDistanceCalculator distanceCalc;
            distanceCalc.execute();
            break;
        }
        case ShapeType::Triangle: {
            TriangleAreaCalculator areaCalc;
            selectedShape = areaCalc.execute();
            break;
        }
        case ShapeType::Sphere: {
            SphereVolumeCalculator sphereVolumneCalc;
            sphereVolumneCalc.execute();
            break;
        }
        case ShapeType::Quadrilateral: {
            QuadrilateralAreaCalculator quadrilateralAreaCalc;
            quadrilateralAreaCalc.execute();
            break;
        }
        case ShapeType::Tetrahedron: {
            TetrahedronVolumeCalculator tetrahedronVolumeCalc;
            tetrahedronVolumeCalc.execute();
            break;
        }
        default:
            std::cout << "Invalid shape selected. Please try again.\n";
    }

    std::cout << "Enter the coordinate of a point (x y z): ";
    Point3D point;
    point.input();

    switch (shape) {
            case ShapeType::Triangle: {
            if (std::holds_alternative<Triangle>(selectedShape)) {
                Triangle triangle = std::get<Triangle>(selectedShape);
                TriangleBaryCentricCoordinates barycentricChecker(triangle, point);
                bool inside = barycentricChecker.barycentricCoordinates();

                if (inside) {
                    std::cout << "Point lies inside the triangle\n";
                } else {
                    std::cout << "Point lies outside the triangle\n";
                }
            }
            break;
        }
        case ShapeType::Sphere: {
           if (std::holds_alternative<Triangle>(selectedShape)) {
                Triangle triangle = std::get<Triangle>(selectedShape);
                TriangleBaryCentricCoordinates barycentricChecker(triangle, point);
                bool inside = barycentricChecker.barycentricCoordinates();

                if (inside) {
                    std::cout << "Point lies inside the triangle\n";
                } else {
                    std::cout << "Point lies outside the triangle\n";
                }
           }
            break;
        }
        case ShapeType::Quadrilateral: {
           if (std::holds_alternative<Triangle>(selectedShape)) {
                Triangle triangle = std::get<Triangle>(selectedShape);
                TriangleBaryCentricCoordinates barycentricChecker(triangle, point);
                bool inside = barycentricChecker.barycentricCoordinates();

                if (inside) {
                    std::cout << "Point lies inside the triangle\n";
                } else {
                    std::cout << "Point lies outside the triangle\n";
                }
           }
            break;
        }
        case ShapeType::Tetrahedron: {
            if (std::holds_alternative<Triangle>(selectedShape)) {
                Triangle triangle = std::get<Triangle>(selectedShape);
                TriangleBaryCentricCoordinates barycentricChecker(triangle, point);
                bool inside = barycentricChecker.barycentricCoordinates();

                if (inside) {
                    std::cout << "Point lies inside the triangle\n";
                } else {
                    std::cout << "Point lies outside the triangle\n";
                }
            }
            break;
        }
        default:
            std::cout << "Invalid shape selected. Please try again.\n";
    }    

    return 0;
}
