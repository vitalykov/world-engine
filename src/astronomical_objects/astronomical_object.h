#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_

#include "astronomical_objects/types.h"

namespace world_engine {

// Base class for spherical objects flying in the open space
class AstronomicalObject {
protected:
    Position position_;
    Mass mass_;
    Length radius_;

public:
    inline Position GetPosition();
    inline Mass GetMass();
    inline Length GetRadius();
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_