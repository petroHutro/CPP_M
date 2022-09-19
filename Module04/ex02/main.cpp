#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << "Cat type: " << i->getType() << " " << std::endl;
	std::cout << "Dog type: " << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << "\n\n";

	delete i;
	delete j;
	return 0;
}