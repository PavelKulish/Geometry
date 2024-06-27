#include "Section.h"

bool point_on_section(const Point& P, const Section& O) {
    /*if ((P == O.B) || (P == O.A)) {
        return true;
    }*/

    const Vector2 d = O.B - O.A;
    const Vector2 r = P - O.A;

    if ((r.x == 0) && (r.y == 0)) {
        return true;
    }

    return (((d.x / r.x) == (d.y / r.y)) && ((d.x / r.x) >= 0) && ((d.x / r.x) <= 1));
}

Point section_intersection(const Section& O, const Section& P) {
    const Vector2 vO = O.B - O.A;
    const Vector2 vP = P.B - P.A;

    const Line K{O.A, vO};
    const Line L{P.A, vP};

    const Point X = line_intersection(K, L);

    if (point_on_section(X, O) && point_on_section(X, P)) {
        return X;
    }
}
