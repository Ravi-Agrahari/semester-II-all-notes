/*
    Definition:
        std::array is a container that encapsulates fixed-size arrays with a defined size at compile-time. It provides a safe and efficient way to store and access elements in contiguous memory.

    Note:

    -> Unlike built-in arrays, std::array provides several advantages, such as bounds checking and easy integration with STL algorithms.

    -? It's preferred over built-in arrays in modern C++ due to its safety features and compatibility with standard library components.

*/

#include <iostream>
#include <array>
using namespace std;

int main() {
    // Declare and initialize an array of integers with size 5
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Access elements using index
    cout << "Elements of the array:";
    for (size_t i = 0; i < arr.size(); ++i) { 
        cout << " " << arr[i];
    }
    cout << endl;

    // Access elements using range-based for loop
    cout << "Elements of the array (using range-based for loop):";
    for (int x : arr) {
        cout << " " << x;
    }
    cout << endl;

    // Modify elements
    arr[2] = 30;

    // Access elements using at() method (with range checking)
    cout << "Element at index 2: " << arr.at(2) << endl;

    // Access first and last elements
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    // Check if array is empty
    if (arr.empty()) {
        cout << "Array is empty." << endl;
    } else {
        cout << "Size of the array: " << arr.size() << endl;
    }

    return 0;
}
