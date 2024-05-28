#include <iostream>
#include <vector>
#include <algorithm> // For sort, reverse, find, count, for_each, transform
#include <numeric>   // For accumulate

using namespace std;

/*
This program demonstrates the usage of various STL algorithms including:
- sort: To sort the elements of a container.
- reverse: To reverse the order of elements in a container.
- find: To find an element in a container.
- count: To count occurrences of an element in a container.
- accumulate: To calculate the sum of elements in a container.
- for_each: To apply a function to each element in a container.
- transform: To apply a function to each element and store the result in another container.
*/

// Function to print an element
void printElement(int n) {
    cout << n << " ";
}

// Function to square an element
int square(int n) {
    return n * n;
}

int main() {
    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // Sorting the vector in ascending order
    sort(vec.begin(), vec.end());
    cout << "Sorted vector: ";
    for_each(vec.begin(), vec.end(), printElement); // Output: 1 1 2 3 4 5 5 6 9
    cout << endl;

    // Reversing the vector
    reverse(vec.begin(), vec.end());
    cout << "Reversed vector: ";
    for_each(vec.begin(), vec.end(), printElement); // Output: 9 6 5 5 4 3 2 1 1
    cout << endl;

    // Finding the first occurrence of 5
    auto it = find(vec.begin(), vec.end(), 5);
    if (it != vec.end()) {
        cout << "Found 5 at position: " << distance(vec.begin(), it) << endl; // Output: Found 5 at position: 2
    } else {
        cout << "5 not found in the vector." << endl;
    }

    // Counting the number of occurrences of 1
    int count_1 = count(vec.begin(), vec.end(), 1);
    cout << "Number of occurrences of 1: " << count_1 << endl; // Output: Number of occurrences of 1: 2

    // Calculating the sum of all elements in the vector
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "Sum of elements: " << sum << endl; // Output: Sum of elements: 36

    // Using transform to square each element
    transform(vec.begin(), vec.end(), vec.begin(), square);
    cout << "Squared elements in the vector: ";
    for_each(vec.begin(), vec.end(), printElement); // Output: 81 36 25 25 16 9 4 1 1
    cout << endl;

    return 0;
}
