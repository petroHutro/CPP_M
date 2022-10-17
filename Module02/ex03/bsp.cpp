#include "Point.hpp"

// (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
// (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
// (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

// Fixed	equation( Point const &v_1, Point const &v_2, Point const &p )
// {
// 	return ((v_1.getX()) - p.getX() * (v_2.getY() - v_1.getY()) - (v_2.getX() - v_1.getX()) * (v_1.getY() - p.getY()));
// }

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	rez_1, rez_2, rez_3;

	rez_1 =	(a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	rez_2 =	(b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	rez_3 =	(c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

	std::cout << "a=" << rez_1 << std::endl;
	std::cout << "b=" << rez_2 << std::endl;
	std::cout << "c=" << rez_3 << std::endl;

	return ((rez_1 > 0 && rez_2 > 0 && rez_3 > 0) || (rez_1 < 0 && rez_2 < 0 && rez_3 < 0));
}