#include "PointInTriangle.h"

bool is_belonged(const Point& X, const Triangle& triangle) {
    const Vector2 v1 = triangle.B - triangle.A;
    const Vector2 v2 = triangle.C - triangle.A;
    const Vector2 r = X - triangle.A;

    const float det = Determinant(v1, v2);
    const float det_x = Determinant(r, v2);
    const float det_y = Determinant(v1, r);

    const float x = det_x / det;
    const float y = det_y / det;

    return ((x >= 0) && (y >= 0) && (x + y <= 1));
}
