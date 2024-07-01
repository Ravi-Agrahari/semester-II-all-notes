/*
Introduction and Explanation:
Multiple inheritance allows a derived class to inherit from more than one base class. This enables a class to combine the functionality of multiple classes.

Example Program (in C++):
*/

#include <iostream>
using namespace std;

// Base class 1
class Engine {
public:
    void start() {
        cout << "Engine starts" << endl;
    }
};

// Base class 2
class Radio {
public:
    void playMusic() {
        cout << "Radio plays music" << endl;
    }
};

// Derived class
class Car : public Engine, public Radio {
public:
    void drive() {
        cout << "Car drives" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start();      // Inherited from Engine
    myCar.playMusic();  // Inherited from Radio
    myCar.drive();      // Specific to Car
    return 0;
}

/*
Applications:
- Combining functionalities from multiple base classes into a single class.

Summary:
Multiple inheritance allows a derived class to inherit from multiple base classes, enabling the combination of functionalities.
*/
