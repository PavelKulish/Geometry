#include "Point.h"

template<std::size_t n>
Point<n>::Point() = default;

template<std::size_t n>
Point<n>::Point(const std::array<float, n>& data) : data_{data} {};

template<std::size_t n>
float& Point<n>::operator[](std::size_t index) {
    return data_[index];
}

template<std::size_t n>
float Point<n>::operator[](std::size_t index) const {
    return data_[index];
}

template<std::size_t n>
const std::array<float, n>& Point<n>::data() const {
    return data_;
 }

template<std::size_t n>
float Point<n>::x() const {
    static_assert(n > 0);
    return data_[0];
}

template<std::size_t n>
float Point<n>::y() const {
    static_assert(n > 1);
    return data_[1];
}

template<std::size_t n>
float Point<n>::z() const {
    static_assert(n > 2);
    return data_[2];
}
