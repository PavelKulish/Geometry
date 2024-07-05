#include "Line.h"

/*float Determinant2(float a11, float a21, float a12, float a22) {
    return (a11 * a22 - a12 * a21);
}*/

std::optional<Intersection> line_intersection(const Line& K, const Line& L) {
    const float det = -Determinant(K.v, L.v);
    if (det == 0){
        return {};
    }
    const Vector2 dr = K.A - L.A;
    const float det1 = -Determinant(dr, L.v);
    const float det2 = Determinant(K.v, dr);
    return Intersection{det1 / det, det2 / det};
}

