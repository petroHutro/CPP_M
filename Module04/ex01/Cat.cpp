#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Constructor Cat" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal(copy)
{
	std::cout << "Copy Cat" << std::endl;
}

Cat&	Cat::operator=( const Cat &copy )
{

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
