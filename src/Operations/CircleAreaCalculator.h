#ifndef CIRCLEAREACALCULATOR_H
#define CIRCLEAREACALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Circle.h"
#include "../DataTypes/Vector.h"

class CircleAreaCalculator : public IOperation {
public:
    void execute() override;
    double calculateArea(const Circle& Circle);
};

#endif 
