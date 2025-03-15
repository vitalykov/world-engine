#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "astronomical_objects/star.h"
#include "astronomical_objects/astronomical_object.h"
#include "astronomical_objects/types.h"

class Planet: public AstronomicalObject {
private:
    Star* star_;
    double distance_to_star_;

public:
    Planet(Size radius, Star* star, double distance_to_star);
};

#endif  // WORLD_ENGINE_PLANET_H_
