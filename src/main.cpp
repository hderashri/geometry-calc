#include <iostream>
#include "Utils/ShapeSelector.h"
#include "Operations/Point3DDistanceCalculator.h"
#include "Operations/TriangleAreaCalculator.h"
#include "Operations/CircleAreaCalculator.h"

int main() {
    std::cout << "Select a shape (Point3D, Triangle, Circle): ";
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
        case ShapeType::Circle: {
            CircleAreaCalculator circleAreaCalc;
            circleAreaCalc.execute();
            break;
        }
        default:
            std::cout << "Invalid shape selected. Please try again.\n";
    }

    return 0;
}
