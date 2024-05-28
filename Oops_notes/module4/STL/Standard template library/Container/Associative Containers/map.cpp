/*
Definition:
    .  std::map is an associative container that stores key-value pairs in a sorted order based on the keys. Each key is unique within the map.

Note:
    - std::map provides fast insertion, deletion, and search operations with logarithmic complexity.

    - It's implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

    - Elements in std::map are always sorted based on the keys.
*/


#include <iostream>
#include <map>
using namespace std;


int main() {

// Declare and initialize a map of integers (key) to characters (value)
    map<int, char> m = {{1, 'a'}, {2, 'b'}, {3, 'c'}};

// Insert elements into the map
    m.insert({4, 'd'});
    m[5] = 'e'; // Another way to insert elements

// Print elements using range-based for loop
    cout << "Elements of the map:";
    for (const auto& pair : m) {
        cout << " (" << pair.first << ", " << pair.second << ")";
    }
    cout << endl;

// Access and modify elements
    cout << "Value at key 2: " << m[2] << endl;
    m[2] = 'x'; // Modify value at key 2

// Print elements using iterators
    cout << "Elements of the map after modification:";
    for (auto it = m.begin(); it != m.end(); ++it) {
        // cout << " (" << (*it).first << ", " << (*it).second << ")";
        cout << " (" << it->first << ", " << it->second << ")";
    }
    cout << endl;

// Check if map contains a specific key
    int key = 3;
    if (m.find(key) != m.end()) {
        cout << "Key " << key << " exists in the map." << endl;
    } else {
        cout << "Key " << key << " does not exist in the map." << endl;
    }

// Remove an element from the map
    m.erase(3);

// Check if map is empty
    if (m.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Size of the map: " << m.size() << endl;
    }

    return 0;
}
