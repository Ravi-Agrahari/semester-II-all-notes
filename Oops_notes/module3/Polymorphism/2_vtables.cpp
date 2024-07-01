/*
Introduction and Explanation:
A virtual function table (vtable) is used to resolve function calls in dynamic polymorphism. Each class with virtual functions has its own vtable.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->display(); // Calls Derived class display function via vtable
    delete b;
    return 0;
}

/*
Applications:
- Enabling runtime polymorphism in object-oriented programming.
- Supporting dynamic method dispatch in C++.

Summary:
Virtual function tables (vtables) support dynamic method dispatch, enabling runtime polymorphism.
*/
