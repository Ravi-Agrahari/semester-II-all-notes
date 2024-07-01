/*
Introduction and Explanation:
An abstract class cannot be instantiated and usually contains at least one pure virtual function. It provides a base class that other classes can derive from to implement the abstract methods.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

// Abstract Base class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Circle c;
    Square s;
    c.draw();
    s.draw();
    return 0;
}

/*
Applications:
- Defining a common interface for a group of derived classes.
- Enforcing a contract for derived classes to implement specific methods.

Summary:
Abstract classes provide a base for derived classes to implement abstract methods, promoting consistent implementation of required functions.
*/
