/*
    std::multiset in C++
    Definition:
        -> std::multiset is an associative container that allows storing multiple elements with equivalent keys in a sorted order. It's similar to std::set, but it allows duplicate elements.

    Note:

        -> Unlike std::set, std::multiset allows duplicate elements and stores them in sorted order based on the values.

        -> It provides fast insertion, deletion, and search operations with logarithmic complexity.
        
        -> std::multiset is implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare and initialize a multiset of integers
    multiset<int> ms = {3, 1, 4, 1, 5, 9};

    // Insert elements into the multiset
    ms.insert(2);

    // Insert duplicate elements into the multiset
    ms.insert(1);
    ms.insert(4);

    // Print elements using range-based for loop
    cout << "Elements of the multiset:";
    for (int x : ms) {
        cout << " " << x;
    }
    cout << endl;

    // Count the occurrences of a specific element
    int key = 1;
    cout << "Number of occurrences of " << key << ": " << ms.count(key) << endl;

    // Remove specific occurrences of an element
    ms.erase(1);

    // Print elements using iterators
    cout << "Elements of the multiset after erasing:";
    for (auto it = ms.begin(); it != ms.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Check if multiset is empty
    if (ms.empty()) {
        cout << "Multiset is empty." << endl;
    } else {
        cout << "Size of the multiset: " << ms.size() << endl;
    }

    return 0;
}
