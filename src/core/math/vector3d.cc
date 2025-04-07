#include "core/math/vector3d.h"

#include <cmath>

namespace world_engine {

Vector3D::Vector3D(double x, double y, double z) {
    x = x;
    y = y;
    z = z;
}

Vector3D::Vector3D(Point p1, Point p2) {
    x = p2.x - p1.x;
    y = p2.y - p1.y;
    z = p2.z - p1.z;
}

void Vector3D::Rotate(Vector3D& axis, AngleRad angle) {
    double sin_angle = std::sin(angle);
    double cos_angle = std::cos(angle);
}

}  // namespace world_engine