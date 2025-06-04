#ifndef TRIANGLEARECALCULATOR_H
#define TRIANGLEARECALCULATOR_H

#include "../../Interfaces/IOperation.h"
#include "../../Shapes/Triangle.h"
#include "../../DataTypes/Vector.h"

class TriangleAreaCalculator : public IOperation {
public:
    Triangle execute();
    Vector calculateArea(const Triangle& triangle);
};

#endif 
