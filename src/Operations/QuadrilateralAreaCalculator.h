#ifndef QUADRILATERALARECALCULATOR_H
#define QUADRILATERALARECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Quadrilateral.h"
#include "../DataTypes/Vector.h"

class QuadrilateralAreaCalculator : public IOperation {
public:
    void execute() override;
    Vector calculateArea(const Quadrilateral& quadrilateral);
};

#endif 
