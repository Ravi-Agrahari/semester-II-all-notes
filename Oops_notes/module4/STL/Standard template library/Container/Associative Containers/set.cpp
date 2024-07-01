/*
    set in C++

    Definition:
        -> std::set is an associative container that stores unique elements in a sorted order. It provides fast insertion, deletion, and search operations with logarithmic complexity.

    Note:

        -> Elements in a std::set are always sorted in ascending order, and duplicate elements are not allowed.

        -> It's implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

        -> std::set provides a rich set of operations, including insertion, deletion, search, and iteration.

    #operation which can be performed on set
    1. Insertion: insert() function is used to insert elements into the set.
    2. Deletion: erase() function is used to delete elements from the set.
    3. Search: find() function is used to search for an element in the set.
    4. Iteration: begin() and end() functions are used to iterate over the elements
    5. Clear() 
    6. Empty()
    7. Size()

*/

#include <iostream>
#include <set>
using namespace std;

void printDecendingSet(set<int, greater<int>> s){
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}


int main() {
    // Declare and initialize a set of integers
    set<int> s = {3, 1, 4, 1, 5, 9};


    // make set in decending order 
    set<int , greater<int>> my_set = {5,3,4,2,6,9} ; 
    printDecendingSet(my_set) ; 


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
