#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include <string>
#include <sstream>
#include <typeinfo>

#include "figure.hpp"
#include "point.hpp"
  
template<typename ValueType, unsigned int Dimension>
class Circle : public Figure {
  public:
    Circle(Point<ValueType, Dimension> center, ValueType radius);

    void set_center(Point<ValueType, Dimension> center) noexcept;
    void set_radius(ValueType radius) noexcept;
    Point<ValueType, Dimension> get_center() const noexcept;
    ValueType get_radius() const noexcept;

    const std::type_info& get_type() const noexcept override;
    std::string show() const noexcept override;
  private:
    Point<ValueType, Dimension> _center;
    ValueType _radius;
};

template<typename ValueType, unsigned int Dimension>
Circle<ValueType, Dimension>::Circle(Point<ValueType, Dimension> center, ValueType radius) :
    Figure(Dimension), _center(center), _radius(radius) { }

template<typename ValueType, unsigned int Dimension>
void Circle<ValueType, Dimension>::set_center(Point<ValueType, Dimension> center) noexcept {
    _center = center;
}

template<typename ValueType, unsigned int Dimension>
void Circle<ValueType, Dimension>::set_radius(ValueType radius) noexcept {
    _radius = radius;
}

template<typename ValueType, unsigned int Dimension>
Point<ValueType, Dimension> Circle<ValueType, Dimension>::get_center() const noexcept {
    return _center;
}

template<typename ValueType, unsigned int Dimension>
ValueType Circle<ValueType, Dimension>::get_radius() const noexcept {
    return _radius;
}

template<typename ValueType, unsigned int Dimension>
const std::type_info& Circle<ValueType, Dimension>::get_type() const noexcept {
    const std::type_info& info(typeid(ValueType));
    return info;
}

template<typename ValueType, unsigned int Dimension>
std::string Circle<ValueType, Dimension>::show() const noexcept {
    std::stringstream buffer;
    buffer << "Circle: " << _center.show() << ", radius: " << _radius;
    return buffer.str();
}

#endif  // CIRCLE_HPP_
