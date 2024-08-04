#ifndef VECTOR_H_
#define VECTOR_H_

#include "Geometry/LinAlg/Matrix.h"

template<std::size_t n>
struct Vector {
    Matrix<1, n> data_;
    float x() const {
        static_assert(n > 0);
        return data_(0);
    }
    float y() const {
        static_assert(n > 1);
        return data_(1);
    }
    float z() const {
        static_assert(n > 2);
        return data_(2);
    }
};

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1, const Vector<d>& v2) {
    Vector<d> result{v1.data_ - v2.data_};
    return result;
}

template<std::size_t d>
float dot(const Vector<d>& v1, const Vector<d>& v2) {
    return v1.data_ * v2.data_;
}

template<std::size_t d>
Vector<d> operator+(const Vector<d>& v1, const Vector<d>& v2) {
    Vector<d> result{v1.data_ + v2.data_};
    return result;
}

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1) {
    Vector<d> result{-v1.data_};
    return result;
}

template<std::size_t d>
Vector<d> operator*(const Vector<d>& v, const float c) {
    Vector<d> result{c * v.data_};
    return result;
}

template<std::size_t d>
Vector<d> operator*(const float c, const Vector<d>& v) {
    return v * c;
}

#endif // VECTOR_H_
