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
	std::cout << "\n***clappy.attack(\"a target dummy\");***\n";
	clappy.attack("a target dummy");
	std::cout << "\n***clappy.takeDamage(5);***\n";
	clappy.takeDamage(20);
	std::cout << "\n***clappy.beRepaired(10);***\n";
	clappy.beRepaired(10);

	std::cout << std::endl;
	std::cout << "\n--- Scavvy's Actions ---\n";

	std::cout << "\n***scavvy.attack(\"another target\");***\n";
	scavvy.attack("another target");
	std::cout << "\n***scavvy.takeDamage(20);***\n";
	scavvy.takeDamage(20);
	std::cout << "\n***scavvy.beRepaired(10);***\n";
	scavvy.beRepaired(10);
	std::cout << "\n***scavvy.guardGate();***\n";
	scavvy.guardGate();

	std::cout << std::endl;

	// Fraggy's actions
	std::cout << "\n--- Fraggy's Actions ---\n";

	std::cout << "\n***fraggy.attack(\"yet another target\");***\n";
	fraggy.attack("yet another target");
	std::cout << "\n***fraggy.takeDamage(20);***\n";
	fraggy.takeDamage(20);
	std::cout << "\n***fraggy.beRepaired(10);***\n";
	fraggy.beRepaired(10);
	std::cout << "\n***fraggy.highFivesGuys();***\n";
	fraggy.highFivesGuys();

	std::cout << std::endl;

	// Diammy's actions
	std::cout << "\n--- Diammy's Actions ---\n";
	std::cout << "\n***diammy.whoAmI();***\n";
	diammy.whoAmI();
	std::cout << "\n***diammy.attack(\"a target dummy\");***\n";
	diammy.attack("a target dummy");
	std::cout << "\n***diammy.takeDamage(20);***\n";
	diammy.takeDamage(20);
	std::cout << "\n***diammy.beRepaired(10);***\n";
	diammy.beRepaired(10);
	std::cout << "\n***diammy.guardGate();***\n";
	diammy.guardGate();
	std::cout << "\n***diammy.highFivesGuys();***\n";
	diammy.highFivesGuys();

	std::cout << std::endl;
	std::cout << "\n--- Destructors ---\n";

	return 0;
}
