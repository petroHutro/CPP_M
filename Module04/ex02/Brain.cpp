#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Constructor Brain" << std::endl;
}

Brain::Brain( const Brain &copy )
{
	operator=(copy);
	std::cout << "Copy Brain" << std::endl;
}

Brain&	Brain::operator=( const Brain &copy )
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain( void )
{
	std::cout << "Destructor Brain" << std::endl;
}
