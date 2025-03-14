#include "vector3d.h"

#include <math.h>

double Vector3d::Length() {
    sqrt(x * x + y * y + z * z);
}