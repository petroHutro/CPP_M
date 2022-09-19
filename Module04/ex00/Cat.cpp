#include "Cat.hpp"

Cat::Cat( void ) //: type("Cat")
{
	type = "Cat";
	std::cout << "Constructor Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound Cat" << std::endl;
}
