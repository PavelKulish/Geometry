#include "LinesIntersection.h"

std::optional<Intersection> line_intersection(const Line& K, const Line& L) {
    const float det = -Determinant(K.v, L.v);
    if (det == 0){
        return {};
    }
    const Vector2 dr = L.A - K.A;
    const float det1 = -Determinant(dr, L.v);
    const float det2 = Determinant(K.v, dr);
    return Intersection{det1 / det, det2 / det};
}

