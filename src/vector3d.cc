#include "vector3d.h"

#include <math.h>

double Vector3d::Length() {
    sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}