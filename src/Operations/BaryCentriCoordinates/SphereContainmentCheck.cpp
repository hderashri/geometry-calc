#include "SphereContainmentCheck.h"
#include <cmath>
#include <iostream>

bool SphereContainmentCheck::isInside() const {
    Point3D center = sphere_.getCenter();
    double radius = sphere_.getRadius();

    double dx = point_.getX() - center.getX();
    double dy = point_.getY() - center.getY();
    double dz = point_.getZ() - center.getZ();

    double distanceSquared = dx * dx + dy * dy + dz * dz;

    return distanceSquared <= radius * radius;
}
