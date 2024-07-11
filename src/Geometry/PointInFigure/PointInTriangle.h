#ifndef PointInTriangle_H_INCLUDED
#define PointInTriangle_H_INCLUDED

#include "Geometry/Primitives/Vector2.h"
#include "Geometry/Primitives/Triangle.h"
#include "Geometry/LinAlg/Determinant.h"

bool is_belonged(const Point& X, const Triangle& triangle);

#endif // IS_POINT_BELONGED_H_INCLUDED
