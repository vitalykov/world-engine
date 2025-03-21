#ifndef WORLD_ENGINE_STAR_H_
#define WORLD_ENGINE_STAR_H_

#include "astronomical_objects/astronomical_object.h"
#include "core/geometry/vector3d.h"

namespace world_engine {

// Star which emits radiation
class Star : public AstronomicalObject {
   private:
    Power luminosity_;  // Whole energy of radiation coming from the star in one second

   public:
    Star(Length radius, Power luminosity);

    inline Power GetLuminosity() { return luminosity_; }
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_STAR_H_