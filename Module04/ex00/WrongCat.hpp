#pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( const WrongCat &copy );

	WrongCat& operator=( const WrongCat &copy );

	void	makeSound( void ) const;

	~WrongCat( void );
};
