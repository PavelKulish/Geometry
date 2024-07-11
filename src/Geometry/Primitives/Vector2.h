#ifndef GEOMETRY_VECTOR2_H_
#define GEOMETRY_VECTOR2_H_
#include "Point.h"

struct Vector2 {
    float x, y;
};

Vector2 operator-(const Point& X, const Point& Y);


float Determinant(const Vector2& v1, const Vector2& v2);

#endif // VECTOR2_H_
