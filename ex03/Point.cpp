#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		(Fixed&)(_x) = other._x;
		(Fixed&)(_y) = other._y;
	}
	return *this;
}

Point::~Point() {}

Fixed Point::getX() const {
	return _x;
}

Fixed Point::getY() const {
	return _y;
}