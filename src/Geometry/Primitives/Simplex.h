
#ifndef SIMPLEX_H
#define SIMPLEX_H

#include <array>

#include "Point.h"

template<std::size_t n>
struct Simplex {
    std::array<Point<n>, n + 1> data_;
};

#endif //SIMPLEX_H
