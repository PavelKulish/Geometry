#ifndef GEOMETRY_MATRIX_H_INCLUDED
#define GEOMETRY_MATRIX_H_INCLUDED

#include <iostream>
#include <array>

template<std::size_t M, std::size_t N>
class Matrix {
    std::array<float, M * N> data_;
public:
    Matrix() = default;
    Matrix(const std::array<float, M * N>& data) : data_(data) {}
    Matrix(const std::array<Matrix<1, N>, M>& data) {
        for (std::size_t i = 0; i < M; ++i) {
            for (std::size_t j = 0; j < N; ++j) {
                data_[i * N + j] = data[i](j);
            }
        }
    }

    Matrix<M - 1, N - 1> submatrix(std::size_t str, std::size_t col) const;

    float operator()(const std::size_t i) const {
         return data_[i];
    }
    float& operator()(const std::size_t i) {
         return data_[i];
    }
    float operator()(const std::size_t i, const std::size_t j) const {
         return data_[i * N + j];
    }
    float& operator()(const std::size_t i, const std::size_t j) {
         return data_[i * N + j];
    }
    const std::array<float, M * N>& data() const {
        return data_;
    }
};

template<std::size_t M, std::size_t N>
std::ostream& operator<<(std::ostream& os, const Matrix<M,N>& A) {
    for(std::size_t i = 0; i < M * N; ++i){
        if (i == M * N - 1) {
            os << A(i) << std::endl;
        }
        else {
            os << A(i) << " ";
        }
    }
    return os;
}

template<std::size_t M, std::size_t N>
Matrix<M, N> operator+(const Matrix<M, N>& A, const Matrix<M, N>& B) {
    Matrix<M, N> result;
	for(std::size_t i = 0; i < M * N; ++i){
      result(i) = A(i) + B(i);
    }
    return result;
}

template<std::size_t M, std::size_t N>
Matrix<M, N> operator-(const Matrix<M, N>& A) {
    Matrix<M, N> result;
	for(std::size_t i = 0; i < M * N; ++i){
      result(i) = -A(i);
    }
    return result;
}

template<std::size_t M, std::size_t N>
Matrix<M, N> operator*(const Matrix<M, N>& A, const float c) {
    Matrix<M, N> result;
	for(std::size_t i = 0; i < M * N; ++i){
      result(i) = c * A(i);
    }
    return result;
}

template<std::size_t M, std::size_t N>
Matrix<M, N> operator*(const float c, const Matrix<M, N>& A) {
    return A * c;
}

template<std::size_t M, std::size_t N>
Matrix<M, N> operator-(const Matrix<M, N>& A, const Matrix<M, N>& B) {
    Matrix<M, N> result;
	for(std::size_t i = 0; i < M * N; ++i){
      result(i) = A(i) - B(i);
    }
    return result;
}

template<std::size_t M, std::size_t N, std::size_t K>
Matrix<M, K> operator*(const Matrix<M, N>& A, const Matrix<N, K>& B) {
    Matrix<M, K> result;
    float buffer = 0;
	for(std::size_t i = 0; i < M; ++i){
	    for(std::size_t j = 0; j < K; ++j) {
            for(std::size_t l = 0; l < N; ++l) {
                buffer += A(i, l) * B(l, j);
            }
            result(i, j) = buffer;
            buffer = 0;
        }
    }
    return result;
}

template<std::size_t M, std::size_t N>
Matrix<N, M> transponse(const Matrix<M, N>& A) {
    Matrix<N, M> result;
	for(std::size_t i = 0; i < M; ++i){
	    for(std::size_t j = 0; j < N; ++j) {
            result(j, i) = A(i, j);
        }
    }
    return result;
}

template<std::size_t M, std::size_t N>
Matrix<M - 1, N - 1> Matrix<M, N>::submatrix(std::size_t str, std::size_t col) const {
    Matrix<M - 1, N - 1> result;
    for (std::size_t i = 0, count_i = 0; i < M; ++i) {
        if (i == str) {
            continue;
        }
        for (std::size_t j = 0, count_j = 0; j < N; ++j) {
            if (j == col) {
                continue;
            }
            result(count_i * (N - 1) + count_j) = data_[i * N + j];
            count_j++;
        }
        count_i++;
    }
    return result;
}

#endif // GEOMETRY_MATRIX_H_INCLUDED
