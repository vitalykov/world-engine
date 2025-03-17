#ifndef WORLD_ENGINE_VECTOR3D_H_
#define WORLD_ENGINE_VECTOR3D_H_

#include "astronomical_objects/types.h"

class Vector3d {
private:
    double x_;
    double y_;
    double z_;

public:
    Vector3d(double x, double y, double z);
    Vector3d(Position p1, Position p2);
    double Length();
    double Dot(Vector3d* vec);
    double Angle(Vector3d* vec);
};

#endif  // WORLD_ENGINE_VECTOR3D_H_
