#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*materials[4];

public:
	MateriaSource();
	~MateriaSource();

	void		learnMateria(AMateria *materials);
	AMateria	*createMateria(std::string const &type);
};

#endif
