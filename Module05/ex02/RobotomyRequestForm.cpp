#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void )
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

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
