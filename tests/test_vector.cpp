#include "gtest/gtest.h"
#include "Geometry/Primitives/Vector.h"
#include "Geometry/Primitives/Point.h"

TEST(VECTOR, XYZ_VECTOR) {
	Vector<3> v1 = {{{1, 2, 3}}};
	float x = v1.x();
	float y = v1.y();
	float z = v1.z();
	ASSERT_EQ(x, 1);
	ASSERT_EQ(y, 2);
	ASSERT_EQ(z, 3);
}


TEST(POINT, POINT_DIFFERENCE) {
	Point<3> p1 = {{{{1, 2, 3}}}};
	Point<3> p2 = {{{{4, 5, 6}}}};
	Vector<3> res = p1 - p2;
	ASSERT_EQ(res.data_(2), 3);
}








