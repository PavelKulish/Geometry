#include "LinesIntersection.h"

std::optional<Intersection> line_intersection(const Line<2>& K, const Line<2>& L) {
    const Matrix<2, 2> A{{K.v.data_, L.v.data_}};
    const float det = -Determinant(A);
    if (det == 0){
        return {};
    }
    const Vector<2> dr = L.A - K.A;
    const Matrix<2, 2> B{{dr.data_, L.v.data_}};
    const Matrix<2, 2> C{{K.v.data_, dr.data_}};
    const float det1 = -Determinant(B);
    const float det2 = Determinant(C);
    return Intersection{det1 / det, det2 / det};
}

