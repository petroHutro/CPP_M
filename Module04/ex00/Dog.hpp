#pragma once

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( const Dog &copy );

	Dog& operator=( const Dog &copy );

	void	makeSound( void ) const;

	~Dog();
};
