#include "Determinant.h"

float Determinant(const Vector2& v1, const Vector2& v2) {
    return (v1.x * v2.y - v1.y * v2.x);
}
