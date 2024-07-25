#include "gtest/gtest.h"
#include "Geometry/PointInFigure/PointInTriangle.h"


TEST(TRIANGLE, CREATE_TRIANGLE) {
    Point<2> A = {{{0, 0}}};
    Point<2> B = {{{10, 0}}};
    Point<2> C = {{{0, 10}}};
    Triangle ABC{A, B, C};
    ASSERT_EQ(ABC.B.r0.x(), 10);
    ASSERT_EQ(ABC.C.r0.y(), 10);
}

TEST(TRIANGLE, POINT_IN_TRIANGLE) {
    Point<2> A = {{{0, 0}}};
    Point<2> B = {{{10, 0}}};
    Point<2> C = {{{0, 10}}};
    Point<2> D = {{{1, 1}}};
    Triangle ABC{A, B, C};
    ASSERT_EQ(is_belonged(D, ABC), true);
}
