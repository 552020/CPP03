#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	std::cout << "\n--- Creating the robots ---\n";
	std::cout << "\n***ClapTrap clappy(\"Clappy\");***\n";
	ClapTrap clappy("Clappy");
	std::cout << "\n***ScavTrap scavvy(\"Scavvy\");***\n";
	ScavTrap scavvy("Scavvy");
	std::cout << "\n***FragTrap fraggy(\"Fraggy\");***\n";
	FragTrap fraggy("Fraggy");
	std::cout << "\n***DiamondTrap diammy(\"Diammy\");***\n";
	DiamondTrap diammy("Diammy");
	std::cout << "\n***diammy.whoAmI();***\n";
	diammy.whoAmI();

	std::cout << std::endl;

	// Clappy's actions
	std::cout << "\n--- Clappy's Actions ---\n";
	clappy.attack("a target dummy");
	clappy.takeDamage(20);
	clappy.beRepaired(10);

	std::cout << std::endl;
	std::cout << "\n--- Scavvy's Actions ---\n";

	scavvy.attack("another target");
	scavvy.takeDamage(20);
	scavvy.beRepaired(10);
	scavvy.guardGate();

	std::cout << std::endl;

	// Fraggy's actions
	std::cout << "\n--- Fraggy's Actions ---\n";

	fraggy.attack("yet another target");
	fraggy.takeDamage(20);
	fraggy.beRepaired(10);
	fraggy.highFivesGuys();

	std::cout << std::endl;
	std::cout << "\n--- Diammy's Actions ---\n";
	diammy.whoAmI();
	diammy.attack("a target dummy");
	diammy.takeDamage(20);
	diammy.beRepaired(10);
	diammy.highFivesGuys();

	std::cout << std::endl;
	std::cout << "\n--- Destructors ---\n";

	return 0;
}
