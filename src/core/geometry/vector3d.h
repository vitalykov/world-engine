#ifndef WORLD_ENGINE_VECTOR3D_H_
#define WORLD_ENGINE_VECTOR3D_H_

#include "core/physics/quantities.h"

namespace world_engine {

// TODO: Probably implement it as template class
class Vector3d {
   private:
    double x_;
    double y_;
    double z_;

   public:
    Vector3d(double x, double y, double z);
    Vector3d(Position p1, Position p2);
    Length Length();
    double Dot(Vector3d* vec);
    Angle Angle(Vector3d* vec);
};

}  // namespace world_engine

#endif  // WORLD_ENGINE_VECTOR3D_H_