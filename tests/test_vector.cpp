#include "gtest/gtest.h"
#include "Geometry/Primitives/Vector.h"
#include "Geometry/Primitives/Point.h"

TEST(VECTOR, CREATE_VECTOR) {
	Vector<2> v1 = {{1, 2}};
	ASSERT_EQ(v1[0], 1);
}

TEST(VECTOR, GETTER_VECTOR) {
	Vector<2> v1 = {{1, 2}};
	std::array<float, 2> buffer = v1.data();
	ASSERT_EQ(buffer[0], 1);
}

TEST(VECTOR, XYZ_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	float x = v1.x();
	float y = v1.y();
	float z = v1.z();
	ASSERT_EQ(x, 1);
	ASSERT_EQ(y, 2);
	ASSERT_EQ(z, 3);
}

TEST(VECTOR, DOT_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	Vector<3> v2 = {{3, 2, 1}};
	float res = dot(v1, v2);
	ASSERT_EQ(res, 10);
}

TEST(VECTOR, UNARY_MINUS_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	Vector<3> res = -v1;
	ASSERT_EQ(res[1], -2);
}

TEST(VECTOR, PLUS_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	Vector<3> v2 = {{3, 2, 1}};
	Vector<3> res = v1 + v2;
	ASSERT_EQ(res[1], 4);
}

TEST(VECTOR, BINARY_MINUS_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	Vector<3> v2 = {{3, 2, 1}};
	Vector<3> res = v1 - v2;
	ASSERT_EQ(res[1], 0);
}

TEST(VECTOR, MULTIPLY_VECTOR) {
	Vector<3> v1 = {{1, 2, 3}};
	float m = 2;
	Vector<3> res = m * v1;
	ASSERT_EQ(res[0], 2);
}

TEST(POINT, POINT_DIFFERENCE) {
	Point<3> p1 = {{{1, 2, 3}}};
	Point<3> p2 = {{{4, 5, 6}}};
	Vector<3> res = p1 - p2;
	ASSERT_EQ(res[2], -3);
}








