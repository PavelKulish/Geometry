#include "gtest/gtest.h"
#include "Geometry/PointInFigure/PointInSimplex.h"


TEST(SIMPEX, CREATE_SIMPLEX) {
    Point<2> X{{{{1.5, 1.5}}}};
    Simplex<2> simplex{{{
        {{{{0, 0}}}},
        {{{{2, 0}}}},
        {{{{0, 2}}}}
    }}};
    ASSERT_EQ(simplex.data_[0], 0);
    ASSERT_EQ(simplex.data_[2], 2);
}

TEST(TRIANGLE, POINT_IN_TRIANGLE) {
    Point<2> X{{{{0.5, 0.5}}}};
    Simplex<2> simplex{{{
        {{{{0, 0}}}},
        {{{{2, 0}}}},
        {{{{0, 2}}}}
    }}};
    ASSERT_EQ(is_belonged(X, simplex), true);
}
