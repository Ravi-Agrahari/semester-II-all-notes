/*
Introduction and Explanation:
Hierarchical inheritance occurs when multiple derived classes inherit from a single base class. This is useful for creating a class hierarchy where several classes share a common base class.

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

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.eat();  // Inherited from Animal
    d.bark(); // Specific to Dog
    c.eat();  // Inherited from Animal
    c.meow(); // Specific to Cat
    return 0;
}

/*
Applications:
- Creating a class hierarchy where multiple derived classes share a common base class.

Summary:
Hierarchical inheritance allows multiple derived classes to inherit from a single base class, promoting code reuse and shared functionality.
*/
