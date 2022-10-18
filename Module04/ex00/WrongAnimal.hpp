#pragma once

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal( std::string type = "No" );
	WrongAnimal( const WrongAnimal &copy );

	WrongAnimal& operator=( const WrongAnimal &copy );

	std::string		getType( void ) const;
	void	makeSound( void ) const;

	~WrongAnimal( void );
};
