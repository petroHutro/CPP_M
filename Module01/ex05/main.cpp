#include "Harl.hpp"

int	main()
{
	std::string	levels[6] = {"DEBUG", "INFO", "WARNING", "ERROR", "QQQQQQ", ""};
	Harl g;

	for (int i = 0; i < 6; i++)
		g.complain(levels[i]);
}
