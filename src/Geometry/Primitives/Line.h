#ifndef GEOMETRY_LINE_H_INCLUDED
#define GEOMETRY_LINE_H_INCLUDED

#include "Point.h"
#include "Vector2.h"

struct Line {
    Point A;
    Vector2 v; // direction vector
};

#endif // GEOMETRY_LINE_H_INCLUDED
