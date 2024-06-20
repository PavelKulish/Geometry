#include "Triangle.h"
Triangle::Triangle(Point X, Point Y, Point Z) {
    this->A = X;
    this->B = Y;
    this->C = Z;
}

Triangle::~Triangle() {

}

float Triangle::len_side(const Point& X, const Point& Y) {
    return std::sqrt((X.x - Y.x) * (X.x - Y.x) + (X.y - Y.y) * (X.y - Y.y));
}

float Triangle::square(const Point& X, const Point& Y, const Point& Z) {
    float AB = len_side(this->A, this->B);
    float AC = len_side(this->A, this->C);
    float BC = len_side(this->C, this->B);
    float half_per = 0.5 * (AB + AC + BC);
    return std::sqrt(half_per * (half_per - AB) * (half_per - AC) * (half_per - BC));
}

bool Triangle::is_belong(const Point& X) {
    if ((square(X, this->A, this->B) + square(X, this->B, this->C) + square(X, this->A, this->C)) == square(this->A, this->B, this->C)) {
        return true;
    }
    return false;
}
