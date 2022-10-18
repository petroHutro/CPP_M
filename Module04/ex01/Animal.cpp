#include "Animal.hpp"

Animal::Animal( std::string type ) : type(type)
{
	std::cout << "Constructor Animal" << std::endl;
}

Animal::Animal( const Animal &copy )
{
	std::cout << "Copy Animal" << std::endl;
	this->operator=(copy);
}

Animal& Animal::operator=( const Animal &copy )
{
	this->type=copy.type;
	return (*this);
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
