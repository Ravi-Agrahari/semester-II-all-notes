/*
Introduction and Explanation:
Inheritance is a fundamental concept in object-oriented programming that allows a class to inherit properties and methods from another class. It promotes code reuse and establishes a relationship between classes.

Types of Inheritance:
1. Single Inheritance
2. Multiple Inheritance
3. Hierarchical Inheritance
4. Multilevel Inheritance
5. Hybrid Inheritance

Example Programs (in C++):
*/

// Single Inheritance
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

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Specific to Dog
    return 0;
}

/*
Applications:
- Creating a hierarchy of classes where derived classes inherit and extend the functionality of base classes.
- Reusing existing code to avoid duplication.

Summary:
Inheritance allows classes to inherit properties and methods from other classes, promoting code reuse and establishing a relationship between classes.
*/
