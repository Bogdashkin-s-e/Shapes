#ifndef TRIANGLE_HPP_
#define TRIANGLE_HPP_

#include <string>
#include <sstream>
#include <typeinfo>

#include "figure.hpp"
#include "point.hpp"
  
template<typename ValueType, unsigned int Dimension>
class Triangle: public Figure {
  public:
    Triangle(Point<ValueType, Dimension> first, Point<ValueType, Dimension> second, Point<ValueType, Dimension> third);

    void set_first(Point<ValueType, Dimension> first) noexcept;
    void set_second(Point<ValueType, Dimension> second) noexcept;
    void set_third(Point<ValueType, Dimension> third) noexcept;
    Point<ValueType, Dimension> get_first() const noexcept;
    Point<ValueType, Dimension> get_second() const noexcept;
    Point<ValueType, Dimension> get_third() const noexcept;

    const std::type_info& get_type() const noexcept override;
    std::string show() const noexcept override;
  private:
    Point<ValueType, Dimension> _first;
    Point<ValueType, Dimension> _second;
    Point<ValueType, Dimension> _third;
};

template<typename ValueType, unsigned int Dimension>
Triangle<ValueType, Dimension>::Triangle(Point<ValueType, Dimension> first, Point<ValueType, Dimension> second, Point<ValueType, Dimension> third) :
    Figure(Dimension), _first(first), _second(second), _third(third) { }

template<typename ValueType, unsigned int Dimension>
void Triangle<ValueType, Dimension>::set_first(Point<ValueType, Dimension> first) noexcept {
    _first = first;
}

template<typename ValueType, unsigned int Dimension>
void Triangle<ValueType, Dimension>::set_second(Point<ValueType, Dimension> second) noexcept {
    _second = second;
}

template<typename ValueType, unsigned int Dimension>
void Triangle<ValueType, Dimension>::set_third(Point<ValueType, Dimension> third) noexcept {
    _third = third;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Triangle<ValueType, Dimension>::get_first() const noexcept {
    return _first;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Triangle<ValueType, Dimension>::get_second() const noexcept {
    return _second;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Triangle<ValueType, Dimension>::get_third() const noexcept {
    return _second;
}

template<typename ValueType, unsigned int Dimension>
const std::type_info& Triangle<ValueType, Dimension>::get_type() const noexcept {
    const std::type_info& info(typeid(ValueType));
    return info;
}

template<typename ValueType, unsigned int Dimension>
std::string Triangle<ValueType, Dimension>::show() const noexcept {
    std::stringstream buffer;
    buffer << "Triangle: " << _first.show() << ", " << _second.show() << ", " << _third.show();
    return buffer.str();
}

#endif  // TRIANGLE_HPP_
