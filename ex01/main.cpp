#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// Create a ClapTrap instance named Clappy
	std::cout << "***ClapTrap Clappy(\"Clappy\");***" << std::endl;
	ClapTrap Clappy("Clappy");

	// Create a ScavTrap instance named Scavvy
	std::cout << "\n***ScavTrap Scavvy(\"Scavvy\");***" << std::endl;
	ScavTrap Scavvy("Scavvy");

	// Clappy performs some actions
	std::cout << "--- Clappy's Actions ---" << std::endl;
	std::cout << "\n***Clappy.attack(\"a target dummy\");***" << std::endl;
	Clappy.attack("a target dummy");
	std::cout << "\n***Clappy.takeDamage(5);***" << std::endl;
	Clappy.takeDamage(5);
	std::cout << "\n***Clappy.beRepaired(4);***" << std::endl;
	Clappy.beRepaired(4);

	// Scavvy performs some actions
	std::cout << "\n--- Scavvy's Actions ---" << std::endl;
	std::cout << "\n***Scavvy.attack(\"an evil robot\");***" << std::endl;
	Scavvy.attack("an evil robot");
	std::cout << "\n***Scavvy.takeDamage(20);***" << std::endl;
	Scavvy.takeDamage(20);
	std::cout << "\n***Scavvy.beRepaired(15);***" << std::endl;
	Scavvy.beRepaired(15);

	// Scavvy attempts to enter Guard Mode
	std::cout << "\n--- Scavvy Enters Guard Mode ---" << std::endl;
	std::cout << "\n***Scavvy.guardGate();***" << std::endl;
	Scavvy.guardGate();

	std::cout << "\n--- Destructor for Clappy and Scavvy will be called now! ---" << std::endl;

	return 0;
}
