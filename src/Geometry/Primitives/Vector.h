#ifndef GEOMETRY_VECTOR_H_
#define GEOMETRY_VECTOR_H_
#include <array>

#include "Point.h"

template<std::size_t n>
class Vector {
    std::array<float, n> data_;
public:
     Vector();
     Vector(const std::array<float, n>& data);

     float operator[](std::size_t index) const;
     float& operator[](std::size_t index);
     const std::array<float, n>& data() const;

     float x() const;
     float y() const;
     float z() const;
};

template<std::size_t d>
float dot(const Vector<d>& v1, const Vector<d>& v2);

template<std::size_t d>
Vector<d> operator+(const Vector<d>& v1, const Vector<d>& v2);

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1);

template<std::size_t d>
Vector<d> operator*(const Vector<d>& v, const float c);

template<std::size_t d>
Vector<d> operator*(const float c, const Vector<d>& v);

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1, const Vector<d>& v2);

template<std::size_t d>
Vector<d> operator-(const Point<d>& v1, const Point<d>& v2);

#endif // VECTOR_H_
