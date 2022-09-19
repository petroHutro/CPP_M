#include "Fixed.hpp"


Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( int value )
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << this->bits);
}

Fixed::Fixed( float value )
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << this->bits));
}

Fixed::Fixed( const Fixed &copy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.getRawBits();
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = ( const Fixed &fix)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = fix.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

float	Fixed::toFloat( void ) const
{
	return (float(value) / (1 << bits));
}

int	Fixed::toInt( void ) const
{
	return (value >> bits);
}

std::ostream	&operator << ( std::ostream &out, const Fixed &fix )
{
	out << fix.toFloat();
	return (out);
}
