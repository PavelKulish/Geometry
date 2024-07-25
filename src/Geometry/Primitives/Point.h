#ifndef POINT_H_
#define POINT_H_

#include <array>

#include "Vector.h"

template<std::size_t n>
struct Point {
    Vector<n> r0;
};


template<std::size_t d>
Vector<d> operator-(const Point<d>& p1, const Point<d>& p2) {
    return p2.r0 - p1.r0;
}

#endif // GEOMETRY_POINT_H_
