#include "Fixed.hpp"


Fixed::Fixed( void )
{
	this->value = 0;
}

Fixed::Fixed( int value )
{
	this->value = (value << this->bits);
}

Fixed::Fixed( float value )
{
	this->value = roundf(value * (1 << this->bits));
}

Fixed::Fixed( const Fixed &copy )
{
	this->value = copy.getRawBits();
}

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
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

Fixed &Fixed::operator = ( const Fixed &fix)
{
	value = fix.getRawBits();
	return (*this);
}

bool	Fixed::operator > ( const Fixed &other ) const
{
	return (this->value > other.value);
}

bool	Fixed::operator < ( const Fixed &other ) const
{
	return (this->value < other.value);
}

bool	Fixed::operator >= ( const Fixed &other ) const
{
	return (this->value >= other.value);
}

bool	Fixed::operator <= ( const Fixed &other ) const
{
	return (this->value <= other.value);
}

bool	Fixed::operator == ( const Fixed &other ) const
{
	return (this->value == other.value);
}

bool	Fixed::operator != ( const Fixed &other ) const
{
	return (this->value != other.value);
}

Fixed	&Fixed::operator + ( const Fixed &other )
{
	this->value += other.value;
	return (*this);
}

Fixed	&Fixed::operator - ( const Fixed &other )
{
	this->value -= other.value;
	return (*this);
}

Fixed	&Fixed::operator * ( const Fixed &other )
{
	this->value = roundf((this->toFloat() * other.toFloat()) * (1 << this->bits));
	return (*this);	
}

Fixed	&Fixed::operator / ( const Fixed &other )
{
	this->value = roundf((this->toFloat() / other.toFloat()) * (1 << this->bits));
	return (*this);
}

Fixed	&Fixed::operator ++ ( void )
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	old(*this);
	this->value++;
	return (old);
}

Fixed	&Fixed::operator -- ( void )
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed	old(*this);
	this->value--;
	return (old);
}

Fixed		&Fixed::min( Fixed &a, Fixed &b )
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	return (a < b ? a : b);
}

Fixed		&Fixed::max( Fixed &a, Fixed &b )
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	return (a > b ? a : b);
}

std::ostream	&operator << ( std::ostream &out, const Fixed &fix )
{
	out << fix.toFloat();
	return (out);
}
