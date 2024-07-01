
/*
Introduction and Explanation:
Type casting allows converting one data type to another. C++ provides various cast operators: static_cast, dynamic_cast, const_cast, and reinterpret_cast.

Example Programs (in C++):
*/

#include <iostream>
using namespace std;

int main() {
    // static_cast
    int a = 10;
    double b = static_cast<double>(a);
    cout << "static_cast: " << b << endl;

    // dynamic_cast
    class Base {
        virtual void func() {}
    };
    class Derived : public Base {};
    Base* basePtr = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        cout << "dynamic_cast succeeded.\n";
    } else {
        cout << "dynamic_cast failed.\n";
    }

    // const_cast
    const int c = 20;
    int* d = const_cast<int*>(&c);
    *d = 30;
    cout << "const_cast: " << *d << endl;

    // reinterpret_cast
    int e = 65;
    char* f = reinterpret_cast<char*>(&e);
    cout << "reinterpret_cast: " << *f << endl;

    return 0;
}

/*
Applications:
- Converting data types in complex systems.
- Implementing polymorphic behavior and memory manipulation.
- Changing the constness of variables.

Summary:
Type casting in C++ includes static_cast, dynamic_cast, const_cast, and reinterpret_cast, each serving different purposes for data conversion and manipulation.
*/
