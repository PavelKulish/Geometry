#ifndef LINE_H_
#define LINE_H_

#include "Point.h"
#include "Vector.h"

template<std::size_t n>
struct Line {
    Point<n> A;
    Vector<n> v; // direction vector
};

#endif // GEOMETRY_LINE_H_INCLUDED
