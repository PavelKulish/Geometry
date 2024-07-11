#include "Vector2.h"

Vector2 operator-(const Point& X, const Point& Y) {
    return {X.x - Y.x, X.y - Y.y};
}
