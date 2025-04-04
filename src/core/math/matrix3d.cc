#include "core/math/matrix3d.h"

namespace world_engine {

Matrix3D::Matrix3D(double xx, double xy, double xz,
                   double yx, double yy, double yz,
                   double zx, double zy, double zz) {
                    matrix_[0][0] = xx;
                    matrix_[0][1] = xy;
                    matrix_[0][2] = xz;
                    matrix_[1][0] = yx;
                    matrix_[1][1] = yy;
                    matrix_[1][2] = yz;
                    matrix_[2][0] = zx;
                    matrix_[2][1] = zy;
                    matrix_[2][2] = zz;
                   }

void Matrix3D::Apply(Vector3d& vec) {
    vec.x = (0, 0) * vec.x + (0, 1) * vec.y + (0, 2) * vec.z;
    vec.y = (1, 0) * vec.x + (1, 1) * vec.y + (1, 2) * vec.z;
    vec.z = (2, 0) * vec.x + (2, 1) * vec.y + (2, 2) * vec.z;
}

Vector3d operator *(const Matrix3D& mat, const Vector3d& vec) {
    return Vector3d(mat(0, 0) * vec.x + mat(0, 1) * vec.y + mat(0, 2) * vec.z,
                    mat(1, 0) * vec.x + mat(1, 1) * vec.y + mat(1, 2) * vec.z,
                    mat(2, 0) * vec.x + mat(2, 1) * vec.y + mat(2, 2) * vec.z);
}

} // namespace world_engine