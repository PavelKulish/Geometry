#include "gtest/gtest.h"
#include "Geometry/Primitives/Vector.h"
#include "Geometry/Primitives/Point.h"

TEST(POINT, POINT_DIFFERENCE) {
	Point<3> p1 = {{{{1, 2, 3}}}};
	Point<3> p2 = {{{{4, 5, 6}}}};
	Vector<3> res = p1 - p2;
	ASSERT_EQ(res(2), 3);
}








