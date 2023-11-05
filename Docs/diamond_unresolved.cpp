#include <iostream>

class A {
public:
  int value;
};

class B : public A {};

class C : public A {};

class D : public B, public C {};

int main() {
  D obj;
  obj.B::value = 1; // Accessing A's value through B
  obj.C::value = 2; // Accessing A's value through C

  // Printing the values to show they are distinct
  std::cout << "B's value: " << obj.B::value << std::endl;
  std::cout << "C's value: " << obj.C::value << std::endl;

  return 0;
}
