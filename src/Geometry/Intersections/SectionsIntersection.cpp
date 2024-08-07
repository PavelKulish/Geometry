#include "SectionsIntersection.h"


std::optional<Intersection> section_intersection(const Section<2>& O, const Section<2>& P) {
    const Line<2> l1{O.A, O.B - O.A};
    const Line<2> l2{P.A, P.B - P.A};

    const auto intersection = line_intersection(l1, l2);

    if (intersection.has_value() &&
        0 <= intersection->t1 && intersection->t1 <= 1 &&
        0 <= intersection->t2 && intersection->t2 <= 1) {
        return intersection;
    }

    return {};
}
