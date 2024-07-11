#include "Vector2.h"

Vector2 operator-(const Point& X, const Point& Y) {
    return {X.x - Y.x, X.y - Y.y};
}

float Determinant(const Vector2& v1, const Vector2& v2) {
    return (v1.x * v2.y - v1.y * v2.x);
}
