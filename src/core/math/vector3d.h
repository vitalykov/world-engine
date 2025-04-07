#ifndef WORLD_ENGINE_VECTOR3D_H_
#define WORLD_ENGINE_VECTOR3D_H_

#include "core/physics/quantities.h"
#include "core/math/matrix3d.h"

namespace world_engine {

// TODO: Probably implement it as template class
class Vector3D {
   public:
    double x;
    double y;
    double z;

    Vector3D() = default;
    Vector3D(double x, double y, double z);
    Vector3D(Point p1, Point p2);

    inline void Copy(const Vector3D& vec) {
        x = vec.x;
        y = vec.y;
        z = vec.z;
    }

    inline Area SquaredLength() { return x * x + y * y + z * z; }
    inline Length Length() { return sqrt(x * x + y * y + z * z); }

    inline Vector3D operator *(double scale) { 
        return Vector3D(x * scale, y * scale, z * scale);
    }

    inline Vector3D& operator *=(double scale) { 
        x *= scale;
        y *= scale;
        z *= scale;
        return *this;
    }

    inline Vector3D operator +(const Vector3D& vec) {
        return Vector3D(x + vec.x, y + vec.y, z + vec.z);
    }

    inline Vector3D& operator +=(const Vector3D& vec) {
        x += vec.x;
        y += vec.y;
        z += vec.z;
        return *this;
    }

    inline Vector3D operator -(const Vector3D& vec) {
        return Vector3D(x - vec.x, y - vec.y, z - vec.z);
    }

    inline Vector3D& operator -=(const Vector3D& vec) {
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        return *this;
    }

    inline double Dot(const Vector3D& vec) { return x * vec.x + y * vec.y + z * vec.z; }

    inline Vector3D Cross(const Vector3D& vec) {
        return Vector3D(y * vec.z - z * vec.y,
                        z * vec.x - x * vec.z,
                        x * vec.y - y * vec.x);
    }

    inline AngleRad Angle(Vector3D& vec) { return acos(this->Dot(vec) / (Length() * vec.Length())); }

    void Rotate(const Vector3D& axis, AngleRad angle);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_VECTOR3D_H_