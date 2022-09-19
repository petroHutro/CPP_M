#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
	: Form("", 72, 45), target("")
{}

RobotomyRequestForm::RobotomyRequestForm( std::string name, std::string target )
	: Form(name, 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy )
	: Form(copy), target(copy.target)
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=( const RobotomyRequestForm &copy )
{
	if (this == &copy)
		return *this;
	this->target = copy.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignet())
		throw Form::SignedException();
	else if (this->getGrade_sing() >= executor.getGrade())
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	std::cout << "* drilling noises *" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << executor.getName() << " has been robotomized" << std::endl;
	else
		std::cout << executor.getName() << " the robotomy failed" << std::endl;
}
