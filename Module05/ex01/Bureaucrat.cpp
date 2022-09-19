#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name), grade(grade)
{
	if (grade < 1 )
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName( void ) const
{
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade( void )
{
	if (--grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::decrementGrade( void )
{
	if (++grade < 1)
		throw GradeTooHighException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

void	Bureaucrat::signForm( Form &form ) const
{
	try
	{
		form.beSigned(*this);
		std::cerr << this->name << " signed " << form.getName() << ".\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << this->name << " couldn\u0080t sign " << form.getName() << " because " << e.what() << ".\n";
	}
}


std::ostream	&operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}
