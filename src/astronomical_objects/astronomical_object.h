#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_

#include "astronomical_objects/types.h"

class AstronomicalObject {
protected:
    Position position_;
    Length radius_;

public:
    inline Position GetPosition();
    inline Length GetRadius();
};

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
