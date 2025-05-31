#ifndef SPHEREVOLUMECALCULATOR_H
#define SPHEREVOLUMECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Sphere.h"
#include "../DataTypes/Vector.h"

class SphereVolumeCalculator : public IOperation {
public:
    void execute() override;
    double calculateVolume(const Sphere& sphere);
};

#endif 
