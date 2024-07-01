/*
Introduction and Explanation:
Polymorphism allows functions to operate on objects of different classes through a common interface. Static binding happens at compile-time, while dynamic binding happens at runtime.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function (static binding)" << endl;
    }
    virtual void display() {
        cout << "Base class display function (dynamic binding)" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function (static binding)" << endl;
    }
    void display() override {
        cout << "Derived class display function (dynamic binding)" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    b->show();    // Calls Base class show function (static binding)
    b->display(); // Calls Derived class display function (dynamic binding)
    return 0;
}

/*
Applications:
- Implementing polymorphic behavior in software design.
- Allowing functions to operate on objects of different classes through a common interface.

Summary:
Static and dynamic binding enable polymorphic behavior, allowing functions to be called based on the object type at compile-time or runtime.
*/
