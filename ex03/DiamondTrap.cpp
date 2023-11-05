

#include "DiamondTrap.hpp"
// Default constructor
// Mind that this work only if the base class has a default constructor and also
// if ScavTrap and FragTrap have a default constructor
DiamondTrap::DiamondTrap()
    : ClapTrap("Deffy_clap_name"), ScavTrap(), FragTrap() {
  std::cout << "Default DiamonTrap constructor called" << std::endl;
  _name = "Deffy";
  _hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
}
// Parameter constructor
DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name),
      _name(name) {
  std::cout << "Parameter DiamonTrap constructor called" << std::endl;
  _hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
}
// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &source)
    : ClapTrap(source), ScavTrap(source), FragTrap(source) {
  std::cout << "Copy DiamonTrap constructor called" << std::endl;
  _name = source._name;
  _hitPoints = source._hitPoints;
  _energyPoints = source._energyPoints;
  _attackDamage = source._attackDamage;
}
// Copy assignment operator overload
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source) {
  std::cout << "DiamonTrap copy assignment operator called" << std::endl;
  if (this != &source) {
    _name = source._name;
    _hitPoints = source._hitPoints;
    _energyPoints = source._energyPoints;
    _attackDamage = source._attackDamage;
  }
  return *this;
}
// Destructor
DiamondTrap::~DiamondTrap() {
  std::cout << "DiamonTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
  std::cout << "My name is " << _name << " and my ClapTrap name is "
            << ClapTrap::_name << std::endl;
}