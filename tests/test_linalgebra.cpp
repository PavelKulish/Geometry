#include "gtest/gtest.h"
#include "Geometry/LinAlg/Determinant.h"

TEST(MATRIX, CREATE_MATRIX) {
    std::array<float, 6> buffer = {1, 2, 3, 4, 5, 6};
    Matrix<2, 3> A{buffer};
    ASSERT_EQ(A(0), 1);
}

TEST(MATRIX, CREATE_MATRIX_1) {
    std::array<Matrix<1, 3>, 3> matrix = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({1, 1, 0}),
        Matrix<1, 3>({1, 0, 1}),
    };
    Matrix<3, 3> A{matrix};
    ASSERT_EQ(A(4), 1);
}

TEST(MATRIX, GETTER_MATRIX) {
	Matrix<1, 2> A = {{1, 2}};
	std::array<float, 2> buffer = A.data();
	ASSERT_EQ(buffer[0], 1);
}

TEST(MATRIX, DETERMINANT) {
    std::array<Matrix<1, 3>, 3> matrix = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    Matrix<3, 3> A{matrix};
    float result = Determinant(A);
	ASSERT_EQ(result, 6);
}

TEST(MATRIX, ADDITION_MATRIX) {
    std::array<Matrix<1, 3>, 3> matrix0 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    std::array<Matrix<1, 3>, 3> matrix1 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    Matrix<3, 3> A{matrix0};
    Matrix<3, 3> B{matrix1};
    Matrix<3, 3> C = A + B;
	ASSERT_EQ(C(8), 12);
}

TEST(MATRIX, UNARY_MINUS_MATRIX) {
    std::array<Matrix<1, 3>, 3> matrix0 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    Matrix<3, 3> A{matrix0};
    Matrix<3, 3> C = -A;
	ASSERT_EQ(C(8), -6);
}

TEST(MATRIX, MULTIPLY_NUMBER_MATRIX) {
    std::array<Matrix<1, 3>, 3> matrix0 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    Matrix<3, 3> A{matrix0};
    Matrix<3, 3> C = 5 * A;
	ASSERT_EQ(C(8), 30);
}

TEST(MATRIX, DIFFERENCE_MATRIX) {
    std::array<Matrix<1, 3>, 3> matrix0 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    std::array<Matrix<1, 3>, 3> matrix1 = {
        Matrix<1, 3>({1, 0, 0}),
        Matrix<1, 3>({0, 1, 0}),
        Matrix<1, 3>({0, 0, 6}),
    };
    Matrix<3, 3> A{matrix0};
    Matrix<3, 3> B{matrix1};
    Matrix<3, 3> C = A - B;
    ASSERT_EQ(C(8), 0);
}

TEST(MATRIX, MULTIPLY_MATRIX) {
    std::array<Matrix<1, 3>, 3> matrix0 = {
        Matrix<1, 3>({1, 1, 1}),
        Matrix<1, 3>({1, 1, 1}),
        Matrix<1, 3>({1, 1, 1}),
    };
    std::array<Matrix<1, 3>, 3> matrix1 = {
        Matrix<1, 3>({2, 2, 2}),
        Matrix<1, 3>({2, 2, 2}),
        Matrix<1, 3>({2, 2, 2}),
    };
    Matrix<3, 3> A{matrix0};
    Matrix<3, 3> B{matrix1};
    Matrix<3, 3> C = A * B;
    ASSERT_EQ(C(8), 6);
}

TEST(MATRIX, TRANSPONSE_MATRIX) {
    std::array<Matrix<1, 1>, 3> matrix = {
        Matrix<1, 1>({1}),
        Matrix<1, 1>({2}),
        Matrix<1, 1>({3}),
    };
    Matrix<3, 1> A{matrix};
    Matrix<1, 3> C =  transponse(A);
    ASSERT_EQ(C(2), 3);
}

