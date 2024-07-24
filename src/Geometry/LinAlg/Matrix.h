#ifndef GEOMETRY_MATRIX_H_INCLUDED
#define GEOMETRY_MATRIX_H_INCLUDED

#include <array>
#include "Geometry/Primitives/Vector.h"

template<std::size_t M, std::size_t N>
class Matrix {
    std::size_t str;
    std::size_t col;
    std::array<float, M * N> data_;
public:
    Matrix() = default;
    Matrix(const std::array<float, M * N>& data) : str(M), col(N), data_(data) {}
    Matrix(const std::array<Vector<N>, M>& data) : str(M), col(N) {
        for (std::size_t i = 0; i < M; ++i) {
            for (std::size_t j = 0; j < N; ++j) {
                data_[i * N + j] = data[i][j];
            }
        }
    }

    float operator[](std::size_t index) const {
        return data_[index];
    }
    float& operator[](std::size_t index) {
        return data_[index];
    }
    const std::array<float, M * N>& data() const {
        return data_;
    }
};


#endif // GEOMETRY_MATRIX_H_INCLUDED
