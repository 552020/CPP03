#include <iostream>
#include <string>

class Animal {
public:
  virtual void speak() const { std::cout << "Some animal noise" << std::endl; }
  virtual ~Animal() {}
};

class Dog : public Animal {
public:
  void speak() const { std::cout << "Woof!" << std::endl; }
};

class Cat : public Animal {
public:
  void speak() const { std::cout << "Meow!" << std::endl; }
};

void makeAnimalSpeak(const Animal &animal) {
  animal.speak(); // Calls the appropriate method depending on the actual object
                  // type
}

int main() {
  Dog dog;
  Cat cat;

  std::cout << "To demonstate runtime resolution, we will make an animal speak."
            << std::endl;

  std::cout << "Choose an animal to speal (dog/cat): ";
  std::string choice;
  std::cin >> choice;

  if (choice == "dog") {
    makeAnimalSpeak(dog);
  } else if (choice == "cat") {
    makeAnimalSpeak(cat);
  } else {
    std::cout << "Invalid choice" << std::endl;
  }
  return 0;
}