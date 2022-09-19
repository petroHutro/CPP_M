#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		materials[i] = NULL;
}

MateriaSource::~MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		if (materials[i])
			delete materials[i];
}

void	MateriaSource::learnMateria(AMateria *material)
{
	for (int i = 0; i < 4; i++)
		if (!materials[i])
		{
			materials[i] = material->clone();
			return ;
		}
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; i++)
		if (materials[i] && materials[i]->getType() == type)
			return (materials[i]->clone());
	return (NULL);
}
