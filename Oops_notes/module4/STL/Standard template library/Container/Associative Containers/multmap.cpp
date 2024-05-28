/*
Definition:
    .  std::multimap is an associative container that allows storing multiple key-value pairs in a sorted order based on the keys. Unlike std::map, std::multimap allows duplicate keys.

Note:
    - std::multimap provides fast insertion, deletion, and search operations with logarithmic complexity.

    - It's implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

    - Elements in std::multimap are always sorted based on the keys.
*/


#include <iostream>
#include <map>
using namespace std;


int main() {
    // Declare and initialize a multimap of integers (key) to characters (value)
    multimap<int, char> mm = {{1, 'a'}, {2, 'b'}, {2, 'c'}, {3, 'd'}};

    // Insert elements into the multimap
    mm.insert({3, 'e'});
    mm.insert({4, 'f'});

    // Print elements using range-based for loop
    cout << "Elements of the multimap:";
    for (const auto& pair : mm) {
        cout << " (" << pair.first << ", " << pair.second << ")";
    }
    cout << endl;

    // Access elements using iterators
    cout << "Elements of the multimap after insertion:";
    for (auto it = mm.begin(); it != mm.end(); ++it) {
        cout << " (" << it->first << ", " << it->second << ")";
    }
    cout << endl;

    // Check if multimap contains a specific key
    int key = 2;
    auto range = mm.equal_range(key);
    cout << "Values associated with key " << key << ":";
    for (auto it = range.first; it != range.second; ++it) {
        cout << " " << it->second;
    }
    cout << endl;

    // Remove all occurrences of a specific key
    mm.erase(key);

    // Check if multimap is empty
    if (mm.empty()) {
        cout << "Multimap is empty." << endl;
    } else {
        cout << "Size of the multimap: " << mm.size() << endl;
    }

    return 0;
}
