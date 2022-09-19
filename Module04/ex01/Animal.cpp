#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Constructor Animal" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Destructor Animal" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Sound Animal" << std::endl;
}
