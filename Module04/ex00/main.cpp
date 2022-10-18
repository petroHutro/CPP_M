#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Animal type: " << meta->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	delete meta;
	delete cat;
	delete dog;

	std::cout << "\n\n";

	WrongAnimal* wrongmeta = new WrongAnimal();
	WrongAnimal* wrongcat = new WrongCat();

	wrongcat->makeSound();
	wrongmeta->makeSound();
	
	std::cout << "WrongAnimal type: " << wrongmeta->getType() << " " << std::endl;
	std::cout << "WrongCat type: " << wrongcat->getType() << " " << std::endl;

	delete wrongcat;
	delete wrongmeta;
	return 0;
}
