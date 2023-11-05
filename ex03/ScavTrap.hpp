#ifndef SCARVTRAP_HPP
#define SCARVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &source);
  ~ScavTrap();
  ScavTrap &operator=(const ScavTrap &source);
  // Overriding the attack function
  // This is also virtual because DiamondTrap is overriding it
  virtual void attack(const std::string &target);

  void guardGate();
};
#endif