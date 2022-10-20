#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	brain = NULL;
	operator=(copy);
	std::cout << "Copy Dog" << std::endl;
}

Dog&	Dog::operator=( const Dog &copy )
{
	if (brain)
		delete brain;
	brain = new Brain(*copy.brain);
	Animal::operator=(copy);
	return (*this);
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
