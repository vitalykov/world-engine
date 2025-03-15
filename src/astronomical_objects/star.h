#ifndef WORLD_ENGINE_STAR_H_
#define WORLD_ENGINE_STAR_H_

#include "vector3d.h"
#include "astronomical_objects/astronomical_object.h"

class Star: public AstronomicalObject {
private:
    double luminosity_;

public:
    Star(double radius, double luminosity);
};

#endif  // WORLD_ENGINE_STAR_H_
