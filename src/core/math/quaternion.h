#ifndef WORLD_ENGINE_CORE_MATH_QUATERNION_H_
#define WORLD_ENGINE_CORE_MATH_QUATERNION_H_

#include <cmath>

#include "core/math/vector3d.h"

namespace world_engine {

class Quaternion {
public:
    double a; // real component
    double b, c, d; // imaginary components

    Quaternion(double a, double b, double c, double d);
    
    // Make quaternion from angle and axis.
    // Angle must be in radians
    // Axis must be of unit length
    Quaternion(double angle, const Vector3D& axis);

    inline void operator *=(double x) { a *= x, b *= x, c *= x, d *= x; }

    inline double SquaredLength() { return a * a + b * b + c * c + d * d; }
    inline double Length() { return sqrt(a * a + b * b + c * c + d * d); }

    void Normalize();
};

} // namespace world_engine

#endif  // WORLD_ENGINE_CORE_MATH_QUATERNION_H_
