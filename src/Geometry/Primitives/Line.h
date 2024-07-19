#ifndef GEOMETRY_LINE_H_INCLUDED
#define GEOMETRY_LINE_H_INCLUDED

#include "Point.h"
#include "Vector.h"

template<std::size_t n>
struct Line {
    Point<n> A;
    Vector<n> v; // direction vector
};

#endif // GEOMETRY_LINE_H_INCLUDED
