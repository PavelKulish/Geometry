#ifndef VECTOR_H_
#define VECTOR_H_

#include "Geometry/LinAlg/Matrix.h"

template<std::size_t n>
using Vector = Matrix<1, n>;

#endif // VECTOR_H_
