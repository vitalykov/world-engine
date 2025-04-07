#include "astronomical_objects/star.h"

namespace world_engine {

Star::Star(Len radius, Power luminosity) {
    position_ = Vector3D(0, 0, 0);
    radius_ = radius;
    luminosity_ = luminosity;
}

}  // namespace world_engine