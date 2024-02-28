#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "***ClapTrap clappy(\"Clappy\");***" << std::endl;
	ClapTrap clappy("Clappy");

	std::cout << "\n***ClapTrap trappy(\"Trappy\");***" << std::endl;
	ClapTrap trappy("Trappy");

	std::cout << "\n***clappy.attack(\"Trappy\");***" << std::endl;
	clappy.attack("Trappy");

	std::cout << "\n***trappy.takeDamage(20);***" << std::endl;
	trappy.takeDamage(20);

	std::cout << "\n***trappy.beRepaired(10);***" << std::endl;
	trappy.beRepaired(10);

	std::cout << "\n***clappy.attack(\"ClapTrap_Two\");***" << std::endl;
	clappy.attack("ClapTrap_Two");

	std::cout << "\nClapTrap fuffy = clappy;" << std::endl;
	ClapTrap fuffy = clappy;

	std::cout << "\nfuffy's name (the name of the object) 'fuffy' is " << fuffy.getName() << std::endl;
	std::cout << "\n***fuffy.setName(\"Fuffy\");***" << std::endl;
	fuffy.setName("Fuffy");
	std::cout << "fuffy's name (the name of the fuffy object) is " << fuffy.getName() << std::endl;

	std::cout << "\n***fuffy.attack(\"Trappy\");***" << std::endl;
	fuffy.attack("Trappy");

	std::cout << "\nDestructor for clappy, trappy, and fuffy will be called now!";

	return 0;
}
