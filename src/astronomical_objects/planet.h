#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "astronomical_objects/star.h"
#include "astronomical_objects/astronomical_object.h"
#include "astronomical_objects/types.h"

struct PlanetInfo {
    Length radius;
    Star* star;
    double distance_to_star;
    Time rotation_period;
    Time orbital_period;
    double axial_tilt;
    double rotation_angle;
};

class Planet: public AstronomicalObject {
private:
    Star* star_;
    double distance_to_star_;
    Time rotation_period_;
    Time orbital_period_;
    double axial_tilt_;
    double rotation_angle_;

public:
    Planet(PlanetInfo* planet_info);
};

#endif  // WORLD_ENGINE_PLANET_H_
