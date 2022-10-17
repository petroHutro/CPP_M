#pragma once

# include <iostream>

class Fixed
{
private:
	int					value;
	static const int	bits = 8;
	
public:
	Fixed( const Fixed &copy );
	Fixed( int value );
	Fixed( void );

	Fixed &operator = ( const Fixed &value );

	int	getRawBits( void ) const;
	void setRawBits( int const raw );

	~Fixed( void );
};
