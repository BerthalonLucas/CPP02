#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void) {
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(4), Fixed(0));
	Point c(Fixed(4), Fixed(6));
	Point point(Fixed(2), Fixed(2));

	if (bsp(a, b, c, point))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point is outside the triangle" << std::endl;
	return 0;
}