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

Matrix3D::Matrix3D(Quaternion& q) {
    // Precompute terms to make fewer multiplications
    double b2 = q.b * q.b;
    double c2 = q.c * q.c;
    double d2 = q.d * q.d;
    double ab = q.a * q.b;
    double ac = q.a * q.c;
    double ad = q.a * q.d;
    double bc = q.b * q.c;
    double bd = q.b * q.d;
    double cd = q.c * q.d;

    matrix_[0][0] = 1 - 2 * (c2 + d2);
    matrix_[0][1] = 2 * (bc - ad);
    matrix_[0][2] = 2 * (bd + ac);
    matrix_[1][0] = 2 * (bc + ad);
    matrix_[1][1] = 1 - 2 * (b2 + d2);
    matrix_[1][2] = 2 * (cd - ab);
    matrix_[2][0] = 2 * (bd - ac);
    matrix_[2][1] = 2 * (cd + ab);
    matrix_[2][2] = 1 - 2 * (b2 + c2);
}

void Matrix3D::Apply(Vector3D& vec) {
    vec.x = matrix_[0][0] * vec.x + matrix_[0][1] * vec.y + matrix_[0][2] * vec.z;
    vec.y = matrix_[1][0] * vec.x + matrix_[1][1] * vec.y + matrix_[1][2] * vec.z;
    vec.z = matrix_[2][0] * vec.x + matrix_[2][1] * vec.y + matrix_[2][2] * vec.z;
}

Vector3D operator *(const Matrix3D& mat, const Vector3D& vec) {
    return Vector3D(mat(0, 0) * vec.x + mat(0, 1) * vec.y + mat(0, 2) * vec.z,
                    mat(1, 0) * vec.x + mat(1, 1) * vec.y + mat(1, 2) * vec.z,
                    mat(2, 0) * vec.x + mat(2, 1) * vec.y + mat(2, 2) * vec.z);
}

} // namespace world_engine