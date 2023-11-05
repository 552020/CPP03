#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  // Create a ClapTrap instance named Clappy
  ClapTrap Clappy("Clappy");

  // Create a ScavTrap instance named Scavvy
  ScavTrap Scavvy("Scavvy");

  // Clappy performs some actions
  std::cout << "--- Clappy's Actions ---" << std::endl;
  Clappy.attack("a target dummy");
  Clappy.takeDamage(5);
  Clappy.beRepaired(4);

  // Scavvy performs some actions
  std::cout << "\n--- Scavvy's Actions ---" << std::endl;
  Scavvy.attack("an evil robot");
  Scavvy.takeDamage(20);
  Scavvy.beRepaired(15);

  // Scavvy attempts to enter Guard Mode
  std::cout << "\n--- Scavvy Enters Guard Mode ---" << std::endl;
  Scavvy.guardGate();

  return 0;
}
