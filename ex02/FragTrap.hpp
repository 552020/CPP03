#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &source);
	~FragTrap();
	FragTrap &operator=(const FragTrap &source);
	// Overriding the attack function
	void attack(const std::string &target);

	void highFivesGuys();
};