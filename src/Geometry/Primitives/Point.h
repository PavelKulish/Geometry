#ifndef GEOMETRY_POINT_H_
#define GEOMETRY_POINT_H_

#include <array>

template<std::size_t n>
class Point {
    std::array<float, n> data_;
public:
     Point();
     Point(const std::array<float, n>& data);

     float operator[](std::size_t index) const;
     float& operator[](std::size_t index);
     const std::array<float, n>& data() const;

     float x() const;
     float y() const;
     float z() const;
};


#endif // GEOMETRY_POINT_H_
