#include "Dog.hpp"

Dog::Dog( void ) //: type("Dog")
{
	type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Sound Dog" << std::endl;
}
