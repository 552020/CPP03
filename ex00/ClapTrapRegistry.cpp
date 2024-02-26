#include "ClapTrapRegistry.hpp"

// Default constructor
ClapTrapRegistry::ClapTrapRegistry() : _registry(new ClapTrapRegistryEntry[10]), _totalSize(10), _usedSize(0) {};
// Destructor
ClapTrapRegistry::~ClapTrapRegistry()
{
	delete[] _registry;
};
// Copy constructor
ClapTrapRegistry::ClapTrapRegistry(const ClapTrapRegistry &source)
	: _registry(new ClapTrapRegistryEntry[source._totalSize])
	, _totalSize(source._totalSize)
	, _usedSize(source._usedSize)
{
	for (int i = 0; i < _usedSize; i++)
	{
		_registry[i] = source._registry[i];
	}
};
// Copy assignment operator
ClapTrapRegistry &ClapTrapRegistry::operator=(const ClapTrapRegistry &source)
{
	if (this != &source)
	{
		delete[] _registry;
		_registry = new ClapTrapRegistryEntry[source._totalSize];
		_totalSize = source._totalSize;
		_usedSize = source._usedSize;
		for (int i = 0; i < _usedSize; i++)
		{
			_registry[i] = source._registry[i];
		}
	}
	return *this;
};
void ClapTrapRegistry::addClapTrap(const std::string &name, ClapTrap *instance)
{
	if (_usedSize >= _totalSize)
	{
		ClapTrapRegistryEntry *newRegistry = new ClapTrapRegistryEntry[_totalSize + 10];
		for (int i = 0; i < _totalSize; i++)
		{
			newRegistry[i] = _registry[i];
		}
		delete[] _registry;
		_registry = newRegistry;
		_totalSize += 10;
	}
	_registry[_usedSize].name = name;
	_registry[_usedSize].instance = instance;
	_usedSize++;
}
ClapTrap *ClapTrapRegistry::getClapTrap(const std::string &name)
{
	for (int i = 0; i < _usedSize; i++)
	{
		if (_registry[i].name == name)
		{
			return _registry[i].instance;
		}
	}
	return NULL;
};
void ClapTrapRegistry::removeClapTrap(const std::string &name)
{
	for (int i = 0; i < _usedSize; i++)
	{
		if (_registry[i].name == name)
		{
			_registry[i] = _registry[_usedSize - 1];
			_registry[_usedSize - 1].name = "";
			_registry[_usedSize - 1].instance = NULL;
			_usedSize--;
			return;
		}
	}
}
int ClapTrapRegistry::getUsedSize() const
{
	return _usedSize;
}
int ClapTrapRegistry::getTotalSize() const
{
	return _totalSize;
}
void ClapTrapRegistry::setUsedSize(int usedSize)
{
	_usedSize = usedSize;
}
void ClapTrapRegistry::setTotalSize(int totalSize)
{
	_totalSize = totalSize;
}
ClapTrapRegistryEntry *ClapTrapRegistry::getRegistryEntry(int i) const
{
	return &_registry[i];
}
void ClapTrapRegistry::setRegistryEntry(int i, ClapTrapRegistryEntry entry)
{
	_registry[i] = entry;
}