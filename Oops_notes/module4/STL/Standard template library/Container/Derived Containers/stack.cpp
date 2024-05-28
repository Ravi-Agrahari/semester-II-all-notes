#include <iostream>
#include <stack>
using namespace std;

/*
    Definition:
        std::stack is a container adaptor that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.

    Note:

    - std::stack allows elements to be inserted and removed only from one end, known as the top of the stack.

    - It is implemented as an adaptor over other container classes like std::deque, std::vector, or std::list. By default, it uses std::deque.

    - The main operations are push (insert element), pop (remove element), top (access top element), empty (check if the stack is empty), and size (get the number of elements).
*/

int main() {
    // Declare a stack of integers
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Access and print the top element
    cout << "Top element: " << s.top() << endl; // Output: 30

    // Remove the top element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: 20

    // Push another element
    s.push(40);
    cout << "Top element after pushing 40: " << s.top() << endl; // Output: 40

    // Print all elements in the stack
    cout << "Elements in the stack:";
    while (!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }
    cout << endl; // Output: 40 20 10

    // Check if the stack is empty
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    // Push elements again to check the size
    s.push(50);
    s.push(60);
    cout << "Size of the stack: " << s.size() << endl; // Output: 2

    return 0;
}
