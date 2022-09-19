#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
 
int main() 
{
	{
		Weapon	club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{	
		Weapon  club_1 = Weapon("crude spiked club");
		Weapon  club_2 = Weapon("other type");

		HumanB jim("Jim");
		jim.setWeapon(club_1);
		jim.attack();
		club_1.setType("some other type of club");
		jim.attack();
		jim.setWeapon(club_2);
		jim.attack();
	}
	return 0; 
}