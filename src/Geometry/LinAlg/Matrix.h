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
    Matrix();
    Matrix(const std::array<float, M * N>& data);
    Matrix(const std::array<Vector<N>, M>& data);

    float operator[](std::size_t index) const;
    float& operator[](std::size_t index);
    const std::array<float, M * N>& data() const;
};


#endif // GEOMETRY_MATRIX_H_INCLUDED
