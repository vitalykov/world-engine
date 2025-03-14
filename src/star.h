#ifndef WORLD_ENGINE_STAR_H_
#define WORLD_ENGINE_STAR_H_

#include "vector3d.h"

class Star {
private:
    Vector3d pos_;
    double radius_;
    double luminosity_;

public:
    Star(double radius, double luminosity);
};

#endif  // WORLD_ENGINE_STAR_H_
