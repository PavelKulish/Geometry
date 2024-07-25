#include "gtest/gtest.h"
#include "Geometry/LinAlg/Determinant.h"

TEST(MATRIX, CREATE_MATRIX) {
    std::array<float, 6> buffer = {1, 2, 3, 4, 5, 6};
    Matrix<2, 3> A{buffer};
    ASSERT_EQ(A[0], 1);
}

TEST(MATRIX, CREATE_MATRIX_1) {
    std::array<Vector<3>, 3> matrix = {
        Vector<3>({1, 0, 0}),
        Vector<3>({0, 1, 0}),
        Vector<3>({0, 0, 1}),
    };
    Matrix<3, 3> A{matrix};
    ASSERT_EQ(A[4], 1);
}

TEST(MATRIX, GETTER_MATRIX) {
	Matrix<1, 2> A = {{1, 2}};
	std::array<float, 2> buffer = A.data();
	ASSERT_EQ(buffer[0], 1);
}

TEST(MATRIX, DETERMINANT) {
    std::array<Vector<3>, 3> matrix = {
        Vector<3>({1, 0, 0}),
        Vector<3>({0, 2, 0}),
        Vector<3>({0, 0, 3}),
    };
    Matrix<3, 3> A{matrix};
    float result = Determinant(A);
	ASSERT_EQ(result, 6);
}


