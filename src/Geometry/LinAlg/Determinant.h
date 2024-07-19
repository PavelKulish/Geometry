#ifndef DETERMINANT_H_INCLUDED
#define DETERMINANT_H_INCLUDED

#include "Geometry/Primitives/Vector.h"
#include "Matrix.h"

float Determinant(const Matrix<1, 1>& matr);

template<std::size_t M, std::size_t N>
float Determinant(const Matrix<M, N>& matr);


#endif // DETERMINANT_H_INCLUDED
