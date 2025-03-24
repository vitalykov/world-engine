#include "planet_region.h"

namespace world_engine {

PlanetRegion::PlanetRegion(Planet* planet, double latitude, double longitude) {
    planet_ = planet;
    latitude_ = latitude;
    longitude_ = longitude;
}

void PlanetRegion::UpdateState(Time t) {

}

}  // namespace world_engine