#ifndef WORLD_ENGINE_CORE_MATH_MATRIX3D_H_
#define WORLD_ENGINE_CORE_MATH_MATRIX3D_H_

#include "core/math/vector3d.h"
#include "core/math/quaternion.h"

namespace world_engine {

class Matrix3D {
private:
    double matrix_[3][3];

public:
    Matrix3D(double xx, double xy, double xz,
             double yx, double yy, double yz,
             double zx, double zy, double zz);

    Matrix3D(Quaternion& q);

    inline double& operator ()(int i, int j) { return matrix_[i][j]; }
    inline const double& operator ()(int i, int j) const { return matrix_[i][j]; }

    void Apply(Vector3D& vec);
};

Vector3D operator *(const Matrix3D& mat, const Vector3D& vec);

} // namespace world_engine

#endif  // WORLD_ENGINE_CORE_MATH_MATRIX3D_H_
