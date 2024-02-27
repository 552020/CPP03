#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "ClapTrap clappy(\"Clappy\");" << std::endl;
	ClapTrap clappy("Clappy");
	std::cout << "\nClapTrap trappy(\"Trappy\");" << std::endl;
	ClapTrap trappy("Trappy");
	std::cout << "\nclappy.attack(\"Trappy\");" << std::endl;
	clappy.attack("Trappy");
	std::cout << "\ntrappy.takeDamage(20);" << std::endl;
	trappy.takeDamage(20);
	std::cout << "\ntrappy.beRepaired(10);" << std::endl;
	trappy.beRepaired(10);
	std::cout << "\nclappy.attack(\"ClapTrap_Two\");" << std::endl;
	clappy.attack("ClapTrap_Two");
	std::cout << "\nClapTrap fuffy = clappy;" << std::endl;
	ClapTrap fuffy = clappy;
	std::cout << "\nfuffy's name (the name of the object) 'fuffy' is " << fuffy.getName() << std::endl;
	std::cout << "\nfuffy.setName(\"Fuffy\");" << std::endl;
	fuffy.setName("Fuffy");
	std::cout << "fuffy's name (the name of the fuffy object) is " << fuffy.getName() << std::endl;
	std::cout << "\nfuffy.attack(\"Trappy\");" << std::endl;
	fuffy.attack("Trappy");
	// When Trappy is destroyed also Clanppy_Two is destroyed

	return 0;
}
