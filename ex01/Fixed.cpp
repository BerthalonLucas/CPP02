#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _value(copy._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int integer) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer << _fractionalBits;
}

Fixed::Fixed(const float floating) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(floating * (1 << _fractionalBits));
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

float Fixed::toFloat(void) const {
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	if (this != &fixed) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_value = fixed._value;
	}
	return *this;
}