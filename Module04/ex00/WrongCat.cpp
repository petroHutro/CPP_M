#include "WrongCat.hpp"

WrongCat::WrongCat( void ) //: type("Cat")
{
	type = "WrongCat";
	std::cout << "Constructor WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Sound WrongCat" << std::endl;
}
