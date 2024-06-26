#include "Line.h"

float Determinant2(float a11, float a21, float a12, float a22) {
    return (a11 * a22 - a12 * a21);
}

Point line_intersection(const Line& K, const Line& L) {
    const float a1 = K.B.x - K.A.x;
    const float b1 = K.B.y - K.A.y;

    const float a2 = L.B.x - L.A.x;
    const float b2 = L.B.y - L.A.y;

    const float c1 = K.A.x - (a1 / b1) * K.A.y;
    const float c2 = L.A.x - (a2 / b2) * L.A.y;

    const float det = Determinant2(1.0, 1.0, - (a1 / b1), - (a2 / b2));
    const float det_x = Determinant2(c1, c2, - (a1 / b1), - (a2 / b2));
    const float det_y = Determinant2(1.0, 1.0, c1, c2);

    const float res_x = det_x / det;
    const float res_y = det_y / det;

    return {res_x, res_y};
}

