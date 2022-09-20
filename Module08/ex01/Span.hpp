#include <iostream>

class Span
{
private:
	int	*mass;

public:
	Span( size_t n );
	~Span( void );

	void	addNumber( void );
};

Span::Span( size_t n )
{
	mass = new int [n];
}

Span::~Span( void )
{
	delete [] mass;
}

void	Span::addNumber( void )
{
	
}
