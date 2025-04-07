#ifndef WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_
#define WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_

#include "core/physics/quantities.h"
#include "core/math/vector3d.h"

namespace world_engine {

// Base class for spherical objects flying in the open space
class AstronomicalObject {
   protected:
    Vector3D position_;
    Mass mass_;
    Len radius_;

   public:
    inline Vector3D GetPosition() { return position_; }

    inline Mass GetMass() { return mass_; }

    inline Len GetRadius() { return radius_; }
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_ASTRONOMICAL_OBJECTS_ASTRONOMICAL_OBJECT_H_