#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "vector3d.h"
#include "astronomical_objects/star.h"
#include "astronomical_objects/astronomical_object.h"

class Planet {
private:
    Star* star_;
    double distance_to_star_;

public:
    Planet(double radius, Star* star, double distance_to_star);
};

#endif  // WORLD_ENGINE_PLANET_H_
