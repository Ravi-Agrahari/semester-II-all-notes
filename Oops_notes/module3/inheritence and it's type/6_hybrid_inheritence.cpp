/*
Introduction and Explanation:
Hybrid inheritance is a combination of two or more types of inheritance (single, multiple, hierarchical, or multilevel). It is used to create complex relationships among classes.

Example Program (in C++):
*/

#include <iostream>
using namespace std;

// Base class
class Engine {
public:
    void start() {
        cout << "Engine starts" << endl;
    }
};

// Base class
class Vehicle {
public:
    void accelerate() {
        cout << "Vehicle accelerates" << endl;
    }
};

// Derived class from both Engine and Vehicle
class Car : public Engine, public Vehicle {
public:
    void drive() {
        cout << "Car drives" << endl;
    }
};

// Derived class from Car
class SportsCar : public Car {
public:
    void turboBoost() {
        cout << "SportsCar activates turbo boost" << endl;
    }
};

int main() {
    SportsCar sc;
    sc.start();       // Inherited from Engine
    sc.accelerate();  // Inherited from Vehicle
    sc.drive();       // Inherited from Car
    sc.turboBoost();  // Specific to SportsCar
    return 0;
}

/*
Applications:
- Creating complex class hierarchies that combine multiple forms of inheritance.

Summary:
Hybrid inheritance combines different types of inheritance to create complex relationships among classes.
*/
