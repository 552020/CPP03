#ifndef CLAPTRAP_REGISTRY_HPP
#define CLAPTRAP_REGISTRY_HPP
#include <iostream>

class ClapTrap;

struct ClapTrapRegistryEntry
{
	std::string name;
	ClapTrap *instance;
};

class ClapTrapRegistry
{

  private:
	ClapTrapRegistryEntry *_registry;
	int _totalSize;
	int _usedSize;

  public:
	ClapTrapRegistry();
	~ClapTrapRegistry();
	ClapTrapRegistry(const ClapTrapRegistry &source);
	ClapTrapRegistry &operator=(const ClapTrapRegistry &source);
	void addClapTrap(const std::string &name, ClapTrap *instance);
	ClapTrap *getClapTrap(const std::string &name);

	void removeClapTrap(const std::string &name);
	int getUsedSize() const;
	int getTotalSize() const;
	void setUsedSize(int usedSize);
	void setTotalSize(int totalSize);
	ClapTrapRegistryEntry *getRegistryEntry(int i) const;
	void setRegistryEntry(int i, ClapTrapRegistryEntry entry);
};

#endif