#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap clappy("Clappy");
	ScavTrap scavvy("Scavvy");
	FragTrap fraggy("Fraggy");

	std::cout << std::endl;

	clappy.attack("a target");
	scavvy.attack("another target");
	fraggy.attack("yet another target");

	std::cout << std::endl;

	scavvy.guardGate();
	fraggy.highFivesGuys();

	std::cout << std::endl;

	return 0;
}
