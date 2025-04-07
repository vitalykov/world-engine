#include "core/math/quaternion.h"

#include <cmath>

namespace world_engine {

Quaternion::Quaternion(double a, double b, double c, double d) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
}

Quaternion::Quaternion(double angle, const Vector3D& axis) {
    double half_angle = angle / 2;
    double sin_half = std::sin(half_angle);

    a = std::cos(half_angle);
    b = sin_half * axis.x;
    c = sin_half * axis.y;
    d = sin_half * axis.z;
}

void Quaternion::Normalize() {
    double norm = 1.0 / Length();
    *this *= norm;
}

}