#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrapRegistry;

class ClapTrap {
private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
  int countNameOccurrences(const std::string &baseName);

public:
  static ClapTrapRegistry &getRegistry();
  ClapTrap();
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &source);
  ClapTrap &operator=(const ClapTrap &source);
  ~ClapTrap();
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  // Getters and setters
  std::string getName() const;
  void setName(std::string name);
  int getHitPoints() const;
  void setHitPoints(int hitPoints);
  int getEnergyPoints() const;
  void setEnergyPoints(int energyPoints);
  int getAttackDamage() const;
  void setAttackDamage(int attackDamage);
  std::string getUniqueName(const std::string &baseName);
};
#endif