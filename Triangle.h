#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Point.h"
#include <cmath>

class Triangle {
private:
    Point A, B, C;
public:

    Triangle(Point X, Point Y, Point Z);
    ~Triangle();

    bool is_belong(const Point& X);
    float len_side(const Point& X, const Point& Y);
    float square(const Point& X, const Point& Y, const Point& Z);
};

#endif // TRIANGLE_H_
