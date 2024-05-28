/*
    set in C++

    Definition:
        -> std::set is an associative container that stores unique elements in a sorted order. It provides fast insertion, deletion, and search operations with logarithmic complexity.

    Note:

        -> Elements in a std::set are always sorted in ascending order, and duplicate elements are not allowed.

        -> It's implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

        -> std::set provides a rich set of operations, including insertion, deletion, search, and iteration.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Declare and initialize a set of integers
    set<int> s = {3, 1, 4, 1, 5, 9};

    // Insert elements into the set
    s.insert(2);

    // Print elements using range-based for loop
    cout << "Elements of the set:";
    for (int x : s) {
        cout << " " << x;
    }
    cout << endl;

    // Check if an element exists in the set
    int key = 5;
    if (s.find(key) != s.end()) {
        cout << key << " exists in the set." << endl;
    } else {
        cout << key << " does not exist in the set." << endl;
    }

    // Remove an element from the set
    s.erase(1);

    // Print elements using iterators
    cout << "Elements of the set after erasing:";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Check if set is empty
    if (s.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Size of the set: " << s.size() << endl;
    }

    return 0;
}
