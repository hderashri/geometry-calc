#include <iostream>
#include "Utils/ShapeSelector.h"
#include "Operations/Point3DDistanceCalculator.h"
#include "Operations/TriangleAreaCalculator.h"
#include "Operations/SphereVolumeCalculator.h"
#include "Operations/QuadrilateralAreaCalculator.h"
#include "Operations/TetrahedronVolumeCalculator.h"

int main() {
    std::cout << "Select a shape (Point3D, Triangle, Quadrilateral, Sphere, Tetrahedron): ";
    std::string input;
    std::getline(std::cin, input);

    ShapeType shape = ShapeSelector::selectShape(input);

    switch (shape) {
        case ShapeType::Point3D: {
            Point3DDistanceCalculator distanceCalc;
            distanceCalc.execute();
            break;
        }
        case ShapeType::Triangle: {
            TriangleAreaCalculator areaCalc;
            areaCalc.execute();
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

    

    return 0;
}
