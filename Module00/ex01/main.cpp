#include "PhoneBook.hpp"

int	work(PhoneBook *book)
{
	std::string	comand;

	std::cout << ">";
	std::getline(std::cin, comand);
	if (comand == "add")
		book->add_contact();
	else if (comand == "search")
		book->search_contact();
	else if (comand == "exit")
	{
		std::cout << "exit" << std::endl;
		return (0);
	}
	return (1);
}

int	main()
{
	PhoneBook	book;
	int			status = 1;

	while (status)
		status = work(&book);
}
