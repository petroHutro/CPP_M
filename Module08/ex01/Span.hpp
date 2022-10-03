#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	mass;
	size_t				size;

public:
	Span( size_t n );
	~Span( void );

	void	addNumber( int n );
	int		shortestSpan( void );
	int		longestSpan( void );
};
