#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed( int value )
{
	this->value = value;
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

Fixed &Fixed::operator = ( const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

