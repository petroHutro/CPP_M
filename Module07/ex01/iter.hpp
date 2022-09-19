#include <iostream>

template <typename T>
void	iter(T *mass, size_t n, void (*f)(T const &))
{
	for (size_t i = 0; i < n; i++)
	{
		f(mass[i]);
	}	
}
