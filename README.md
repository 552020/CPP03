# CPP03

**C++ module for the core curriculum @42Berlin**

_Topics_:
- Inheritance

## 00: Aaaaaand... OPEN

Nothing new

## 01: Serena, my love!

### ClapTrap

We will modify `private` to `protected` in the ScavTrap class definition.

`private`, `protected` and `public` are keywords used in classes to specify the type of access to members (attributes and functions) of the class.

`public` will allow access from outside the class: the method or the attribute can be acessed from any part of the program.
`private` will firbid access from outside the class, only functions or members inside the class can access the private members. Exception are the `friends` of the class.
`protected`, like private, but the members are also accessible by derived classes (and by friends of the class)

### ScavTrap

```cpp
class ScavTrap : public ClapTrap
{

}
```

The access specifier (`public`, `protected`, `private`) in the inheritance declaration controls the access level of the inherited members in the derived class. It does not affect which members are inherited; all members (public, protected, and even private) are inherited by the derived class. However, it does affect the accessibility of these inherited members within the derived class and to users of the derived class. Here's how each specifier affects inheritance:

### Inheritcance

#### Types of inheritance: public, protected, private

1. Public Inheritance (`public`)

- **Public members** of the base class become public members of the derived class.
- **Protected members** of the base class become protected members of the derived class.
- **Private members** of the base class are inherited but remain inaccessible to the derived class directly (they can only be accessed through public or protected members/functions of the base class).

2. Protected Inheritance (`protected`)

- **Public and protected members** of the base class become protected members of the derived class.
- **Private members** are inherited but remain inaccessible to the derived class, similar to public inheritance.

3. Private Inheritance (`private`)

- **Public and protected members** of the base class become private members of the derived class.
- **Private members** are inherited but remain inaccessible to the derived class, just like in public and protected inheritance.

To clarify, the inheritance access specifier does not filter out members from being inherited based on their access level. Instead, it adjusts the access level of the inherited members in the context of the derived class. Here's a summary of how access levels are adjusted:

- **Public Inheritance**: Keeps the access levels of base class members unchanged (except for private members, which are always inaccessible directly).
- **Protected Inheritance**: Makes public and protected members of the base class protected in the derived class.
- **Private Inheritance**: Makes all inherited members private in the derived class.

It's also important to note that regardless of the type of inheritance, private members of the base class are never directly accessible by the derived class; they can only be accessed through methods (like getters/setters) provided by the base class that are public or protected.

####

- Because you can never have enough ClapTraps, you will now create a derived robot. It will be named ScavTrap and **will inherit the constructors and destructor from ClapTrap**.

### Header files matters in compilation
