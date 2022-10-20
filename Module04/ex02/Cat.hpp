#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat( void );
	Cat( const Cat &copy );

	Cat& operator=( const Cat &copy );

	void	makeSound( void ) const;

	~Cat( void );
};
