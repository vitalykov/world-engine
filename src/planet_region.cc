#include "planet_region.h"

#include <cmath>

#include "core/math/matrix3d.h"
#include "core/math/quaternion.h"

namespace world_engine {

#define DEG_TO_RAD_COEFF 0.017453292519943296

PlanetRegion::PlanetRegion(Planet* planet, double latitude, double longitude) {
    planet_ = planet;
    latitude_ = latitude;
    longitude_ = longitude;
    
    double azimuth = longitude * DEG_TO_RAD_COEFF;
    double inclination = (90 - latitude) * DEG_TO_RAD_COEFF + planet->GetAxialTilt();
    double r = planet_->GetRadius();
    double sin_az = std::sin(azimuth);
    double cos_az = std::cos(azimuth);
    double sin_in = std::sin(inclination);
    double cos_in = std::cos(inclination);

    initial_position_.x = r * sin_in * cos_az;
    initial_position_.y = r * sin_in * sin_az;
    initial_position_.z = r * cos_in;
}

void PlanetRegion::UpdateState(Time t) {
    AngleRad rotation_angle = 2 * M_PI * t / planet_->GetRotationPeriod();
    Quaternion q = Quaternion(rotation_angle, planet_->GetAxis());
    Matrix3D rotation_matrix = Matrix3D(q);
    position_.Copy(initial_position_);
    rotation_matrix.Apply(position_);
}

}  // namespace world_engine