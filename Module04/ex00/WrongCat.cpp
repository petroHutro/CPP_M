#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal(copy)
{
	std::cout << "Copy WrongCat" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat &copy )
{
	WrongAnimal::operator=(copy);
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor WrongCat" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Sound WrongCat" << std::endl;
}
