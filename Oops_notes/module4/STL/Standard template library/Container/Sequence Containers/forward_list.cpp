/*
    std::forward_list in C++
    Definition:
        ->   std::forward_list is a singly linked list container that allows fast insertion and deletion at the beginning of the list. It provides forward iterators and is more memory-efficient than std::list due to its singly linked structure.

    Note:

        -> Unlike std::list, std::forward_list only supports forward traversal (from beginning to end) and does not provide bidirectional iterators.

        -> It's suitable for scenarios where frequent insertion and deletion operations are performed at the beginning of the list, and backward traversal is not required.
*/

#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    // Declare and initialize a forward_list of integers
    forward_list<int> flst = {1, 2, 3, 4, 5};

    // Insert element at the beginning
    flst.push_front(0);

    // Print elements using range-based for loop
    cout << "Elements of the forward_list:";
    for (int x : flst) {
        cout << " " << x;
    }
    cout << endl;

    // Insert element after the first element
    auto it = flst.begin();
    ++it; // Advance iterator to the second element
    flst.insert_after(it, 10);

    // Print elements using iterators
    cout << "Elements of the forward_list after inserting:";
    for (auto it = flst.begin(); it != flst.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Remove element after the first element
    it = flst.begin();
    flst.erase_after(it);

    // Print elements using range-based for loop
    cout << "Elements of the forward_list after erasing:";
    for (int x : flst) {
        cout << " " << x;
    }
    cout << endl;

    // Check if forward_list is empty
    if (flst.empty()) {
        cout << "Forward_list is empty." << endl;
    } else {
        cout << "Size of the forward_list: " << distance(flst.begin(), flst.end()) << endl;
    }

    return 0;
}
