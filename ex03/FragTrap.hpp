#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap &source);
  ~FragTrap();
  FragTrap &operator=(const FragTrap &source);
  // Overriding the attack function
  virtual void attack(const std::string &target);

  void highFivesGuys();
};

#endif