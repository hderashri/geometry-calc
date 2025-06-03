#ifndef TETRAHEDRONVOLUMECALCULATOR_H
#define TETRAHEDRONVOLUMECALCULATOR_H

#include "../Interfaces/IOperation.h"
#include "../Shapes/Tetrahedron.h"
#include "../DataTypes/Vector.h"

class TetrahedronVolumeCalculator : public IOperation {
public:
    void execute();
    double calculateVolume(const Tetrahedron& tetrahedron);
};

#endif 
