#include <iostream>
#include "Utils/ShapeSelector.h"
#include "Operations/VolumeAndAreaCalculators/Point3DDistanceCalculator.h"
#include "Operations/VolumeAndAreaCalculators/TriangleAreaCalculator.h"
#include "Operations/VolumeAndAreaCalculators/SphereVolumeCalculator.h"
#include "Operations/VolumeAndAreaCalculators/QuadrilateralAreaCalculator.h"
#include "Operations/VolumeAndAreaCalculators/TetrahedronVolumeCalculator.h"
#include "Operations/BaryCentriCoordinates/TriangleBaryCentricCoordinates.h"
#include "Operations/BaryCentriCoordinates/SphereContainmentCheck.h"
#include "Operations/BaryCentriCoordinates/TetrahedronContainmentCheck.h"
#include "Operations/BaryCentriCoordinates/QuadrilateralContainmentCheck.h"
#include <variant>

int main() {
    std::cout << "Select a shape (Point3D, Triangle, Quadrilateral, Sphere, Tetrahedron): ";
    std::string input;
    std::getline(std::cin, input);

    ShapeType shape = ShapeSelector::selectShape(input);

    std::variant<std::monostate, Triangle, Tetrahedron, Sphere, Quadrilateral> selectedShape; 

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
            selectedShape = sphereVolumneCalc.execute();
            break;
        }
        case ShapeType::Quadrilateral: {
            QuadrilateralAreaCalculator quadrilateralAreaCalc;
            selectedShape = quadrilateralAreaCalc.execute();
            break;
        }
        case ShapeType::Tetrahedron: {
            TetrahedronVolumeCalculator tetrahedronVolumeCalc;
            selectedShape = tetrahedronVolumeCalc.execute();
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
                TriangleBaryCentricCoordinates checker(triangle, point);
                bool inside = checker.barycentricCoordinates();

                std::cout << (inside ? "Point lies inside the triangle\n" : "Point lies outside the triangle\n");
            }
            break;
        }

        case ShapeType::Quadrilateral: {
            if (std::holds_alternative<Quadrilateral>(selectedShape)) {
                Quadrilateral quad = std::get<Quadrilateral>(selectedShape);
                QuadrilateralContainmentCheck checker(quad, point);
                bool inside = checker.isInside();

                std::cout << (inside ? "Point lies inside the quadrilateral\n" : "Point lies outside the quadrilateral\n");
            }
            break;
        }

        case ShapeType::Tetrahedron: {
            if (std::holds_alternative<Tetrahedron>(selectedShape)) {
                Tetrahedron tetra = std::get<Tetrahedron>(selectedShape);
                TetrahedronContainmentCheck checker(tetra, point);
                bool inside = checker.isInside();

                std::cout << (inside ? "Point lies inside the tetrahedron\n" : "Point lies outside the tetrahedron\n");
            }
            break;
        }

        case ShapeType::Sphere: {
            if (std::holds_alternative<Sphere>(selectedShape)) {
                Sphere sphere = std::get<Sphere>(selectedShape);
                SphereContainmentCheck checker(sphere, point);
                bool inside = checker.isInside();

                std::cout << (inside ? "Point lies inside the sphere\n" : "Point lies outside the sphere\n");
            }
            break;
        }

        default:
            std::cout << "Unsupported shape type for point containment check.\n";
            break;
    }

    return 0;
}
