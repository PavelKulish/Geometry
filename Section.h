#ifndef GEOMETRY_SECTION_H_INCLUDED
#define GEOMETRY_SECTION_H_INCLUDED
#include "Point.h"
#include "Vector2.h"
#include "Line.h"

struct Section {
    Point A;
    Point B;
};
bool point_on_section(const Point& P, const Section& O);

Point section_intersection(const Section& O, const Section& P);
#endif // GEOMETRY_SECTION_H_INCLUDED
