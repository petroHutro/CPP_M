#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void )
	: Form("", 25, 5), target("")
{}

PresidentialPardonForm::PresidentialPardonForm( std::string name, std::string target )
	: Form(name, 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy )
	: Form(copy), target(copy.target)
{}

PresidentialPardonForm	&PresidentialPardonForm::operator=( const PresidentialPardonForm &copy )
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignet())
		throw Form::SignedException();
	else if (this->getGrade_sing() >= executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
