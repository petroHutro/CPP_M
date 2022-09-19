#include "Point.hpp"

Point::Point( float const x, float const y ) : x(x), y(y)
{
}

Point::Point( void ) : x(0), y(0)
{
}

Point::Point( const Point &copy )
{
	this->x = copy.x;
	this->y = copy.y;
}

Point::~Point()
{
	// std::cout << "Destructor" << std::endl;
}

Point	&Point::operator = ( const Point &copy)
{
	this->x = copy.x;
	this->y = copy.y;
	return (*this);
}

Fixed	Point::getX() const
{
	return (this->x);
}

Fixed	Point::getY() const
{
	return (this->y);
}

std::ostream	&operator << ( std::ostream &out, const Point &point )
{
	out << "(" << point.getX() << ", " << point.getY() << ")";
	return (out);
}
