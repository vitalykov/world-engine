#ifndef WORLD_ENGINE_VECTOR3D_H_
#define WORLD_ENGINE_VECTOR3D_H_

#include "core/physics/quantities.h"
#include "core/math/matrix3d.h"

namespace world_engine {

// TODO: Probably implement it as template class
class Vector3d {
   public:
    double x;
    double y;
    double z;

    Vector3d(double x, double y, double z);
    Vector3d(Point p1, Point p2);

    inline Area SquaredLength() { return x * x + y * y + z * z; }
    inline Length Length() { return sqrt(x * x + y * y + z * z); }

    inline Vector3d operator *(double scale) { 
        return Vector3d(x * scale, y * scale, z * scale);
    }

    inline Vector3d& operator *=(double scale) { 
        x *= scale;
        y *= scale;
        z *= scale;
        return *this;
    }

    inline Vector3d operator +(Vector3d& vec) {
        return Vector3d(x + vec.x, y + vec.y, z + vec.z);
    }

    inline Vector3d& operator +=(Vector3d& vec) {
        x += vec.x;
        y += vec.y;
        z += vec.z;
        return *this;
    }

    inline Vector3d operator -(Vector3d& vec) {
        return Vector3d(x - vec.x, y - vec.y, z - vec.z);
    }

    inline Vector3d& operator -=(Vector3d& vec) {
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;
        return *this;
    }

    inline double Dot(Vector3d& vec) { return x * vec.x + y * vec.y + z * vec.z; }
    inline Vector3d Cross(Vector3d& vec) {
        return Vector3d(y * vec.z - z * vec.y,
                        z * vec.x - x * vec.z,
                        x * vec.y - y * vec.x);
    }
    inline AngleRad Angle(Vector3d& vec) { return acos(this->Dot(vec) / (Length() * vec.Length())); }

    void Rotate(Vector3d& axis, AngleRad angle);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_VECTOR3D_H_