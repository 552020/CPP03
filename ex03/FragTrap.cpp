#include "FragTrap.hpp"

FragTrap::FragTrap() {
  std::cout << "FragTrap default constructor called" << std::endl;
};
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap " << _name << " has been created with " << _hitPoints
            << " hit points, " << _energyPoints << " energy points, and "
            << _attackDamage << " attack damage!" << std::endl;
};
FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source) {
  std::cout << "FragTrap copy constructor called" << std::endl;
};
FragTrap &FragTrap::operator=(const FragTrap &source) {
  std::cout << "FragTrap assignment operator called" << std::endl;
  if (this == &source)
    return (*this);
  ClapTrap::operator=(source);
  return (*this);
};
FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called" << std::endl;
};
void FragTrap::highFivesGuys() {
  std::cout << "FragTrap " << _name << " is requesting a high five!"
            << std::endl;
};

void FragTrap::attack(const std::string &target) {
  // Your implementation here
  std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
            << _attackDamage << " points of damage!" << std::endl;
}