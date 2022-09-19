#ifndef FIXED_HPP
# define FIXED_HPP

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
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed	&operator = ( const Fixed &fix );

	bool	operator > ( const Fixed &other ) const;
	bool	operator < ( const Fixed &other ) const;
	bool	operator >= ( const Fixed &other ) const;
	bool	operator <= ( const Fixed &other ) const;
	bool	operator == ( const Fixed &other ) const;
	bool	operator != ( const Fixed &other ) const;

	Fixed	&operator + ( const Fixed &other );
	Fixed	&operator - ( const Fixed &other );
	Fixed	&operator * ( const Fixed &other );
	Fixed	&operator / ( const Fixed &other );

	Fixed	&operator ++ ( void );
	Fixed	operator ++ ( int );
	Fixed	&operator -- ( void );
	Fixed	operator -- ( int );

	static Fixed		&min( Fixed &a, Fixed &b );
	static const Fixed	&min( const Fixed &a, const Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static const Fixed	&max( const Fixed &a, const Fixed &b );

};

std::ostream	&operator << ( std::ostream &out, const Fixed &fix );

#endif
