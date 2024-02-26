#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has been created with " << _hitPoints << " hit points, " << _energyPoints
			  << " energy points, and " << _attackDamage << " attack damage!" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &source)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this == &source)
		return (*this);
	ClapTrap::operator=(source);
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy! Attack not possible!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage
			  << " points of damage with a special attack!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered Gate keeper mode!" << std::endl;
}