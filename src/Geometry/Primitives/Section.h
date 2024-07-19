#ifndef GEOMETRY_SECTION_H_INCLUDED
#define GEOMETRY_SECTION_H_INCLUDED

#include "Point.h"

template<std::size_t n>
struct Section {
    Point<n> A;
    Point<n> B;
};

#endif // GEOMETRY_SECTION_H_INCLUDED
