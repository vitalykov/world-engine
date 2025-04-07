#ifndef WORLD_ENGINE_PLANET_REGION_H_
#define WORLD_ENGINE_PLANET_REGION_H_

#include "astronomical_objects/planet.h"
#include "core/physics/quantities.h"
#include "core/math/vector3d.h"

namespace world_engine {

class PlanetRegion {
public:
    PlanetRegion(Planet* planet, double latitude, double longitude);
    inline double GetLatitude() { return latitude_; }
    inline double GetLongitude() { return longitude_; }
    void UpdateState(Time t);

private:
    Planet* planet_;
    double latitude_;
    double longitude_;
    Vector3D initial_position_;
    Vector3D position_;
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_PLANET_REGION_H_