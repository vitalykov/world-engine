#include "astronomical_objects/planet.h"

namespace world_engine {

Planet::Planet(PlanetInfo* planet_info) {
    radius_ = planet_info->radius;
    star_ = planet_info->star;
    distance_to_star_ = planet_info->distance_to_star;
    position_ = star_->GetPosition();
    position_.x += distance_to_star_;

    rotation_period_ = planet_info->rotation_period;
    orbital_period_ = planet_info->orbital_period;
    axial_tilt_ = planet_info->axial_tilt;
    rotation_angle_ = 0;
}

}  // namespace world_engine