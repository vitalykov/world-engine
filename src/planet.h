#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "vector3d.h"
#include "star.h"

class Planet {
private:
    Vector3d pos_;
    double radius_;
    Star* star_;
    double distance_to_star_;

public:
    Planet(double radius, Star* star, double distance_to_star);
};

#endif  // WORLD_ENGINE_PLANET_H_
