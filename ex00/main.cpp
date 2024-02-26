#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap clappy("Clappy");
	ClapTrap trappy("Trappy");

	clappy.attack("Trappy");

	trappy.takeDamage(20);

	trappy.beRepaired(10);

	clappy.attack("ClapTrap_Two");

	ClapTrap fuffy = clappy;

	fuffy.attack("Trappy");

	return 0;
}
