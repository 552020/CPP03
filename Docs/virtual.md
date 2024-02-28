# The **virtual** keyword

```cpp

#include <iostream>

class Animal {
public:
    virtual void speak() const {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() const override { // Overriding the base class function
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal* animalPtr = new Animal(); // Pointer to Animal
    Animal* dogPtr = new Dog(); // Pointer to Dog, but of type Animal*

    animalPtr->speak(); // Calls Animal::speak()
    dogPtr->speak(); // Calls Dog::speak(), because of dynamic polymorphism

    delete animalPtr; // Clean up
    delete dogPtr; // Clean up

	Animal animal;
	Dog dog;

	animal.speak(); // Calls Animal::speak()
	dog.speak(); // Calls Dog::speak() directly

    return 0;
}


```
