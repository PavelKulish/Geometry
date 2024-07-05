#ifndef GEOMETRY_SECTION_H_INCLUDED
#define GEOMETRY_SECTION_H_INCLUDED
#include "Point.h"
#include "Vector2.h"
#include "Line.h"
#include "Intersection.h"

struct Section {
    Point A;
    Point B;
};

std::optional<Intersection> section_intersection(const Section& O, const Section& P);
#endif // GEOMETRY_SECTION_H_INCLUDED
