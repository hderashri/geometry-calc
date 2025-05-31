#ifndef QUARDILATERALARECALCULATOR_H
#define QUARDILATERALARECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Quardilateral.h"
#include "../DataTypes/Vector.h"

class QuardilateralAreaCalculator : public IOperation {
public:
    void execute() override;
    Vector calculateArea(const Quardilateral& quardilateral);
};

#endif 
