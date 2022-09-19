#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*materials[4];

public:
	Character( std::string name );
	~Character( void );

	std::string const	&getName( void ) const;
	void				equip( AMateria *material );
	void				unequip( int idx );
	void				use( int idx, ICharacter &target );
};

#endif
