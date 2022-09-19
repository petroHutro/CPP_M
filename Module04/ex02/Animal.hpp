#ifndef ANIMAl_HPP
# define ANIMAl_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal( void );
	virtual	~Animal( void ) = 0;

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const = 0;

};

#endif