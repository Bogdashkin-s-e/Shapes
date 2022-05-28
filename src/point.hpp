#ifndef POINT_HPP_
#define POINT_HPP_

#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <typeinfo>

#include "figure.hpp"

template<typename ValueType, unsigned int Dimension>  
class Point : public Figure {
  public:
    Point();
    explicit Point(std::vector<ValueType> point); 

    void set(std::vector<ValueType> point);
    void set_at(ValueType value, unsigned int dimension);

    std::vector<ValueType> get() const noexcept;
    ValueType get_at(unsigned int dimension) const;

    const std::type_info& get_type() const noexcept override;
    std::string show() const noexcept override;
  private:
    std::vector<ValueType> _point;
};

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension>::Point() : Figure(Dimension), _point(std::vector<ValueType>(Dimension)) { }

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension>::Point(std::vector<ValueType> point) : Figure(Dimension) {
    if (point.size() != Dimension) {
        throw std::invalid_argument("Vector has another dimension");
    }
    _point = point;
}

template<typename ValueType, unsigned int Dimension>
void Point<ValueType, Dimension>::set(std::vector<ValueType> point) {
    if (point.size() != Dimension) {
        throw std::invalid_argument("Vector has another dimension");
    }
    _point = point;
}

template<typename ValueType, unsigned int Dimension>
void Point<ValueType, Dimension>::set_at(ValueType value, unsigned int dimension) {
    if (get_dimension <= dimension) {
        throw std::out_of_range("Provided dimension is not valid");
    }
    _point[dimension] = value;
} 

template<typename ValueType, unsigned int Dimension>
std::vector<ValueType> Point<ValueType, Dimension>::get() const noexcept {
    return _point;
}

template<typename ValueType, unsigned int Dimension>
ValueType Point<ValueType, Dimension>::get_at(unsigned int dimension) const {
    if (get_dimension <= dimension) {
        throw std::out_of_range("Provided dimension is not valid");
    }
    return _point[dimension];
}

template<typename ValueType, unsigned int Dimension>
const std::type_info& Point<ValueType, Dimension>::get_type() const noexcept {
    const std::type_info& info(typeid(ValueType));
    return info;
}

template<typename ValueType, unsigned int Dimension>
std::string Point<ValueType, Dimension>::show() const noexcept {
    std::stringstream buffer;
    buffer << "(";
    for (unsigned int i = 0; i < _point.size() - 1; i++) {
        buffer << _point[i] << ", ";
    }
    buffer << _point[_point.size() - 1] << ")";
    return buffer.str();
}

#endif  // POINT_HPP_
