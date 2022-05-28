#ifndef LINE_HPP_
#define LINE_HPP_

#include <string>
#include <sstream>
#include <typeinfo>

#include "figure.hpp"
#include "point.hpp"

template<typename ValueType, unsigned int Dimension>
class Line : public Figure {
  public:
    Line(Point<ValueType, Dimension> first, Point<ValueType, Dimension> second);

    void set_first(Point<ValueType, Dimension> first) noexcept;
    void set_second(Point<ValueType, Dimension> second) noexcept;
    Point<ValueType, Dimension> get_first() const noexcept;
    Point<ValueType, Dimension> get_second() const noexcept;

    const std::type_info& get_type() const noexcept override;
    std::string show() const noexcept override;
  private:
    Point<ValueType, Dimension> _first;
    Point<ValueType, Dimension> _second;
};

template<typename ValueType, unsigned int Dimension>
Line<ValueType, Dimension>::Line(Point<ValueType, Dimension> first, Point<ValueType, Dimension> second) :
    Figure(Dimension), _first(first), _second(second) { }

template<typename ValueType, unsigned int Dimension>
void Line<ValueType, Dimension>::set_first(Point<ValueType, Dimension> first) noexcept {
    _first = first;
}

template<typename ValueType, unsigned int Dimension>
void Line<ValueType, Dimension>::set_second(Point<ValueType, Dimension> second) noexcept {
    _second = second;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Line<ValueType, Dimension>::get_first() const noexcept {
    return _first;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Line<ValueType, Dimension>::get_second() const noexcept {
    return _second;
}

template<typename ValueType, unsigned int Dimension>
const std::type_info& Line<ValueType, Dimension>::get_type() const noexcept {
    const std::type_info& info(typeid(ValueType));
    return info;
}

template<typename ValueType, unsigned int Dimension>
std::string Line<ValueType, Dimension>::show() const noexcept {
    std::stringstream buffer;
    buffer << "Line: " << _first.show() << ", " << _second.show();
    return buffer.str();
}

#endif  // LINE_HPP_
