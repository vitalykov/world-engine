#ifndef WORLD_ENGINE_PLANET_H_
#define WORLD_ENGINE_PLANET_H_

#include "astronomical_objects/star.h"
#include "astronomical_objects/astronomical_object.h"
#include "astronomical_objects/types.h"

namespace world_engine {

// Structure for initializing Planet class
struct PlanetInfo {
    Length radius;
    Star* star;
    double distance_to_star;
    Time rotation_period;
    Time orbital_period;
    double axial_tilt;
    double rotation_angle;
};

// Planet which is in orbit of the star
class Planet: public AstronomicalObject {
private:
    Star* star_;
    double distance_to_star_;
    Time rotation_period_;
    Time orbital_period_;
    double axial_tilt_;
    double rotation_angle_;

public:
    // Constructing the planet using PlanetInfo
    Planet(PlanetInfo* planet_info);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_PLANET_H_