#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-"
				<< "cheese-triple-pickle-special-ketchup burger."
				<< "I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."
				<< " You didn’t put enough bacon in my burger! If you did,"
				<< " I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the "
				<< "manager now." << std::endl;
}

void	Harl::other( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain( std::string level )
{	
	std::string	levels[5] = {"DEBUG", "INFO", "WARNING", "ERROR", ""};
	void (Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int	i = 0;

	while (level.compare(levels[i]) && i < 4)
		i++;
	switch (i)
	{
	case 0:
		(this->*f[0])();
	
	case 1:
		(this->*f[1])();

	case 2:
		(this->*f[2])();

	case 3:
		(this->*f[3])();
		break;

	default:
		other();
		break;
	}
}
