#include "Line.h"

/*float Determinant2(float a11, float a21, float a12, float a22) {
    return (a11 * a22 - a12 * a21);
}*/

Point line_intersection(const Line& K, const Line& L) {
    const float c1 = K.v.y * K.A.x - K.v.x * K.A.y;
    const float c2 = L.v.y * L.A.x - L.v.x * L.A.y;

    const Vector2 d1{K.v.y, -K.v.x};
    const Vector2 d2{L.v.y, -L.v.x};
    const Vector2 c{c1, c2};

    const float det = Determinant(d1, d2);
    const float det_x = Determinant(c, d2);
    const float det_y = Determinant(d1, c);

    const float res_x = det_x / det;
    const float res_y = det_y / det;

    return {res_x, res_y};
}

