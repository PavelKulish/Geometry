#ifndef GEOMETRY_LINE_H_INCLUDED
#define GEOMETRY_LINE_H_INCLUDED
#include "Point.h"
#include "Vector2.h"
#include "Intersection.h"

struct Line {
    Point A;
    Vector2 v; // direction vector
};

//float Determinant2(float a11, float a12, float a21, float a22);

std::optional<Intersection> line_intersection(const Line& K, const Line& L);
#endif // GEOMETRY_LINE_H_INCLUDED
