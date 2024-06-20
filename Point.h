#ifndef POINT_H_
#define POINT_H_
#include <iostream>
struct Point {
    float x, y;

    Point& operator=(const Point& other) {
        x = other.x;
        y = other.y;
        return *this;
    }
};

#endif // POINT_H_
