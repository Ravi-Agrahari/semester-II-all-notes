/*
 # Deque :

    std::deque (double-ended queue) is a container that provides dynamic resizing and efficient insertion and deletion operations at both ends. It allows fast insertion and deletion at the beginning and end of the sequence.

    Note:

    -> std::deque is similar to std::vector but provides efficient insertion and deletion at both ends, unlike std::vector.

    -> It's implemented as a sequence of individually allocated fixed-size arrays, allowing for efficient growth and shrinkage.
*/


#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Declare and initialize a deque of integers
    deque<int> deq = {1, 2, 3, 4, 5};

    // Push elements at both ends
    deq.push_front(0);
    deq.push_back(6);

    // Print elements using range-based for loop
    cout << "Elements of the deque:";
    for (int x : deq) {
        cout << " " << x;
    }
    cout << endl;

    // Pop elements from both ends
    deq.pop_front();
    deq.pop_back();

    // Print elements using iterators
    cout << "Elements of the deque after popping:";
    for (auto it = deq.begin(); it != deq.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Access elements using index
    cout << "Element at index 2: " << deq[2] << endl;

    // Check if deque is empty
    if (deq.empty()) {
        cout << "Deque is empty." << endl;
    } else {
        cout << "Size of the deque: " << deq.size() << endl;
    }

    return 0;
}
