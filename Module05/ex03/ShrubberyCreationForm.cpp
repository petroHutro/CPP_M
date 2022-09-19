#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void )
	: Form("", 145, 137), target("")
{}

ShrubberyCreationForm::ShrubberyCreationForm( std::string name, std::string target )
	: Form(name, 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy )
	: Form(copy), target(copy.target)
{}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &copy )
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignet())
		throw Form::SignedException();
	else if (this->getGrade_sing() >= executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << " file " << std::endl;//дописать дерево в файл
}
