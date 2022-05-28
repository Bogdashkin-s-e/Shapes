#ifndef SPACE_HPP_
#define SPACE_HPP_

#include <iostream>
#include <vector>
#include <stdexcept>
#include <typeinfo>

#include "figure.hpp"

template<typename ValueType, unsigned int Dimension>
class Space {
  public:
    Space();
    Space(const Space<ValueType, Dimension>&) = delete;
    Space<ValueType, Dimension>& operator=(const Space<ValueType, Dimension>&) = delete;

    void add_figure(Figure* obj);
    void delete_figure(unsigned int number);

    void show() const noexcept;   
    void show(unsigned int number) const;  

    unsigned int get_actual_size() const noexcept { return _actual_size; } 

    ~Space();
  private:
    bool does_figure_belong(Figure* obj) const noexcept;

    std::vector<Figure*> _storage;
    unsigned int _actual_size;
    unsigned int _max_size;
};

template<typename ValueType, unsigned int Dimension>
Space<ValueType, Dimension>::Space() : _actual_size(0), _max_size(100), _storage(100) { }

template<typename ValueType, unsigned int Dimension>
void Space<ValueType, Dimension>::add_figure(Figure* obj) {
    if (obj == nullptr) {
        throw std::invalid_argument("Null is not expected");
    }
    if (!does_figure_belong(obj)) {
        throw std::invalid_argument("Figure does not belong to current space");
    }
    if (_actual_size == _max_size) {
        _max_size *= 2;
        _storage.resize(_max_size);
    }
    _storage[_actual_size] = obj;
    _actual_size++;
}

template<typename ValueType, unsigned int Dimension>
void Space<ValueType, Dimension>::delete_figure(unsigned int number) {
    if (_actual_size <= number) {
        throw std::out_of_range("Space does not contain figure with provided number");
    }
    _actual_size--;
    delete _storage[number];
    _storage[number] = _storage[_actual_size];
    _storage[_actual_size] = nullptr;
}

template<typename ValueType, unsigned int Dimension>
void Space<ValueType, Dimension>::show() const noexcept {
    for (unsigned int i = 0; i < _actual_size; i++) {
        std::cout << _storage[i]->show() << std::endl;
    }               
}

template<typename ValueType, unsigned int Dimension>
void Space<ValueType, Dimension>::show(unsigned int number) const {
    if (_actual_size <= number) {
        throw std::out_of_range("Space does not contain figure with provided number");
    }
    std::cout << _storage[number]->show() << std::endl;
}

template<typename ValueType, unsigned int Dimension>
Space<ValueType, Dimension>::~Space() {
    for (unsigned int i = 0; i < _actual_size; i++) {
        delete _storage[i];
        _storage[i] = nullptr;
    }
    _actual_size = 0;
    _max_size = 0;
}

template<typename ValueType, unsigned int Dimension>
bool Space<ValueType, Dimension>::does_figure_belong(Figure* obj) const noexcept {
    return typeid(ValueType) == obj->get_type() && Dimension == obj->get_dimension(); 
}                                                  

#endif  // SPACE_HPP_
