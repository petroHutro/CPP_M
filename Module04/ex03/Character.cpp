#include "Character.hpp"

Character::Character( std::string name ) : name(name)
{
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
}

Character::~Character( void )
{
	for (int i = 0; i < 4; i++)
		if (materials[i])
			delete materials[i];
}

std::string const	&Character::getName( void ) const
{
	return (this->name);
}

void	Character::equip( AMateria *material )
{
	for (int i = 0; i < 4; i++)
		if (!materials[i])
		{
			materials[i] = material;
			return ;
		}
}

void	Character::unequip( int idx )
{
	while (idx < 3)
	{
		materials[idx] = materials[idx + 1];
		idx++;
	}
	materials[idx] = NULL;

}

void	Character::use( int idx, ICharacter &target )
{
	if (idx < 4 && materials[idx])
		materials[idx]->use(target);
}
