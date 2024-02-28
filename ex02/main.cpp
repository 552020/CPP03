#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "***ClapTrap clappy(\"Clappy\");***" << std::endl;
	ClapTrap clappy("Clappy");
	std::cout << "\n***ScavTrap scavvy(\"Scavvy\");***" << std::endl;
	ScavTrap scavvy("Scavvy");
	std::cout << "\n***FragTrap fraggy(\"Fraggy\");***" << std::endl;
	FragTrap fraggy("Fraggy");

	std::cout << std::endl;

	std::cout << "\n***clappy.attack(\"a target\");***" << std::endl;
	clappy.attack("a target");
	std::cout << "\n***scavvy.attack(\"another target\");***" << std::endl;
	scavvy.attack("another target");
	std::cout << "\n***fraggy.attack(\"yet another target\");***" << std::endl;
	fraggy.attack("yet another target");

	std::cout << std::endl;

	std::cout << "\n***scavvy.guardGate();***\n";
	scavvy.guardGate();
	std::cout << "\n***fraggy.highFivesGuys();***\n";
	fraggy.highFivesGuys();

	std::cout << std::endl;

	std::cout << "\n***Destructor for clappy, scavvy, and fraggy will be called now!***" << std::endl;

	return 0;
}
