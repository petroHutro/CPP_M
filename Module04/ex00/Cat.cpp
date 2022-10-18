#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "Copy Cat" << std::endl;
}

Cat&	Cat::operator=( const Cat &copy )
{
	Animal::operator=(copy);
	return (*this);
}

Cat::~Cat( void )
{
	std::cout << "Destructor Cat" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound Cat" << std::endl;
}
