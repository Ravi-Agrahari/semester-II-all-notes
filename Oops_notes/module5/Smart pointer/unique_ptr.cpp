/*
Unique pointer 
----------------

A unique pointer is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique pointer goes out of scope. 
No two unique pointers can own the same object, ensuring unique ownership.

Syntax:
    unique_ptr<Resource> ptr = make_unique<Resource>();

Important Points:
    - Unique pointers cannot be copied, only moved.
    - They provide exclusive ownership of the object they point to.
*/

#include <iostream>
#include <memory> // Include the memory header for smart pointers

using namespace std;

// Function to demonstrate ownership transfer with unique pointers
void displayUniquePointer(unique_ptr<int> ptr) {
    cout << "Value inside unique_ptr: " << *ptr << endl;
    // Unique pointer will be destroyed here, and the memory will be freed.
}

int main() {
    // Creating a unique pointer to an integer initialized to 20
    unique_ptr<int> ptr1 = make_unique<int>(20);
    
    // Uncommenting the next line will cause a compilation error because unique_ptr cannot be copied
    // unique_ptr<int> ptr2 = ptr1;

    // Correct way to transfer ownership is to use std::move
    unique_ptr<int> ptr2 = move(ptr1);

    // Now ptr1 is empty (nullptr), and ptr2 owns the integer
    if (!ptr1) {
        cout << "ptr1 is now empty." << endl;
    }

    // ptr2 owns the integer and can be used
    cout << "ptr2 value: " << *ptr2 << endl;

    // Passing the unique pointer to a function (ownership is transferred)
    displayUniquePointer(move(ptr2));

    // After transfer, ptr2 is also empty
    if (!ptr2) {
        cout << "ptr2 is now empty after transferring ownership to the function." << endl;
    }

    return 0;
}
