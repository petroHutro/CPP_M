#ifndef ANIMAl_HPP
# define ANIMAl_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal( void );
	virtual	~Animal( void );

	std::string		getType( void ) const;
	virtual void	makeSound( void ) const;

};

#endif