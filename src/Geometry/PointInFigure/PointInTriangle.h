#ifndef PointInTriangle_H_INCLUDED
#define PointInTriangle_H_INCLUDED

#include "Geometry/Primitives/Vector.h"
#include "Geometry/Primitives/Triangle.h"
#include "Geometry/LinAlg/Determinant.h"
#include "Geometry/LinAlg/Matrix.h"

bool is_belonged(const Point<2>& X, const Triangle& triangle);

#endif // IS_POINT_BELONGED_H_INCLUDED
