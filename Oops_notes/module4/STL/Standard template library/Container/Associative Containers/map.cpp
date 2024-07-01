/*
Definition:
    .  std::map is an associative container that stores key-value pairs in a sorted order based on the keys. Each key is unique within the map.

Note:
    - std::map provides fast insertion, deletion, and search operations with logarithmic complexity.

    - It's implemented using a balanced binary search tree (usually red-black tree) to ensure efficient operations.

    - Elements in std::map are always sorted based on the keys.

# time complexities 
    - Insertion: O(log n)
    - Deletion: O(log n)
    - Search: O(log n)
    - Access: O(log n)
    - Iteration: O(n)
    
*/


#include <iostream>
#include <map>
using namespace std;


int main() {

// Declare and initialize a map of integers (key) to characters (value)
    map<int, char> m = { {3, 'c'}, {2, 'b'} , {1, 'a'}};
    // by default map is sorted in accending order by key ... (i.e ordered_map)

// Insert elements into the map // O(log(n))
    m.insert({4, 'd'});  
    m[5] = 'e'; // Another way to insert elements

// Print elements using range-based for loop // O(nlog(n))
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

// Check if map contains a specific key // .find() return iterator ... 
    int key = 3;
    auto it = m.find(key) ;
    if (it != m.end()) {
        cout << "Key " << key << " exists in the map." << endl;
        cout << it->first << " " << it->second << endl ;

    } else {
        cout << "Key " << key << " does not exist in the map." << endl;
    }

// Remove an element from the map

    m.erase(3); // by passing key 

    auto it = m.find(10) ; 
    if (it != m.end()) { // if iterator don't exits it will through error , checking is good practice ... 
        m.erase(it); // by passing iterator ... 
    }    



// Check if map is empty
    if (m.empty()) {
        cout << "Map is empty." << endl;
    } else {
        cout << "Size of the map: " << m.size() << endl;
    }

    return 0;
    
}
