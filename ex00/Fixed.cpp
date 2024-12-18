#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    if (this != &fixed) {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_value = fixed._value;
    }
    return *this;
}