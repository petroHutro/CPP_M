#pragma once

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
	
public:
	Fixed( const Fixed &copy );
	Fixed( int value );
	Fixed( float value );
	Fixed( void );

	Fixed	&operator = ( const Fixed &fix );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	~Fixed( void );
};

std::ostream	&operator << ( std::ostream &out, const Fixed &fix );
