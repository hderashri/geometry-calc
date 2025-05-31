#include <iostream>
#include "Utils/ShapeSelector.h"
#include "Operations/Point3DDistanceCalculator.h"
#include "Operations/TriangleAreaCalculator.h"
#include "Operations/SphereVolumeCalculator.h"
#include "Operations/QuadrilateralAreaCalculator.h"
#include "Operations/PyramidVolumeCalculator.h"

int main() {
    std::cout << "Select a shape (Point3D, Triangle, Quadrilateral, Sphere, Pyramid): ";
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
        case ShapeType::Pyramid: {
            PyramidVolumeCalculator pyramidVolumeCalc;
            pyramidVolumeCalc.execute();
            break;
        }
        default:
            std::cout << "Invalid shape selected. Please try again.\n";
    }

    return 0;
}
