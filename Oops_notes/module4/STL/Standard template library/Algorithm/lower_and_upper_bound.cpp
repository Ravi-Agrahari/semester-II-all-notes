#include <iostream>
#include <vector>
#include <algorithm> // For lower_bound and upper_bound
#include <map>
#include <set> 

using namespace std;

/*
Definition:
- lower_bound: Returns an iterator pointing to the first element in the range [first, last) that is not less than (>=) the specified value.
- upper_bound: Returns an iterator pointing to the first element in the range [first, last) that is greater than (>) the specified value.

Note:
- Both functions require the range to be sorted in ascending order.
- Complexity of both is O(log n).
*/

int main() {
    vector<int> vec = {1, 2, 4, 4, 4, 5, 6, 8, 9};

    // Using lower_bound
    

    // here auto refers to iterator (i.e vector<int>::iterator )
    auto lower = lower_bound(vec.begin(), vec.end(), 4);
    if (lower != vec.end()) {
        cout << "The first element not less than 4 is: " << *lower << " at position: " << distance(vec.begin(), lower) << endl;
        // Output: The first element not less than 4 is: 4 at position: 2
    } else {
        cout << "No element found that is not less than 4." << endl;
    }

    // Using upper_bound
    auto upper = upper_bound(vec.begin(), vec.end(), 4);
    if (upper != vec.end()) {
        cout << "The first element greater than 4 is: " << *upper << " at position: " << distance(vec.begin(), upper) << endl;
        // Output: The first element greater than 4 is: 5 at position: 5
    } else {
        cout << "No element found that is greater than 4." << endl;
    }

    // Example when the value is not present in the container
    lower = lower_bound(vec.begin(), vec.end(), 7);
    upper = upper_bound(vec.begin(), vec.end(), 7);

    cout << "For value 7:" << endl;
    if (lower != vec.end()) {
        cout << "The first element not less than 7 is: " << *lower << " at position: " << distance(vec.begin(), lower) << endl;
        // Output: The first element not less than 7 is: 8 at position: 7
    } else {
        cout << "No element found that is not less than 7." << endl;
    }

    if (upper != vec.end()) {
        cout << "The first element greater than 7 is: " << *upper << " at position: " << distance(vec.begin(), upper) << endl;
        // Output: The first element greater than 7 is: 8 at position: 7
    } else {
        cout << "No element found that is greater than 7." << endl;
    }


// using upper_bound and lower_bound in map

    // Creating a map
    map<int, int> mp = {{1, 2}, {1, 1}, {3, 6}, {4, 5}, {4, 2}, {5, 2}};
    
    // Using the member function lower_bound
    auto it = mp.lower_bound(3);

    if (it != mp.end()) {
        cout << "Lower bound of 3 in map is: (" << it->first << ", " << it->second << ")" << endl;
    } else {
        cout << "No element with key >= 3 found in the map" << endl;
    } 

    auto up_it = mp.upper_bound(3) ; 
    if (up_it != mp.end()) {
        cout << "Upperbound of 3 in map is: (" << up_it->first << ", " << up_it->second << ")" << endl;
    } else {
        cout << "No element with key > 3 found in the map" << endl;
    } 


// similary for sets ,,, try to understand .. 

    return 0;
}
