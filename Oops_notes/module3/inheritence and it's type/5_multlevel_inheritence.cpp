/*
Introduction and Explanation:
Multilevel inheritance occurs when a class is derived from another derived class. This forms a chain of inheritance, where a derived class inherits from another derived class.

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

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Further derived class
class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps" << endl;
    }
};

int main() {
    Puppy p;
    p.eat();  // Inherited from Animal
    p.bark(); // Inherited from Dog
    p.weep(); // Specific to Puppy
    return 0;
}

/*
Applications:
- Extending the functionality of a derived class by creating further derived classes.

Summary:
Multilevel inheritance allows a class to be derived from another derived class, forming a chain of inheritance.
*/
