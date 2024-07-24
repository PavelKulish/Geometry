#ifndef DETERMINANT_H_
#define DETERMINANT_H_

#include "Geometry/Primitives/Vector.h"
#include "Matrix.h"

float Determinant(const Matrix<1, 1>& matr);

template<std::size_t M, std::size_t N>
float Determinant(const Matrix<M, N>& matr) {
    static_assert(M == N);
    if (M == 1) {
        return matr[0];
    }
    float result = 0;
    int multiplier = 1;
    for (std::size_t i = 0; i < N; ++i) {
        Matrix<M - 1, N - 1> buffer;
        for (std::size_t j = 1; j < M; ++j) {
            std::size_t col_buffer = 0;
            for (std::size_t k = 0; k < N; ++k) {
                if (k == i) continue;
                buffer[(j - 1) * (N - 1) + col_buffer] = matr[j * N + k];
                col_buffer++;
            }
        }

        result += multiplier * matr[i] * Determinant(buffer);
        multiplier *= -1;
    }

    return result;
}


#endif // DETERMINANT_H_INCLUDED
