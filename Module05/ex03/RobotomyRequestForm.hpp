#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string name, std::string target );
	RobotomyRequestForm( const RobotomyRequestForm &copy );
	RobotomyRequestForm	&operator=( const RobotomyRequestForm &copy );
	~RobotomyRequestForm( void );

	void	execute(Bureaucrat const & executor) const;
};
