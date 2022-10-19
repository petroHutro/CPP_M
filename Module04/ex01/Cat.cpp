#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	brain = NULL;
	operator=(copy);
	std::cout << "Copy Cat" << std::endl;
}

Cat&	Cat::operator=( const Cat &copy )
{
	if (brain)
		delete brain;
	brain = new Brain(*copy.brain);
	Animal::operator=(copy);
	return (*this);
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
