#ifndef VECTOR_H_
#define VECTOR_H_
#include <array>

template<std::size_t n>
class Vector {
    std::array<float, n> data_;
public:
     Vector() = default;
     Vector(const std::array<float, n>& data) : data_{data} {};

     float operator[](std::size_t index) const {
        return data_[index];
     }
     float& operator[](std::size_t index) {
        return data_[index];
     }
     const std::array<float, n>& data() const {
        return data_;
     }

     float x() const {
        static_assert(n > 0);
        return data_[0];
     }
     float y() const {
        static_assert(n > 1);
        return data_[1];
     }
     float z() const {
        static_assert(n > 2);
        return data_[2];
     }
};

template<std::size_t d>
float dot(const Vector<d>& v1, const Vector<d>& v2) {
    float result = 0;
	for(std::size_t i = 0; i < d; ++i){
      result += v1[i] * v2[i];
    }
    return result;
}

template<std::size_t d>
Vector<d> operator+(const Vector<d>& v1, const Vector<d>& v2) {
    Vector<d> result;
	for(std::size_t i = 0; i < d; ++i){
      result[i] = v1[i] + v2[i];
    }
    return result;
}

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1) {
 	Vector<d> result;
  	for(std::size_t i = 0; i < d; ++i){
    	result[i] = -v1[i];
    }
  	return result;
}

template<std::size_t d>
Vector<d> operator*(const Vector<d>& v, const float c) {
 	Vector<d> result;
  	for(std::size_t i = 0; i < d; ++i){
    	result[i] = c * v[i];
    }
  	return result;
}

template<std::size_t d>
Vector<d> operator*(const float c, const Vector<d>& v) {
    return v * c;
}

template<std::size_t d>
Vector<d> operator-(const Vector<d>& v1, const Vector<d>& v2) {
    Vector<d> result;
	for(std::size_t i = 0; i < d; ++i){
      result[i] = v1[i] - v2[i];
    }
    return result;
}


#endif // VECTOR_H_
