#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Constructor WrongAnimal" << std::endl;
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
