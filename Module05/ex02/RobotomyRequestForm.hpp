#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;

public:
	RobotomyRequestForm( void );
	~RobotomyRequestForm( void );

	void	execute(Bureaucrat const & executor) const;
};
