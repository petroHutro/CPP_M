#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed	x;
	Fixed	y;

public:
	Point( float const x, float const y);
	Point( const Point &copy );
	Point( void );
	~Point();

	Point	&operator = ( const Point &copy);
	Fixed	getX() const;
	Fixed	getY() const;

};

bool			bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream	&operator << ( std::ostream &out, const Point &point );

#endif
