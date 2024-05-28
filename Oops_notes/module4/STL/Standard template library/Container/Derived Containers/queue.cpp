#include <iostream>
#include <queue>
using namespace std;

/*
    Definition:
        std::queue is a container adaptor that gives the programmer the functionality of a queue - specifically, a FIFO (first-in, first-out) data structure.

    Note:

        - std::queue allows elements to be added at the back (end) and removed from the front.

        - It is implemented as an adaptor over other container classes like std::deque or std::list. By default, it uses std::deque.

        - The main operations are push (add element to the back), pop (remove element from the front), front (access the front element), back (access the back element), empty (check if the queue is empty), and size (get the number of elements).

*/

int main() {

    // Declare a queue of integers
    queue<int> q;

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Access and print the front element
    cout << "Front element: " << q.front() << endl; // Output: 10

    // Access and print the back element
    cout << "Back element: " << q.back() << endl; // Output: 30

    // Remove the front element
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Output: 20

    // Print all elements in the queue
    cout << "Elements in the queue:";
    while (!q.empty()) {
        cout << " " << q.front();
        q.pop();
    }
    cout << endl; // Output: 20 30

    // Check if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    // Push elements again to check the size
    q.push(40);
    q.push(50);
    cout << "Size of the queue: " << q.size() << endl; // Output: 2

    return 0;
}
