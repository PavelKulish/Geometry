#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Point.h"
#include "Vector2.h"


struct Triangle {
    Point A, B, C;
};

bool is_belonged(const Point& X, const Triangle& triangle);
#endif // TRIANGLE_H_
