#include "Cat.hpp"

Cat::Cat( void ) //: type("Cat")
{
	brain = new Brain();
	type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}

Cat::~Cat( void )
{
	delete brain;
	std::cout << "Destructor Cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound Cat" << std::endl;
}
