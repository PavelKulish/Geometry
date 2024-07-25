#include "gtest/gtest.h"
#include "Geometry/Intersections/SectionsIntersection.h"

TEST(INTERSECTIONS, LINES_INTERSECTION) {
    Point<2> A{{{0.0, 0.0}}};
    Point<2> B{{{1.0, 1.0}}};
    Point<2> C{{{1.0, 1.0}}};
    Point<2> D{{{4.0, 0.0}}};

    Vector<2> vk = A - B;
    Vector<2> vl = C - D;

    Line<2> K{A, vk};
    Line<2> L{C, vl};
    const auto intersection = line_intersection(K, L);
    ASSERT_EQ(intersection->t1, -1);
    ASSERT_EQ(intersection->t2, 0);
}

TEST(INTERSECTIONS, SECTIONS_INTERSECTION) {
    Point<2> A{{{0.0, 0.0}}};
    Point<2> B{{{1.0, 1.0}}};
    Point<2> C{{{1.0, 1.0}}};
    Point<2> D{{{4.0, 0.0}}};

    Section<2> K{A,B};
    Section<2> L{C, D};
    const auto intersection = section_intersection(K, L);
    ASSERT_EQ(intersection->t1, 1);
    ASSERT_EQ(intersection->t2, 0);
}

