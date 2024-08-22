#ifndef POINTINSIMPLEX_H
#define POINTINSIMPLEX_H

#include "Geometry/Primitives/Vector.h"
#include "Geometry/Primitives/Simplex.h"
#include "Geometry/LinAlg/Determinant.h"
#include "Geometry/LinAlg/Matrix.h"

template<std::size_t n>
bool is_belonged(const Point<n>& X, const Simplex<n>& simplex) {
    std::array<Vector<n>, n> data;
    for (std::size_t i = 0; i < n; ++i) {
        data[i] = simplex.data_[i] - simplex.data_[n];
    }

    Matrix<n, n> A(data);
    float det_A = det(A);

    std::array<float, n> coords;
    for (std::size_t i = 0; i < n; ++i) {
        std::array<Vector<n>, n> buf = data;
        buf[i] = X - simplex.data_[n];
        Matrix<n, n> temp_matrix(buf);
        coords[i] = det(temp_matrix) / det_A;
    }

    float sum = 0;
    for (auto i : coords) {
        if (i < 0 || i > 1) {
            return false;
        }
        sum += i;
    }

    return sum <= 1.0;
}

#endif //POINTINSIMPLEX_H
