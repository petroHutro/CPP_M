#pragma once

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( const Cat &copy );

	Cat& operator=( const Cat &copy );

	void	makeSound( void ) const;

	~Cat( void );
};
