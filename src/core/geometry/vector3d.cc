#include "core/geometry/vector3d.h"

#include <cmath>

namespace world_engine {

Vector3d::Vector3d(double x, double y, double z) {
    x_ = x;
    y_ = y;
    z_ = z;
}

Vector3d::Vector3d(Position p1, Position p2) {
    x_ = p2.x - p1.x;
    y_ = p2.y - p1.y;
    z_ = p2.z - p1.z;
}

Length Vector3d::Length() { sqrt(x_ * x_ + y_ * y_ + z_ * z_); }

double Vector3d::Dot(Vector3d* vec) { return this->x_ * vec->x_ + this->y_ * vec->y_ + this->z_ * vec->z_; }

Angle Vector3d::Angle(Vector3d* vec) { return acos(this->Dot(vec) / (this->Length() * vec->Length())); }

}  // namespace world_engine