#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_

#include "vector3d.h"

typedef double Size;

class AstronomicalObject {
private:
    Vector3d position_;
    Size radius_;

public:
    Vector3d GetPosition();
    Size GetRadius();
};

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
