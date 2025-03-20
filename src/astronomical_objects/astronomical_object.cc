#include "astronomical_objects/astronomical_object.h"

namespace world_engine {

inline Position AstronomicalObject::GetPosition() { return position_; }

inline Mass AstronomicalObject::GetMass() { return mass_; }

inline Length AstronomicalObject::GetRadius() { return radius_; }

}  // namespace world_engine