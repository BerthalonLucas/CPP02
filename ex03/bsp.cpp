#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	// Calculate the centre of the triangle
	Point centre((a.getX() + b.getX() + c.getX()) / 3,
				   (a.getY() + b.getY() + c.getY()) / 3);

	// calculate the vectoriel product of the point and the centre for segment AB
	// for see if of which side of the triangle the point ande the centre is
	Fixed vector_pointAB = (b.getX() - a.getX()) * (point.getY() - a.getY()) -
						 (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed vector_centreAB = (b.getX() - a.getX()) * (centre.getY() - a.getY()) -
							(b.getY() - a.getY()) * (centre.getX() - a.getX());

	// the same for the segment BC
	Fixed vector_pointBC = (c.getX() - b.getX()) * (point.getY() - b.getY()) -
						 (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed vector_centreBC = (c.getX() - b.getX()) * (centre.getY() - b.getY()) -
							(c.getY() - b.getY()) * (centre.getX() - b.getX());

	// the same for the segment CA
	Fixed vector_pointCA = (a.getX() - c.getX()) * (point.getY() - c.getY()) -
						 (a.getY() - c.getY()) * (point.getX() - c.getX());
	Fixed vector_centreCA = (a.getX() - c.getX()) * (centre.getY() - c.getY()) -
							(a.getY() - c.getY()) * (centre.getX() - c.getX());

	//and after that we check if the point and the centre are on the same side for each segments
	if ((vector_pointAB >= 0 && vector_centreAB >= 0 &&
		 vector_pointAB >= 0 && vector_centreAB >= 0 &&
		 vector_pointBC >= 0 && vector_centreBC >= 0) ||
		(vector_pointBC <= 0 && vector_centreBC <= 0 &&
		 vector_pointCA <= 0 && vector_centreCA <= 0 &&
		 vector_pointCA <= 0 && vector_centreCA <= 0))
		return true;
	return false;
}