#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "adress str: " << &str << std::endl;
	std::cout << "adress stringPTR: " << stringPTR << std::endl;
	std::cout << "adress stringREF: " << &stringREF << std::endl;

	std::cout << "val str: " << str << std::endl;
	std::cout << "val stringPTR: " << *stringPTR << std::endl;
	std::cout << "val stringREF: " << stringREF << std::endl;
}
