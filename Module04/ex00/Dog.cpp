#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Constructor Dog" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal(copy)
{
	std::cout << "Copy Dog" << std::endl;
}

Dog&	Dog::operator=( const Dog &copy )
{
	Animal::operator=(copy);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Sound Dog" << std::endl;
}
