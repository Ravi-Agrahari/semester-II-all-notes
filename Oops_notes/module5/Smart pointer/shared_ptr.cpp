/*
Shared pointer 
----------------

A shared pointer is a smart pointer that allows multiple pointers to share ownership of a single object.

Syntax:
    shared_ptr<Resource> ptr1 = make_shared<Resource>();

*/

#include <iostream>
#include <memory> // Include the memory header for smart pointers

using namespace std;


int main() {
    // Creating a shared pointer to an integer initialized to 10
    shared_ptr<int> ptr1 = make_shared<int>(10);

    // Creating a new scope to test the use count
    {
        // Another shared pointer pointing to the same integer
        shared_ptr<int> ptr2 = ptr1;
        // Printing the use count, which should be 2 here
        cout << "ptr1 use count: " << ptr1.use_count() << endl;
        // ptr2 goes out of scope here, so the use count will decrease
    }

    // Printing the use count again, which should be 1 now
    cout << "ptr1 use count: " << ptr1.use_count() << endl;

    return 0;
}
