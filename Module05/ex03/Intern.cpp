#include "Intern.hpp"

Intern::Intern( void )
{}

Intern::Intern( Intern const &copy )
{
	*this = copy;
}

Intern	&Intern::operator=( Intern const &copy )
{
	// *this = copy;
	(void)copy;
	return (*this);
}

Intern::~Intern( void )
{}

Form	*Shrubbery(std::string name, std::string target)
{
	return (new ShrubberyCreationForm(name, target));
}

Form	*Robotomy(std::string name, std::string target)
{
	return (new RobotomyRequestForm(name, target));
}

Form	*Presidential(std::string name, std::string target)
{
	return (new PresidentialPardonForm(name, target));
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string	name_funk[3] = {
		"ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm"
	};

	Form	*(*funk[3])(std::string name, std::string target) = {
		&Shrubbery,
		&Robotomy,
		&Presidential
	};

	for (size_t i = 0; i < 3; i++)
	{
		if (name == name_funk[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (funk[i](name, target));
		}
	}

	throw Intern::FormNotKnownException();
	return NULL;
}

char const	*Intern::FormNotKnownException::what() const throw() 
{
	return "form not known";
}
