#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << "Constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy )
{
	std::cout << "Copy WrongAnimal" << std::endl;
	this->operator=(copy);
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal &copy )
{
	this->type=copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Sound WrongAnimal" << std::endl;
}
