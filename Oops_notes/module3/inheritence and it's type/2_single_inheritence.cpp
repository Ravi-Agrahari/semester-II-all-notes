/*
Introduction and Explanation:
Single inheritance is when a class (derived class) inherits from one base class. This is the simplest form of inheritance and is used to create a derived class that extends the functionality of a single base class.

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

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Specific to Dog
    return 0;
}

/*
Applications:
- Extending the functionality of a single class.
- Reusing existing code.

Summary:
Single inheritance allows a derived class to inherit from a single base class, promoting code reuse and extension of class functionality.
*/
