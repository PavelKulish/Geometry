#include "Point.h"
#include "Triangle.h"
#include "Vector2.h"
#include <iostream>


int main() {
    Point A = {0.0, 0.0};
    Point B = {13.0, 0.0};
    Point C = {0.0, 14.14};
    Point P = {1.5, 1.5};

    Triangle triangle{A, B, C};
    std::cout << std::boolalpha << is_belonged(P, triangle) << std::endl;
}
