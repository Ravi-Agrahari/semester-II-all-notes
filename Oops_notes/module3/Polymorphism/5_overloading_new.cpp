/*
Introduction and Explanation:
In C++, the `new` operator is used to allocate memory for objects dynamically. It is possible to overload the `new` operator to customize memory allocation for a class. Overloading `new` allows you to control how memory is allocated and can be useful for debugging, logging, or optimizing memory usage.

To overload the `new` operator, you need to define a static member function in the class with the following signature:
    void* operator new(size_t size);

Example Program (in C++):
*/

#include <iostream>
#include <cstdlib> // For malloc and free
using namespace std;

class MyClass {
public:
    int x;
    MyClass() : x(0) {
        cout << "MyClass constructor called, x = " << x << endl;
    }
    
    // Overloading the new operator
    static void* operator new(size_t size) {
        cout << "Overloading new operator, size = " << size << endl;
        void* p = malloc(size);
        if (!p) {
            bad_alloc ba;
            throw ba;
        }
        return p;
    }

    // Overloading the delete operator
    static void operator delete(void* p) {
        cout << "Overloading delete operator" << endl;
        free(p);
    }
};

int main() {
    // Using overloaded new operator
    MyClass* obj = new MyClass();
    
    // Using overloaded delete operator
    delete obj;
    return 0;
}

/*
Applications:
- Customizing memory allocation and deallocation for specific classes.
- Implementing custom memory management strategies.
- Logging or debugging memory allocation.

Summary:
Overloading the `new` operator in C++ allows you to customize memory allocation for a class. This can be useful for various purposes, including optimizing memory usage, logging, and debugging. The `new` operator is overloaded by defining a static member function in the class with the appropriate signature.
*/
