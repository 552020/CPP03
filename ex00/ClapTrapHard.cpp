#include "ClapTrapHard.hpp"
#include "ClapTrapRegistry.hpp"

ClapTrapRegistry &ClapTrap::getRegistry()
{
	static ClapTrapRegistry registry;
	return registry;
}
// Default constructor
ClapTrap::ClapTrap() : _name("Deffy"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::string uniqueName = _name;
	int count = 1;
	while (getRegistry().getClapTrap(uniqueName) != NULL)
	{
		uniqueName = _name + "_" + std::to_string(count++);
	}
	_name = uniqueName;
	getRegistry().addClapTrap(_name, this);
	std::cout << "ClapTrap default constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
}
//  Constructor with name parameter
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::string uniqueName = name;
	int count = 1;
	while (getRegistry().getClapTrap(uniqueName) != NULL)
	{
		uniqueName = name + "_" + std::to_string(count++);
	}
	_name = uniqueName;
	getRegistry().addClapTrap(_name, this);
	std::cout << "ClapTrap name constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &source)
	: _name(source._name)
	, _hitPoints(source._hitPoints)
	, _energyPoints(source._energyPoints)
	, _attackDamage(source._attackDamage)
{
	getRegistry().addClapTrap(_name, this);
	std::cout << "ClapTrap copy constructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been created! " << std::endl;
	std::cout << "This is a copy of " << source._name << std::endl;
}
// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &source)
{
	if (this != &source)
	{
		// Remove the current instance from the registry before changing its name
		getRegistry().removeClapTrap(_name);

		// Generate a unique name for the copied ClapTrap
		_name = getUniqueName(source._name);
		_hitPoints = source._hitPoints;
		_energyPoints = source._energyPoints;
		_attackDamage = source._attackDamage;

		// Add the new instance to the registry with the new unique name
		getRegistry().addClapTrap(_name, this);

		std::cout << "ClapTrap copy assignment operator called" << std::endl;
		std::cout << "ClapTrap " << _name << " is now a copy of ClapTrap " << source._name << "!" << std::endl;
	}
	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	std::cout << "ClapTrap " << _name << " has been destroyed! " << std::endl;
}
// Member functions
void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy! Attack not possible!" << std::endl;
		return;
	}
	ClapTrap *targetObj = getRegistry().getClapTrap(target);
	if (targetObj == NULL)
	{
		std::cout << "ClapTrap " << _name << " doesn't know who " << target << " is!" << std::endl;
		std::cout << "Probably it is a ghost!" << std::endl;
	}
	else
	{
		// Call the takeDamage function on the target object
		targetObj->takeDamage(_attackDamage);
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage
				  << " points of damage!" << std::endl;
		if (targetObj->getHitPoints() <= 0)
		{
			std::cout << "ClapTrap " << target << " has been destroyed!" << std::endl;
		}
	}
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

		getRegistry().removeClapTrap(_name);
		std::cout << "ClapTrap " << _name << " has been destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired because it's destroyed!" << std::endl;
		return;
	}

	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " does not have enough energy to be repaired!" << std::endl;
		return;
	}

	if (_hitPoints >= 10)
	{
		std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints = _hitPoints + amount > 10 ? 10 : _hitPoints + amount;
	std::cout << "ClapTrap " << _name << " has been repaired!" << std::endl;
}

int ClapTrap::countNameOccurrences(const std::string &baseName)
{
	int count = 0;
	for (int i = 0; i < getRegistry().getUsedSize(); ++i)
	{
		const std::string currentName = getRegistry().getRegistryEntry(i)->name;
		// Check if the currentName starts with baseName
		if (currentName.compare(0, baseName.size(), baseName) == 0)
		{
			// Ensure that what follows the base name is either an underscore and a
			// number, or nothing else
			if (currentName.size() == baseName.size() ||
				(currentName.size() > baseName.size() && currentName[baseName.size()] == '_' &&
				 isdigit(currentName[baseName.size() + 1])))
			{
				++count;
			}
		}
	}
	return count;
}
int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
std::string ClapTrap::getUniqueName(const std::string &baseName)
{
	int occurrences = countNameOccurrences(baseName);
	char numberBuffer[10]; // Ensure this buffer is large enough for any integer
	snprintf(numberBuffer, sizeof(numberBuffer), "%d", occurrences + 1);
	return baseName + "_" + numberBuffer;
}
