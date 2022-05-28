#ifndef FIGURE_HPP_
#define FIGURE_HPP_

#include <string>
#include <typeinfo>

class Figure {
  public:
    explicit Figure(unsigned int dimension) : _dimension(dimension) { }
    unsigned int get_dimension() const noexcept { return _dimension; } 
    virtual const std::type_info& get_type() const noexcept = 0;  
    virtual std::string show() const noexcept = 0; 
    virtual ~Figure() {} 
  private:
    unsigned int _dimension; 
};

#endif  // FIGURE_HPP_
