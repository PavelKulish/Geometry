#include "PointInTriangle.h"

bool is_belonged(const Point<2>& X, const Triangle& triangle) {
    const Vector<2> v1 = triangle.B - triangle.A;
    const Vector<2> v2 = triangle.C - triangle.A;
    const Vector<2> r = X - triangle.A;

    const Matrix<2, 2> A{{v1, v2}};
    const Matrix<2, 2> B{{r, v2}};
    const Matrix<2, 2> C{{v1, r}};

    const float det = Determinant(A);
    const float det_x = Determinant(B);
    const float det_y = Determinant(C);

    const float x = det_x / det;
    const float y = det_y / det;

    return ((x >= 0) && (y >= 0) && (x + y <= 1));
}
