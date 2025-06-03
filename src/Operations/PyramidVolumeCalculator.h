#ifndef PYRAMIDVOLUMECALCULATOR_H
#define PYRAMIDVOLUMECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Pyramid.h"
#include "../DataTypes/Vector.h"

class PyramidVolumeCalculator : public IOperation {
public:
    void execute();
    double calculateVolume(const Pyramid& pyramid);
};

#endif 
