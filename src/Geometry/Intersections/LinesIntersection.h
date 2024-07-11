#ifndef LINESINTERSECTION_H_INCLUDED
#define LINESINTERSECTION_H_INCLUDED

#include "Geometry/Primitives/Line.h"
#include "Intersection.h"

std::optional<Intersection> line_intersection(const Line& K, const Line& L);

#endif
