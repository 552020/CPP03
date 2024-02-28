#include <iostream>
#include <string>

class Grandparent
{
  public:
	std::string grandparentName = "Grandparent";
};

class Parent : public Grandparent
{
};

class Child : public Parent
{
};

int main()
{
	Child myChild;

	// INCORRECT ATTEMPT (will cause compiler error):
	// std::cout << myChild.Parent::Grandparent::grandparentName << std::endl;

	// CORRECT WAYS:

	// Option 1: Direct access (since grandparentName is public)
	std::cout << "Direct access: " << myChild.grandparentName << std::endl;

	// Option 2: Add a getter to Parent or Grandparent (if needed)

	return 0;
}
