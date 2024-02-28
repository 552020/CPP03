#include <iostream>
#include <string>

class Grandparent
{
  public:
	std::string grandparentName;

	// C++98 Constructor
	Grandparent() : grandparentName("Grandparent")
	{
	}
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
	std::cout << "Accessing through the Child class: " << myChild.Parent::Grandparent::grandparentName << std::endl;

	std::cout << "Direct access: " << myChild.grandparentName << std::endl;
	std::string temp = myChild.Parent::Grandparent::grandparentName;
	std::cout << "Accessing through a temporary variable: " << temp << std::endl;

	return 0;
}
