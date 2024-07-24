#include "src/Geometry/Intersections/LinesIntersection.h"

#include <iostream>


int main() {
    /*std::array<Vector<3>, 3> matrix = {
        Vector<3>({1, 0, 0}),
        Vector<3>({0, 1, 0}),
        Vector<3>({0, 0, 1}),
    };

    Matrix<3, 3> A{matrix};
    std::cout << "Determinant: " << det(A) << std::endl;*/
    Point<2> A{{{0.0, 0.0}}};
    Point<2> B{{{1.0, 1.0}}};
    Point<2> C{{{1.0, 1.0}}};
    Point<2> D{{{4.0, 0.0}}};

    Vector<2> vk = A - B;
    Vector<2> vl = C - D;

    Line<2> K{A, vk};
    Line<2> L{C, vl};

    const auto intersection = line_intersection(K, L);
    if (intersection.has_value()){
        std::cout << intersection->t1 << " ; " << intersection->t2 << std::endl;
    }
    //std::cout << "ANABHABAG" << std::endl;

    return 0;
}
