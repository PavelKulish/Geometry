#ifndef DETERMINANT_H_
#define DETERMINANT_H_

#include "Matrix.h"

template<std::size_t M>
float Determinant(const Matrix<M, M>& matr) {
    if (M == 1) {
        return matr(0);
    }
    float result = 0;
    int multiplier = 1;
    for (std::size_t i = 0; i < M; ++i) {
        Matrix<M - 1, M - 1> buffer;
        for (std::size_t j = 1; j < M; ++j) {
            std::size_t col_buffer = 0;
            for (std::size_t k = 0; k < M; ++k) {
                if (k == i) continue;
                buffer((j - 1) * (M - 1) + col_buffer) = matr(j * M + k);
                col_buffer++;
            }
        }

        result += multiplier * matr(i) * Determinant(buffer);
        multiplier *= -1;
    }

    return result;
}

template<>
inline float Determinant<1>(const Matrix<1, 1>& matr) {
    return matr(0);
}
#endif // DETERMINANT_H_INCLUDED
