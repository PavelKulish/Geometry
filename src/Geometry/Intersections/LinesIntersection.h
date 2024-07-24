#ifndef LINESINTERSECTION_H_
#define LINESINTERSECTION_H_

#include "Geometry/LinAlg/Determinant.h"
#include "Geometry/Primitives/Line.h"
#include "Intersection.h"

std::optional<Intersection> line_intersection(const Line<2>& K, const Line<2>& L);

#endif
