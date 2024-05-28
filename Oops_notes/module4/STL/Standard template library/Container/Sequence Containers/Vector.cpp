/*
### Vector 
    The std::vector is a dynamic array that can resize itself automatically when elements are added or removed.

    Key Points:

        ->Dynamic size.
        ->Provides member functions like push_back(), size(), begin(), end(), etc.
        ->Efficient random access.
*/

// example : 


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create an empty vector of integers
    vector<int> vec;

    // Insert elements into the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Access elements using index
    cout << "Elements of the vector:";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << " " << vec[i];
    }
    cout << endl;

    // Access elements using iterator
    cout << "Elements of the vector (using iterator):";
    
    // for (auto it = vec.begin(); it != vec.end(); ++it)  
    // either we can use auto or ... 

    // define iterator like this 
    vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;

    // Access elements using range-based for loop
    cout << "Elements of the vector (using range-based for loop):";
    for (int x : vec) {
        cout << " " << x;
    }
    cout << endl;

    // Modify elements
    vec[1] = 25;

    // Erase element at position 0
    vec.erase(vec.begin());

    // Insert element at position 1
    vec.insert(vec.begin() + 1, 35);

    // Check if vector is empty
    if (vec.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Size of the vector: " << vec.size() << endl;
    }

    // Clear the vector
    vec.clear();

    // Check if vector is empty after clearing
    if (vec.empty()) {
        cout << "Vector is empty after clearing." << endl;
    }

    return 0;
}
