#include "Section.h"

bool point_on_section(const Point& P, const Section& O) {
    if ((P == O.B) || (P == O.A)) {
        return true;
    }

    const Vector2 d = O.B - O.A;
    const Vector2 r = P - O.A;

    return (((d.x / r.x) == (d.y / r.y)) && ((d.x / r.x) >= 0) && ((d.x / r.x) <= 1));
}

Point section_intersection(const Section& O, const Section& P) {
    const Line K{O.A, O.B};
    const Line L{P.A, P.B};

    const Point X = line_intersection(K, L);

    if (point_on_section(X, O) && point_on_section(X, P)) {
        return X;
    }
}
