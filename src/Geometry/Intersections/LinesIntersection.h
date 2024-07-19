#ifndef LINESINTERSECTION_H_INCLUDED
#define LINESINTERSECTION_H_INCLUDED

#include "Geometry/Primitives/Vector.h"
#include "Geometry/LinAlg/Determinant.h"
#include "Geometry/LinAlg/Matrix.h"
#include "Geometry/Primitives/Line.h"
#include "Intersection.h"

std::optional<Intersection> line_intersection(const Line<2>& K, const Line<2>& L);

#endif
