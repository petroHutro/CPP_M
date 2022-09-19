#include "Dog.hpp"

Dog::Dog( void ) //: Animal("Dog")
{
	brain = new Brain();
	type = "Dog";
	std::cout << "Constructor Dog" << std::endl;
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "Destructor Dog" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Sound Dog" << std::endl;
}
