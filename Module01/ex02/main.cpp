#include <iostream>

int	main()
{
	std::string	str_1 = "HI THIS IS BRAIN";
	std::string	*str_2 = &str_1;
	std::string	&str_3 = str_1;

	std::cout << "adress str_1:" << &str_1 << std::endl;
	std::cout << "adress str_2:" << str_2 << std::endl;
	std::cout << "adress str_3:" << &str_3 << std::endl;

	std::cout << "val str_1:" << str_1 << std::endl;
	std::cout << "val str_2:" << *str_2 << std::endl;
	std::cout << "val str_3:" << str_3 << std::endl;
}
