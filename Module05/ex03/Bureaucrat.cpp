#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) : name("No name"), grade(150)
{}

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name), grade(grade)
{
	if (grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(  const Bureaucrat &copy ) : name(copy.name), grade(copy.grade)
{}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat &copy )
{
	grade = copy.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{}

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
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrementGrade( void )
{
	if (++grade < 1)
		throw Bureaucrat::GradeTooHighException();
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
		// std::cerr << this->name << " couldn\u0080t sign " << form.getName() << " because " << e.what() << ".\n";
		std::cerr << this->name << " couldn't sign " << form.getName() << " because " << e.what() << ".\n";

	}
}

void	Bureaucrat::executeForm( Form const & form )
{
	form.execute(*this);
	std::cout << this->name << " executed " << form.getName() << std::endl;
}

std::ostream	&operator << (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}
