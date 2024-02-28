#include "ClapTrap.hpp"

// It is not clear if we should have a default constructor or not
ClapTrap::ClapTrap() : _name("Deffy"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &source)
	: _name(source._name)
	, _hitPoints(source._hitPoints)
	, _energyPoints(source._energyPoints)
	, _attackDamage(source._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
	std::cout << "This is a copy of " << source._name << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		_name = source._name;
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;
		std::cout << "ClapTrap copy assignment operator called" << std::endl;
		std::cout << "ClapTrap " << _name << " is now a copy of ClapTrap " << source._name << "!" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been destroyed! " << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name
				  << " can't do anything: No hit points of energy points left! Attack not possible!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"
			  << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		std::cout << "You can't kill what's already dead!" << std::endl;
		return;
	}
	if ((int)amount > _hitPoints)
	{
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " does not have enough energy to be repaired!" << std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired because it's destroyed!" << std::endl;
		return;
	}
	// It's not stated that the hit points can't be more than 10
	if (_hitPoints >= 10)
	{
		std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints = _hitPoints + amount > 10 ? 10 : _hitPoints + amount;
	std::cout << "ClapTrap " << _name << " has been repaired!" << std::endl;
}

// Getters and setters
std::string ClapTrap::getName() const
{
	return _name;
}
void ClapTrap::setName(std::string name)
{
	_name = name;
}
int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
void ClapTrap::setHitPoints(int hitPoints)
{
	_hitPoints = hitPoints;
}
int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints)
{
	_energyPoints = energyPoints;
}
int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}
void ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}