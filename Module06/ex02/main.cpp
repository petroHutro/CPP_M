#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate( void )
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		std::cout << "Creat A" << std::endl;
		return (new A);
	case 1:
		std::cout << "Creat B" << std::endl;
		return (new B);
	case 2:
		std::cout << "Creat C" << std::endl;
		return (new C);
	default:
		return nullptr;
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "NO" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	std::cout << "NO" << std::endl;

}

int	main( void )
{
	Base	*ob;
	ob = generate();
	identify(ob);
	identify(*ob);
	return (0);
}
