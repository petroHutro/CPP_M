#include "Span.hpp"

Span::Span( size_t n ) : size(n)
{}

Span::~Span( void )
{}

void	Span::addNumber( int n )
{
	if (mass.size() >= size)
		throw std::length_error("Full.");
	mass.push_back(n);
	sort(mass.begin(), mass.end());
}

int	Span::shortestSpan( void )
{
	if (mass.size() < 2)
		throw std::length_error("Low.");
	int	min = INT32_MAX;
	int	temp;
	for (size_t i = 0; i < mass.size() - 1; i++)
	{
		temp = mass[i + 1] - mass[i];
		if (temp > 0 && temp < min)
			min = temp;
	}
	return (min);
}

int	Span::longestSpan( void )
{
	if (mass.size() < 2)
		throw std::length_error("Low.");
	return(*mass.crbegin() - *mass.begin());
}
