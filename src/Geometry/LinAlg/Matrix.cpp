#include "Matrix.h"

template<std::size_t M, std::size_t N>
Matrix<M, N>::Matrix() = default;

template<std::size_t M, std::size_t N>
Matrix<M, N>::Matrix(const std::array<float, M * N>& data) : str(M), col(N), data_(data) {};

template<std::size_t M, std::size_t N>
Matrix<M, N>::Matrix(const std::array<Vector<N>, M>& data) : str(M), col(N) {
    for (std::size_t i = 0; i < M; ++i) {
        for (std::size_t j = 0; j < N; ++j) {
            data_[i * N + j] = data[i][j];
        }
    }
}

template<std::size_t M, std::size_t N>
float& Matrix<M, N>::operator[](std::size_t index) {
    return data_[index];
}

template<std::size_t M, std::size_t N>
float Matrix<M, N>::operator[](std::size_t index) const {
    return data_[index];
}

template<std::size_t M, std::size_t N>
const std::array<float, M * N>& Matrix<M, N>::data() const {
    return data_;
 }
