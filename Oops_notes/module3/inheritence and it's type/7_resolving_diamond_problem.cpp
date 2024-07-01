/*
Introduction and Explanation:
The diamond problem occurs in multiple inheritance scenarios when a derived class inherits from two classes that have a common base class. This can cause ambiguity as to which base class's properties or methods should be inherited. Virtual inheritance is used to resolve this issue by ensuring that only one instance of the base class is inherited, regardless of how many times it appears in the inheritance hierarchy.

Example Program (in C++):
*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

// Intermediate base class 1 with virtual inheritance
class Mammal : virtual public Animal {
public:
    void breathe() {
        cout << "Mammal breathes" << endl;
    }
};

// Intermediate base class 2 with virtual inheritance
class WingedAnimal : virtual public Animal {
public:
    void flap() {
        cout << "WingedAnimal flaps" << endl;
    }
};

// Derived class
class Bat : public Mammal, public WingedAnimal {
public:
    void fly() {
        cout << "Bat flies" << endl;
    }
};

int main() {
    Bat b;
    b.eat();    // Inherited from Animal (via virtual inheritance)
    b.breathe();// Inherited from Mammal
    b.flap();   // Inherited from WingedAnimal
    b.fly();    // Specific to Bat
    return 0;
}

/*
Applications:
- Ensuring clear and unambiguous inheritance hierarchies in complex multiple inheritance scenarios.
- Preventing the duplication of base class instances in derived classes.

Summary:
The diamond problem in multiple inheritance can be resolved using virtual inheritance, which ensures that only one instance of a common base class is inherited, eliminating ambiguity and preventing redundancy.
*/
