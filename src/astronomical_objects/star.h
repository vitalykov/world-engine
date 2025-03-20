#ifndef WORLD_ENGINE_STAR_H_
#define WORLD_ENGINE_STAR_H_

#include "vector3d.h"
#include "astronomical_objects/astronomical_object.h"

namespace world_engine {

// Star which emits radiation
class Star: public AstronomicalObject {
private:
    Power luminosity_; // Whole energy of radiation coming from the star in one second

public:
    Star(double radius, double luminosity);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_STAR_H_