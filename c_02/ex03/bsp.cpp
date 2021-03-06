#include "Point.hpp"

float _area(Point const a, Point const b, Point const c)
{
   return abs((a.getX() * (b.getY()- c.getY()) + b.getX() * (c.getY() - a.getY())+ c.getX() * (a.getY()-b.getY()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A = _area(a, b, c);
	float A1 = _area(point, b, c);
	float A2 = _area(a, point, c);
	float A3 = _area (a, b, point);

	if (!A1 || !A2 || !A3)
		return (false);
	return (roundf(A) == roundf(A1 + A2 + A3));
}
