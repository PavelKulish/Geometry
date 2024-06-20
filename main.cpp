#include "Point.h"
#include "Triangle.h"

int main() {
    Point A = {0.0, 0.0};
    Point B = {3.0, 0.0};
    Point C = {0.0, 0.4};
    Point P = {10.5, 0.5};

    Triangle ABC(A, B, C);
    std::cout << std::boolalpha << ABC.is_belong(P) << std::endl;
}
