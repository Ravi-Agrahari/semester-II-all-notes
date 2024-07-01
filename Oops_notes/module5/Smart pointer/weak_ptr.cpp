/*
Weak pointer 
-------------

A weak pointer is a smart pointer that holds a non-owning reference to an object that is managed by a shared_ptr. 
It is used to break circular references that can occur when two shared_ptrs reference each other.

Syntax:
    weak_ptr<Resource> ptr;

Important Points:
    - Weak pointers do not contribute to the reference count of the object.
    - They need to be converted to shared pointers using lock() before use.
    - They can be checked for validity using expired() or lock().

Use Case:
    - Preventing cyclic references in a graph or tree structure where nodes have shared_ptrs pointing to each other.
*/

#include <iostream>
#include <memory> // Include the memory header for smart pointers

using namespace std;

class Node {
public:
    int value;
    shared_ptr<Node> next; // Shared ownership of the next node
    weak_ptr<Node> prev; // Weak reference to the previous node

    Node(int val) : value(val) {
        cout << "Node created with value: " << value << endl;
    }
    ~Node() {
        cout << "Node destroyed with value: " << value << endl;
    }
};

int main() {
    // Creating nodes
    auto node1 = make_shared<Node>(1);
    auto node2 = make_shared<Node>(2);

    // Linking nodes
    node1->next = node2;
    node2->prev = node1; // This creates a weak reference from node2 to node1

    // Accessing nodes
    if (auto prev = node2->prev.lock()) { // Convert weak_ptr to shared_ptr using lock()
        cout << "Previous node value: " << prev->value << endl;
    } else {
        cout << "Previous node no longer exists." << endl;
    }

    // Node destruction
    node1.reset(); // Destroy node1
    if (node2->prev.expired()) { // Check if the weak_ptr is expired
        cout << "Previous node is expired." << endl;
    } else {
        cout << "Previous node is still valid." << endl;
    }

    return 0;
}
